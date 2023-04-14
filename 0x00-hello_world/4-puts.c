#include <stdio.h>
/**
 * main - A program that prints a line with puts function
 * Return: 0 (Success)
 */

void greeting(void);
void odd_numbers(void);
int upper_c (int c);
int is_digit(int c);
int mul(int a, int b);

void print_numbers(void);


int main(void)
{
    print_numbers();

	return (0);

}

void print_numbers(void){

    int i;
    for(i='0'; i<= '9'; i++){

        if(i=='2' || i=='4'){
            continue;
        }
        putchar(i);
    }



}
