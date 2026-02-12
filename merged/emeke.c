#include <stdio.h>
#include <string.h>

int main() {
    char username[20], password[20];

    while (1) {
        printf("Enter username: ");
        scanf("%s", username);

        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(username, "admin") == 0 && strcmp(password, "1234") == 0) {
            printf("Login successful!\n");
            break;
        } else {
            printf("Incorrect username or password. Try again.\n\n");
        }
    }

    return 0;
}


