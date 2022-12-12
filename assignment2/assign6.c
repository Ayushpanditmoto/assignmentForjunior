// Assignment 2
//  Q6 Read a five-letter word into the computer, then
//  encode the word on a letter-by-letter basis by subtracting
//   30 from the numerical value that is used to represent each
//  letter. Thus if the ASCII character set is being used, the
//  letter a (which is represented by the value 97)would become a
//  C (represented by the value 67),etc. Write out
//   the encoded version of the word

#include <stdio.h>
int main()
{
    char word[5];
    printf("Enter a five-letter word: ");
    scanf("%s", word);
    printf("The encoded version of the word is: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%c", word[i] - 30);
    }
    printf("\n");
    return 0;
}