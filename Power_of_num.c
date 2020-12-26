#include <stdio.h>
#include <stdio.h>
int power_of_num(int x, int y);
int main()
{
    int x, y,result;
    printf("Welcome to power of num program\n");
    printf("Enter the base number\n");
    scanf("%d",&x);
    printf("Enter the power number\n");
    scanf("%d",&y);
    result=power_of_num(x,y);
    printf("power of %d ^ %d is: %d ",x,y,result);

}

int power_of_num(int x, int y)
{
    int temp=x;
    for(int i=1;i<y;i++)
    {
        temp= temp *  x;
    }
    return temp;
}