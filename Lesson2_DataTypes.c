#include <stdio.h>
int main(){
    //Data types are    
    //int 4 bytes           |%d for format printing
    //double 8 bytes        |%lf for format printing
    //float 4 bytes         |%f float format printing
    //char 1 byte           |%c for format printing

    int age=10;
    printf("He is %d years old",age);

    //DOUBLE is used to store numbers with more precision
    //to store x number of digits after decimal, you add a .x before the %lf.
    // e.g to store 2 decimals after pi (3.16 instead of 3.145) we use %.2lf

    double pi=3.145;
    //prinitng pi
    printf("\rThe value of PI is %lf",pi);

    //printing pi with %.2lf
    printf("\rThe value of PI is %.2lf",pi);


    //FLOAT 
    float temp=1.3f; //f is mandatory afyer every float value
    printf("\n it is kind of chilly today, the temperature is %.1f",temp);

    //FLOAT AND DOUBLE CAN ALSO STORE EXPONENTIAL NUMBER
    //IF YOU DONT KNOW WHAT EXPONENTIAL IS, DONT WORRY!
    double size=2.2e6; //2.2*10^6
    printf("\n%lf",size);

    //I KNOW YOU'VE ALSO NOTICED IM USING THINGS LIKE \R and \N 
    //THESE ARE CALLED ESCAPE CHARACTERS \n is used to help us get to the next line.
    //WITHOUT THEM OUR CODE WOULD BE A CLUMPED UP LINE!
    //\n and \r basically do the same thing but n stand for newline and r stands for return(As in keyboard-enter)
    printf("Line 1:this is a line");
    printf("Line 2: this is another line(You can see that they are on the same line) ");

    //watch what happebs with \n and \r
    printf("Line 1:this is a line\n We have an extra space just cause :)");
    printf("\rLine 2: this is another line(You can see that they are on the same line) ");


    //CHARACTER DATA: ONLY USED TO STORE ONE LETTER
    //STORED AS AN INTEGER IN COMPUTER MEMORY

    char letter='z';
    printf("The last letter in the alphabet is %c",letter);


    //SIZE OF OPERATOR(GIVES SIZE OF DATA IN INT)
    printf("The size of a char is %d byte",sizeof(letter));

     return 0;

}
