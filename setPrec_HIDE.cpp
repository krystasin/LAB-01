#include <iostream>     
#include <iomanip>      

using namespace std;

int main()
{
    double double_value = 3.14159;

    cout << setprecision(4) << double_value << endl;
    cout << setprecision(9) << double_value << endl;
    cout << fixed;
    cout << setprecision(5) << double_value << endl;
    cout << setprecision(10) << double_value << endl;;



    cout << "\n\n\nThe number printed with width 10" << endl;
    cout << setw(10);
    cout << 77 << endl;

    cout << "The number printed with width 2" << endl;
    cout << setw(2);
    cout << 10 << endl;

    cout << "The number printed with width 5" << endl;
    cout << setw(5);
    cout << 25 << endl;





    cout << setfill('*') << setw(10);
    cout << 15 << endl;
    cout << setfill('#') << setw(5);
    cout << 5 << endl;
    cout << setfill('#') << setw(5);
    cout << 1 << endl;
    cout << setfill('*') << setw(10);
    cout << 25 << endl;
cin.get();
    return 0;
}