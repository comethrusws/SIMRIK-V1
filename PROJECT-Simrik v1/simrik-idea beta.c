/*SIMRIK: interactive chatbot project
Author: Basab Jha
Version: beta-0.1*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[20];
    char response[100];

 //esma responsesare pre-written. so  dis not very interactive
    printf("Hi there! What's your name?\n");
    scanf("%s", name);
    printf("Nice to meet you, %s!\n", name);

    printf("Would you like to chat with me?\n");
    scanf("%s", response);

    if (strcmp(response, "sure") == 0) {
        printf("Great! What do you like to do for fun?\n");
        scanf(" %[^\n]", response);
        printf("Wow, %s sounds like a lot of fun! I enjoy learning new things and helping people.\n", response);

        printf("Do you have any pets?\n");
        scanf("%s", response);

        if (strcmp(response, "yes") == 0) {
            printf("Awesome! What kind of pet do you have?\n");
            scanf(" %[^\n]", response);
            printf("I've never had a %s before, but they seem like great companions.\n", response);
        } else {
            printf("That's okay, pets aren't for everyone.\n");
        }

        printf("It was great chatting with you, %s! Have a nice day.\n", name);
    } else {
        printf("That's okay, maybe another time. Have a good day, %s!\n", name);
    }

    return 0;
}
