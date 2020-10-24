#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

    int s = argc-1;
    char* z = new char[s];

    for (int i = 1; i < argc; ++i)
        z[i-1] = atoi(argv[i]);
    

    for(int i=0; i<s; i++)
      for(int j=i+1; j<s; j++)
        if(z[j] < z[i]) {char tmp = z[j];   z[j] = z[i];    z[i] = tmp; }
        

    for (int i = 0; i < s; ++i)
        cout<<(int)z[i]<<"  ";


    cin.get();
    return 0;
}

