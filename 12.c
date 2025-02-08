#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long long int power(long long int a,long long int b,long long int P){
    if(b==1)
    return a;
    else
    return(((long long )pow(a,b))%P);
}
int main()
{
    long long int P,G,x,a,y,b,ka,kb;
    P=23;
    printf("The value of P:%lld\n",P);

    G=9;
    printf("The value of G:%lld\n",G);

    a=4;
    printf("The private key  a for alice:%lld\n",a);
    x=power(G,a,P);

    b=3;
    printf("The private key  a for bob:%lld\n",b);
    y=power(G,b,P);

    ka=power(y,a,P);
    kb=power(x,b,P);

    printf("The secret key  a for alice:%lld\n",ka);
     printf("The secret key  a for bob:%lld\n",kb); 


}