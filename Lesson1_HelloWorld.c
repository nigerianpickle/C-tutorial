#include <stdio.h>//must include this in every C program
int main(){
    //To print you use printf
    printf("Hello world you are ");

    //Like java you declare data types before storing them
    int age;
    age=20;

    //you can store two variables on the same line
    int age1,age2;


    
    //print integers in c requires you formate it with %d, where d% will be placed where you want the integer
    //it has the format: printf("Hello my age is %d",variable); the variable will replace %d. SYNTAX: printf(Sentence, variable )
    printf("%d",age);

    //here i equate age2 to 20, but age 1 has no value
    age1,age2=20;
    // therefore variable age1 will have a random unpredicatble value
    printf("Age 1:%d Age 2:%d",age1,age2);

    //c main method needs to always return a value
    return 0;
}
