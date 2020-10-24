#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string txt = argv[1];
    int size = txt.size(), s = size/2;

    for(int i=0; i<s; i++)
        if(txt[i] != txt[size-i-1])
        {
            cout<<"slowo NIE JEST polindromem\n";
            cin.get();
            return 0;
        }
    
    cout<<"slowo JEST polindromem\n";
    cin.get();
    return 0;
}

