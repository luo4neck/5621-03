#include<stdio.h>
#include<stdlib.h>

int tri(int n)
{
int i=1,sum=0, stat=0;

while( sum < n )
    {
    sum=i*(i+1)/2;
    if(sum == n)
       {
       stat=1;
       break;
       }
    i=i+1;
    }
return stat;
}

int sqr(int n)
{
int i=1,sum=0, stat=0;

while( sum<n )
    {
    sum = i*i;
    if(sum ==n)
        {
        stat=1;
        break;
        }
    i=i+1;
    }
return stat;
}

int main(int argc, char *argv[])
{
if(argv[1]==NULL || argv[2]!=NULL)
    {
    printf("Please input a integer number like $./ex01numbers 10\n");
    }
int n,i,std_tri=0,std_sqr=0;
n = atoi(argv[1]);
printf("The number inputed is %d\n",n);

if(n>1)
    {
    for(i=1;i<=n;i++)
        {
        std_tri = tri(i);
        std_sqr = sqr(i);
        if(std_tri!=0 && std_sqr!=0)
            {
            printf("%d both triangular and square.\n",i); 
            }
        else if(std_tri==0 && std_sqr!=0)
            {
            printf("%d is square.\n",i);
            }
        else if(std_tri!=0 && std_sqr==0)
            {
            printf("%d is triangular.\n",i);
            }
        }
        printf("\n");
    }
else if(n==1)
    {
    printf("1 both triangular and square.\n\n");
    }
else if(n==0)
    {
    printf("0 both triangular and square.\n");
    printf("1 both triangular and square.\n\n");
    }
else
    {
    printf("0 both triangular and square.\n");
    printf("1 both triangular and square.\n");
    printf("All other numbers are under 0 and neither trangular nor square.\n\n");
    }

return 0;
}
