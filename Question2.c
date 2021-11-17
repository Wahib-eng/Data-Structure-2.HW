
#include <stdio.h>
#include <conio.h>
#include <string.h>

 int isPalindrome(char *str, int min, int max){
     if(min >= max)
         return 1;
     if(str[min] == str[max]){
         return isPalindrome(str, min + 1, max - 1);
     }
     return 0;
 }

int main(){
    char str[200];
    printf(" Enter a string  \n");
    scanf("%s", str);

    if(isPalindrome(str, 0, strlen(str) - 1)){
        printf("%s is a Palindrome \n", str);
    } else {
        printf("%s is not a Palindrome \n", str);
    }

    getch();
    return 0;
}


