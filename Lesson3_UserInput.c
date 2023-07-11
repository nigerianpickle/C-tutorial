#include <stdio.h>

//Getting input from user,
int main(){
    int age;

    //Asks user for input:
    printf("Enter input value:");
    //this function asks for an integer and stores it in the memory of the age variable
    scanf("%d", &age);


    //Prints the age
    printf("\nThe age you entered is :%d",age);
    return 0;
}
