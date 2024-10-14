#include<math.h>
void main()
{
 int a,b,c,D;
 float r1,r2;
 printf("enter coefficient of x^2 is a:,x is b:&constant term c:");
 scanf("%d %d %d",&a,&b,&c);
 D=b*b-(4*a*c);
 r1=-b+sqrt(b*b-(4*a*c))/2*a;
 r2=-b-sqrt(b*b-(4*a*c))/2*a;
if(D>0)
 {
    printf("rots are real and distinct");
     printf("roots are %f and %f",r1,r2);
 }
 else if(D=0)
 {
     printf("roots are real and equal");
     printf("roots are %f and %f",r1,r2);
 }
 else
 {
     printf("roots are imaginary");
 }
}


