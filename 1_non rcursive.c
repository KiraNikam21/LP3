#include <stdio.h>

int main()
{
    int i,first=0,second=1,result,n;

    printf("enter no. upto you want to print series");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        if(i<=1)
        {
            result=i;
        }

        else
        {
            result=first+second;
            first=second;
            second=result;
        }

        printf("%d-",result);
    }
}