#include <stdio.h>
#include <ctype.h> 


int isVowel(char c) {
    c = tolower(c);

    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isVowel(ch)) {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is not a vowel.\n", ch);
    }

    return 0;
}
