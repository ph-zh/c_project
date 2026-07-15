#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {

    // char name[50] = "";

    // printf("Enter your name: ");
    // fgets(name, sizeof(name), stdin);
    // name[strlen(name) - 1] = '\0';

    // while(strlen(name) == 0) { // lenght of the string
    //     printf("Name cannot be empty! Please enter your name: ");
    //     fgets(name, sizeof(name), stdin);
    //     name[strlen(name) - 1] = '\0';

    // }

    // printf("Hello %s\n", name);
    // printf("Number of letters in your name is: %d", strlen(name));

    bool isRunning = true;
    char response = '\0';

    do {
        printf("You are playing a game\n");
        printf("Whould you like to continue ? (Y = yes, N = no): ");
        scanf(" %c", &response);

        if(response != 'Y' && response != 'y') {
            isRunning = false;
        }
    } while(isRunning);
    printf("You exit the game");

    return 0;
}