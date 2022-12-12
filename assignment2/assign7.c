// Q7 Read into the computer a five-letter word that
// has been encoded using the scheme described above. Decode
// the word by reversing the above procedure, then write out
//  the decoded word.
#include <stdio.h>
int main()
{
    char word[5];
    printf("Enter a decoded version word: ");
    scanf("%s", word);
    printf("The encoded of the word is: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%c", word[i] + 30);
    }
    printf("\n");
    return 0;
}
