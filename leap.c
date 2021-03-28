
// Various leap year checking methods.

#define ctz __builtin_ctz
#define R return
#define SI static inline
typedef unsigned U;
typedef int I;

SI U f(U u,U v){I s=ctz(u|v);u>>=ctz(u);do
{v>>=ctz(v);if(u>v){v^=u;u^=v;v^=u;}v-=u;}
while(v);R u<<s;}SI U l(U n){R f(0x50,n)>f
(50,n);}

U lame(U n){R((n%4==0)&&(n%100!=0))||(n%400==0);}

#define M1 0x28f5c28
#define M2 -0x3d70a3d7
#define M3 0x40000000
#define M4 -0x70000000
#define M5 0xa3d70b

U magic(U n){if(!(n&3)&&(M1<(n*M2>>2|n*M3)))R 1;
R(n*M2>>4|n*M4)<M5;}

I main() {
    for(I i=1;i<4000;i++)
        if(lame(i)!=l(i)||lame(i)!=magic(i))
            puts("ono");
}
