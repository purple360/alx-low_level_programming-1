#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "main.h"

bool is_valid_number(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (!isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

long long multiply(char *num1, char *num2) {
    long long n1 = atoll(num1);
    long long n2 = atoll(num2);
    return n1 * n2;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        exit(98);
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    if (!is_valid_number(num1) || !is_valid_number(num2)) {
        printf("Error\n");
        exit(98);
    }

    long long result = multiply(num1, num2);
    printf("%lld\n", result);
    return 0;
}
