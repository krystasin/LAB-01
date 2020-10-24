
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{

    float masa, wzrost;
    cout<<"wprowadz mase [kg]:  ";
    cin>>masa;
    cout<<"wprowadz wzrost [cm]: ";
    cin>>wzrost;
    wzrost/=100;

    double bmi = masa/(wzrost*wzrost);

    printf("\n\nBMI wynosi: %.2lf", bmi);

    if(bmi < 16)    cout<<" - wyglodzenie";
    else if(bmi <17)    cout<<" - wychudzenie";
    else if(bmi <18.50  )cout<<" - niedowaga";
    else if(bmi <25)    cout<<" - wartosc prawidlowa";
    else if(bmi <30)    cout<<" - nadwaga";
    else if(bmi <35)    cout<<" - I stopien otylosci";
    else if(bmi <40)    cout<<" - II stopien otylosci";
    else    cout<<" - otylosc skrajna";



    cin.get();
    cin.get();
    return 0;
}

