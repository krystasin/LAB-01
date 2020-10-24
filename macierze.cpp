
#include <iostream>
#include <iomanip>    
using namespace std;

int main(int argc, char *argv[])
{

    double A[2][3], B[2][3];
    double M[2][3];
    
    cout<<"wprowadz dane do macierzy A (wierszami): \n"; 
    for(int i=0; i<2; i++)
        for(int j=0; j<3; j++)
            cin>>A[i][j];


    cout<<"wprowadz dane do macierzy B:\n"; 
    for(int i=0; i<2; i++)
        for(int j=0; j<3; j++)
            cin>>B[i][j];

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++)
           cout<< setw(3)<< A[i][j] + B[i][j]<<"  ";
        cout<<endl;   
    }


    cin.get();
    cin.get();
    return 0;
}

