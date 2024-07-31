#include "common_utils.h"

int mein_strcmp(const char* s1, const char* s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}

void mein_strcpy(char *dest, const char *src) {
    while (*src) {
        *dest++ = *src++;
    }
    *dest = '\0';
}

int mein_strlen(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void mein_strcat(char *dest, const char *src) {
    int dest_len = mein_strlen(dest);
    int i = 0;
    while (src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
}

int ft_isdigit(char c) {
    return (c >= '0' && c <= '9');
}

long long ft_atoll(const char *str) {
    long long result = 0;
    int sign = 1;

    while (*str == ' ' || (*str >= 9 && *str <= 13)) str++;
    if (*str == '-' || *str == '+') {
        if (*str == '-') sign = -1;
        str++;
    }
    while (ft_isdigit(*str)) {
        result = result * 10 + (*str - '0');
        str++;
    }
    return sign * result;
}

int is_valid_number(const char *str) {
    while (*str) {
        if (!ft_isdigit(*str)) return 0;
        str++;
    }
    return 1;
}

