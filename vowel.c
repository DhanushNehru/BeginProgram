#include<stdio.h>
int main()
{
    char z;
    int isLowerVowel, isUpperVowel;
    printf("Enter an alphabet :: ");
    scanf("%c",&z);

    isLowerVowel = (z == 'A' || z == 'E' || z =='I' || z =='O' || z == 'U' );
    isUpperVowel = (z == 'a' || z == 'e' || z =='i' || z =='o' || z == 'u');


    if(isLowerVowel || isUpperVowel)
        printf("The alphabet is a vowel");
    else
        printf("The alphabet is a consonant");
    return 0;

}
