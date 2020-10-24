#include <iostream>

using namespace std;




int main(int argc, char *argv[])
{
    if(argc < 3)return 2;


    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    if(a <2 || b<2) return 1;

    int sA=0, sB=0;

    for(int i=1; i<=a/2; i++)
        if( a%i == 0 )  sA+=i;
 

    for(int i=1; i<=b/2; i++)
        if( b%i == 0 )  sB+=i;

if(sA == b+1 && sB == a+1)
cout<<"liczby "<<a<<" i "<<b<<" sa skojarzone";





    cin.get();
    return 0;
}

