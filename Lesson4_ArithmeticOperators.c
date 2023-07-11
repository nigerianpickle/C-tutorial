#include <stdio.h>
int main(){
    //In the C programming language, operators are symbols that represent specific actions or operations. 
    //They are used to manipulate values, perform calculations, make comparisons, and control the flow of a program. 
    //Understanding and effectively using operators is essential for writing efficient and concise C programs
    //An example of an operator is =(Equals)
    //Other types include:
    //Addition +
    int one=1;
    int two=2;
    int three=one+two;
    //Subtraction(-)
    int zero=one-one;

    //multiplication(*)
    int four=two*two;

    //division(/)
    int ten=10;
    int five=ten/two;

    //When dividing integers, it gives only the whole/Quotient number for example 5 divided by 2 is 2.5
    //but integer division gives 2
    int x=5/2;
    printf("Integer 5 divided by 2 is :%d\n",x);

    //Remainder Operator/MODULUS OPERATOR(%)
    //Used with integer data ONLY(Rest gives an error)
    int y=5%2;
    printf("5 modulo 2 is :%d\n",y);
    //gives one because 5/2 has a remainder of 1


    //INCREMENT(++)/DECREMENT(--)
    //this adds one to current value
    int six=five++;

    //Printing all our example values
    printf("%d\n%d\n%d\n%d\n%d\n%d",one,two,three,four,five,six);
    //if this looks hard to you, don't worry it looks hard to me too :)
    return 0;
}