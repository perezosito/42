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

// Estructura para almacenar la información del mapa
typedef struct {
    int num_lines;
    char empty_char;
    char obstacle_char;
    char full_char;
    char **map;
} t_map;

// Función para leer la primera línea y obtener la información del mapa
t_map *read_map_info(int fd) {
    char buffer[1024];
    int i = 0;
    char c;

    // Leer la primera línea
    while (read(fd, &c, 1) > 0 && c != '\n' && i < 1023) {
        buffer[i++] = c;
    }
    buffer[i] = '\0';

    // Crear estructura para el mapa
    t_map *map_info = (t_map *)malloc(sizeof(t_map));
    if (!map_info) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    // Analizar la primera línea
    map_info->num_lines = atoi(buffer); // Número de líneas del mapa
    int len = i;
    map_info->empty_char = buffer[len - 3]; // Carácter vacío
    map_info->obstacle_char = buffer[len - 2]; // Carácter obstáculo
    map_info->full_char = buffer[len - 1]; // Carácter lleno

    return map_info;
}

// Función para leer el contenido del mapa
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

    // Leer la información del mapa
    t_map *map_info = read_map_info(fd);

    // Leer el contenido del mapa
    read_map_content(fd, map_info);

    // Cerrar el archivo
    close(fd);

    // Imprimir el mapa leído (solo para verificar)
    for (int i = 0; i < map_info->num_lines; i++) {
        write(1, map_info->map[i], 1024);
        write(1, "\n", 1);
    }

    // Liberar memoria
    for (int i = 0; i < map_info->num_lines; i++) {
        free(map_info->map[i]);
    }
    free(map_info->map);
    free(map_info);

    return 0;
}

