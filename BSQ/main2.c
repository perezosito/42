/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:24:26 by miperez-          #+#    #+#             */
/*   Updated: 2024/07/30 15:24:29 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

typedef struct {
    int num_lines;
    char empty_char;
    char obstacle_char;
    char full_char;
    char **map;
} t_map;

// Leer la información del mapa
t_map *read_map_info(int fd) {
    char buffer[1024];
    int i = 0;
    char c;

    while (read(fd, &c, 1) > 0 && c != '\n' && i < 1023) {
        buffer[i++] = c;
    }
    buffer[i] = '\0';

    t_map *map_info = (t_map *)malloc(sizeof(t_map));
    if (!map_info) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    map_info->num_lines = atoi(buffer);
    int len = i;
    map_info->empty_char = buffer[len - 3];
    map_info->obstacle_char = buffer[len - 2];
    map_info->full_char = buffer[len - 1];

    return map_info;
}

// Leer el contenido del mapa
void read_map_content(int fd, t_map *map_info) {
    map_info->map = (char **)malloc(sizeof(char *) * map_info->num_lines);
    if (!map_info->map) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    char c;
    for (int i = 0; i < map_info->num_lines; i++) {
        int j = 0;
        map_info->map[i] = (char *)malloc(sizeof(char) * 1024);
        if (!map_info->map[i]) {
            perror("malloc");
            exit(EXIT_FAILURE);
        }

        while (read(fd, &c, 1) > 0 && c != '\n') {
            map_info->map[i][j++] = c;
        }
        map_info->map[i][j] = '\0';
    }
}

// Encontrar el mayor cuadrado en el mapa
void find_largest_square(t_map *map_info) {
    int **aux = (int **)malloc(sizeof(int *) * map_info->num_lines);
    int max_size = 0;
    int max_i = 0;
    int max_j = 0;

    for (int i = 0; i < map_info->num_lines; i++) {
        aux[i] = (int *)malloc(sizeof(int) * 1024);
    }

    for (int i = 0; i < map_info->num_lines; i++) {
        for (int j = 0; map_info->map[i][j] != '\0'; j++) {
            if (map_info->map[i][j] == map_info->obstacle_char) {
                aux[i][j] = 0;
            } else if (i == 0 || j == 0) {
                aux[i][j] = 1;
            } else {
                aux[i][j] = 1 + (aux[i - 1][j] < aux[i][j - 1] ? (aux[i - 1][j] < aux[i - 1][j - 1] ? aux[i - 1][j] : aux[i - 1][j - 1]) : (aux[i][j - 1] < aux[i - 1][j - 1] ? aux[i][j - 1] : aux[i - 1][j - 1]));
            }

            if (aux[i][j] > max_size) {
                max_size = aux[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }

    for (int i = max_i; i > max_i - max_size; i--) {
        for (int j = max_j; j > max_j - max_size; j--) {
            map_info->map[i][j] = map_info->full_char;
        }
    }

    for (int i = 0; i < map_info->num_lines; i++) {
        free(aux[i]);
    }
    free(aux);
}

int main(int argc, char **argv) {
    if (argc < 2) {
        write(2, "Usage: ./bsq <filename>\n", 25);
        return 1;
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd < 0) {
        perror("open");
        return 1;
    }

    t_map *map_info = read_map_info(fd);
    read_map_content(fd, map_info);
    close(fd);

    find_largest_square(map_info);

    for (int i = 0; i < map_info->num_lines; i++) {
        write(1, map_info->map[i], 1024);
        write(1, "\n", 1);
    }

    for (int i = 0; i < map_info->num_lines; i++) {
        free(map_info->map[i]);
    }
    free(map_info->map);
    free(map_info);

    return 0;
}

