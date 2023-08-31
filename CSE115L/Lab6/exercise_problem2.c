#include<stdio.h>

int main(){
    char letter;
    letter = 'a';
    while (letter <= 'z')
    {
        printf("%c ",letter);
        letter++;
    }

    printf("\n");
    letter = 'A';

    while (letter <= 'Z')
    {
        printf("%c ",letter);
        letter++;
    }
    
}