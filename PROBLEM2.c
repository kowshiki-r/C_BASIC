/*2)GET A NUMBER FROM USER AND SUBTRACT 5 TO THAT NUMBER AND PRINT THE RESULT
INPUT:45 OUTPUT:40 */

#include<stdio.h>
int main()
{
    int num,result;
    printf("Enter the number");
    scanf("%d",&num);
    result=num-5;
    printf("Result=%d",result);
}
