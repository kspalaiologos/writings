#include<stdio.h>
#define Q 0x4000000000000000ULL
#define f(x,y) q(x+y)||q(x-y)
typedef _Bool B;
typedef unsigned long long U;
B q(U x){U m,y,b,z;for(m=Q,z=x,y=0;m;m>>=2){b=y|m;y>>=1;if(x>=b)x-=b,y|=m;}return y*y==z;}
B phi(U x){x*=5*x;return f(x,4);}int main(){for(U i=1;i<100;i++)phi(i)&&printf("%d\n",i);}
