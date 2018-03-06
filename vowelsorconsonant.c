#include <stdio.h>
#include<conio.h>
void main()
{
    char s;
    int islowercaseVowel, isuppercaseVowel;

    printf("Enter an alphabet: ");
    scanf("%c",&s);
    islowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isuppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (islowercaseVowel || isuppercaseVowel)
        printf("%c is a vowel.", s);
    else
        printf("%c is a consonant.", s);
   getch();
}
