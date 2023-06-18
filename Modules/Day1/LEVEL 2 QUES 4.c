LEVEL 2 QUES 4

#include <stdio.h>
#include <ctype.h>

int findCharacterType(char c) {
    int result;

    if (isalpha(c)) {
        if (isupper(c)) {
            result = 1;  // 'A' to 'Z'
        } else {
            result = 2;  // 'a' to 'z'
        }
    } else if (isdigit(c)) {
        result = 3;  // '0' to '9'
    } else if (isprint(c)) {
        result = 4;  // Any other printable symbols
    } else {
        result = 5;  // Non-printable symbols
    }

    return result;
}

int main() {
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);

    int characterType = findCharacterType(character);

    switch (characterType) {
        case 1:
            printf("Type: 'A' to 'Z'\n");
            break;
        case 2:
            printf("Type: 'a' to 'z'\n");
            break;
        case 3:
            printf("Type: '0' to '9'\n");
            break;
        case 4:
            printf("Type: Any other printable symbol\n");
            break;
        case 5:
            printf("Type: Non-printable symbol\n");
            break;
        default:
            printf("Invalid character type\n");
            break;
    }

    return 0;
}
