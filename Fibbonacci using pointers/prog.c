#include <stdio.h>

int main()
{
    int n,*c,i;
    long first,second,next;
   
    printf("Enter number of series\n");
    scanf("%d",&n);
    printf("%d\n",n);
    printf("Fibonnaci Numbers are\n");
    first = 0;
    second = 1;
    c=&i;
    for(i=1; i<=n;i++)
    {
        printf("%ld\n",first);
        *c = first+second;
        first=second;
        second=*c;
        
    }
    printf("%ld\n",first);
return 0;
}