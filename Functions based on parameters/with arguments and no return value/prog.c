#include<stdio.h> 
void add(int i, int j);
int main()
{
    int sum, a=10,b=20;
    add(a,b);
}
    void add(int i,int j)
{
    int sum;
    sum=i+j;
    printf("sum is %d", sum);
}