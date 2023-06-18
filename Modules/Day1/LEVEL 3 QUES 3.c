LEVEL 3 QUES 3

#include <stdio.h>

int isVowel(char c) {
    int result = 0;

    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            result = 1;  // Character is a vowel
            break;
        default:
            result = 0;  // Character is not a vowel
            break;
    }

    return result;
}

int main() {
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);

    int isVowelResult = isVowel(character);

    if (isVowelResult == 1) {
        printf("Vowel\n");
    } else {
        printf("Not Vowel\n");
    }

    return 0;
}
