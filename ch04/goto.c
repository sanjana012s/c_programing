//uncondition jump:goto direct the flow to a specific label

#include<stdio.h>
int main()
{
    int num;

input_no: // label for goto
    printf("Please enter the number: ");
    scanf("%d", &num);
    if(num == 10)
    {
        goto input_no;
    }
    return 0;
}
