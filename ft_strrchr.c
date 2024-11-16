#include <stddef.h>

char *ft_strrchr(const char *str, int c) {
    const char *last_occurrence = NULL;
    while (*str) {
        if (*str == (char)c) {
            last_occurrence = str;
        }
        str++;
    }
    return (char *)(*str == (char)c ? str : last_occurrence);
}