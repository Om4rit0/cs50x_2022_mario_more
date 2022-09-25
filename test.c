/*
* TODO
* 1. get int (0<i<9)
* 2. out "# #"
* 3. loop out based on int 
* 4. new line
* 5. repeat
*/

#include <cs50.h>
#include <stdio.h>

int spit_l(string q); // def func

int main(void)
{
    int num = spit_l("Level from 1 to 8: ");
    
    for (int l = 0; l < num; l++)
    {
        for (int s = num - l - 2; s >= 0; s--)
        {
            printf(" ");
        }
        for (int p1 = 0; p1 <= l; p1++) //left pyramid # loop print
        {
            printf("#");
        }
        printf(" ");
        for (int p2 = 0; p2 <= l; p2++) // right pyramid # loop print
        {
            printf("#");
        }
        printf("\n");
    }
}

int spit_l(string q) // code func
{
    int num; // def int

    do // do-while for positive num less than 9
    {
        num = get_int("%s", q); // assign int - CS50 lib
    } while (num < 1 || num > 8); // do-while condition
    return num;
}
