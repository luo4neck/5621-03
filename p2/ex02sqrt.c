#include<stdio.h> 
#include<stdlib.h>
#include<math.h>

int main(int argc, char* argv[])
{
double dec=0, guess=0, n=0, hg, lg;
int i,xdec=3, tmp1=-5, tmp2=0;
char out[10];

if(argv[1]==NULL || argv[2]==NULL || argv[3]!=NULL)
    {
    printf("Please input two numbers to comand line like $./ex02sqrt 13.6 4\n");
    printf("Program will calculate the root of first number with decimal accurancy of second number.\n\n");
    exit(0);
    }

xdec = atoi(argv[2]);
if (xdec > 6 || xdec<0 )
    {
    printf("Accurancy decimals should be larger than 0 and smaller than 7!\n");
    exit(0);
    }
dec = pow(10.0,xdec);

n = atof(argv[1]);
if(n<0)
    {
    printf("Please input a postive number to comand line.\n");
    exit(0);
    }

printf("Input number is %f\n",n);
hg = n, lg = 0;//hg is high guess, lg is low guess

while( (tmp2-tmp1) != 0)
    {
    guess =(hg + lg)/2.0;
    tmp2 = tmp1;
    if(guess*guess > n)
        {
        hg = guess;
        }
    else
        {
        lg = guess;
        }
    tmp1 =(int)(guess * dec);
    }

sprintf(out, "%f", guess);

printf("%d decimal floating root is ",xdec);

i=0;
while(out[i]!=46)
    {
    i=i+1;
    }
xdec = i + xdec;
for(i=0;i<=xdec;i++)
    {
    putchar(out[i]);
 //   if(out[i] == 46)//46 is . in ASCII table
   //    {xdec = i+ xdec;}// xdec is the number of decimals, make xdec equals to decimals before . and after .
    }
printf("\n\n");

return 0;
}
