/*
Date: 2020/01/17
Author: Ian
Object: Print all the permutations of String entered by user.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char [], int, int); // Swap two chars in str array.
void swap(char str[], int i, int j){
    char temp;
    temp = str[j];
    str[j] = str[i];
    str[i] = temp;
}

void perm(char [], int, int); // String Permutation by recursive strategy.
void perm(char str[], int index, int strLength){
    int i; // indicator
    if(index == strLength){
        for(i=0; i<strLength; i++){ // print a permutation
            printf("%c", str[i]);
        }
        printf("\n");
    }else{
        for(i=index; i<strLength; i++){
            swap(str, i, index);
            perm(str, index+1, strLength);
            swap(str, i, index);
        }
    }
}

int main()
{
    char str[100];
    printf("Please enter the string(limited by 100 char lengths): ");
    gets(str);
    perm(str, 0, strlen(str));

    return 0;
}
