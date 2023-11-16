#include<stdio.h>
    int n,i,c;

int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
       return fibonacci(n-1)+fibonacci(n-2);
    }

}


int main()
{


    printf("enter no. upto you want to print series");
    scanf("%d",&n);

    for(c=1;c<=n;c++)
    {
        printf("%d",fibonacci(i));
        i++;
    }

    return 0;
}