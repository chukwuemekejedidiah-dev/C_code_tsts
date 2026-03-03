#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_ATTEMPTS 5
#define PASSWORD_MIN_LENGTH 14

const char *breached_passwords[] = {
    "Password123!",
    "1234567890",
    "Qwerty123!",
    "Letmein123!"
};

int isBreached(const char *password) {
    int count = sizeof(breached_passwords) / sizeof(breached_passwords[0]);
    for (int i = 0; i < count; i++) {
        if (strcmp(password, breached_passwords[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

int isStrongPassword(const char *password) {
    int upper = 0, lower = 0, digit = 0, special = 0;

    if (strlen(password) < PASSWORD_MIN_LENGTH)
        return 0;

    for (int i = 0; password[i]; i++) {
        if (isupper(password[i])) upper = 1;
        else if (islower(password[i])) lower = 1;
        else if (isdigit(password[i])) digit = 1;
        else special = 1;
    }

    return upper && lower && digit && special;
}

int main() {
    char password[100];
    int attempts = 0;

    while (attempts < MAX_ATTEMPTS) {
        printf("Enter password: ");
        scanf("%99s", password);

        if (isBreached(password)) {
            printf(" Password found in breach database.\n");
        }
        else if (!isStrongPassword(password)) {
            printf(" Password does not meet complexity rules.\n");
        }
        else {
            printf(" Password accepted.\n");
            return 0;
        }

        attempts++;
        printf("Attempts left: %d\n\n", MAX_ATTEMPTS - attempts);
    }

    printf(" Too many attempts. Access blocked.\n");
    return 0;
}