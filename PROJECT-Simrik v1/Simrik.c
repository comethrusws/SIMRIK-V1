/*SIMRIK: interactive chatbot project
Author: Basab Jha
Version: 0.2.16*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// Function to convert a string to lowercase
void toLowercase(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    //int name;
    str* name;
    char input[100];
    char output[100];
    
    printf("Simrik: Hi there!👀👋\n");
    while (1) {
        printf("User: ");
        fgets(input, sizeof(input), stdin);
        strtok(input, "\n"); 
        toLowercase(input); 
        
        // analyse input ani give euta output from yo part
        if (strstr(input, "hello") != NULL || strstr(input, "hey") != NULL || strstr(input, "hi") != NULL){
            strcpy(output, "how may i help you today??😊🙋‍♂️ ");
        } else if (strstr(input, "talk to me") != NULL || strstr(input, "lets talk") != NULL || strstr(input, "can we talk?") != NULL || strstr(input, "talk") != NULL ) {
            strcpy(output, "Sure! i'm very excited to make a friend today!");}
        else if (strstr(input, "how are you") != NULL) {
            strcpy(output, "I'm doing well, thank you for asking.");
        } else if (strstr(input, "what is your name") != NULL || strstr(input, "whats your name") != NULL || strstr(input, "who are you") != NULL) {
            strcpy(output, "My name is SIMRIK ;) What is your name?");
            //scanf("%d", name);
           // printf("Nice to meet you, %d!\n, name");
              gets();
              printf("hello, %d\n",&name);

        } else if (strstr(input,"My name is ") !=NULL) {
            strcpy(output,"Nice to meet you!");
        }
        else if (strstr(input, "bye") != NULL || strstr(input, "goodbye") != NULL) {
            strcpy(output, "Goodbye! I'll miss you :/");
            break;
        } 
        else {
            strcpy(output, "I'm sorry, I don't quite understand. can you repeat that?");
        }
        
        printf("Chatbot: %s\n", output);
    }
    
    return 0;
}
