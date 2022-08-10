#include <iostream>
using namespace std;
int main ()
{
    double Quasales,Comm;


    //inputs
    cout<<"Please enter Quarterly Sales: ";
    cin>>Quasales;

    //Process
    if( Quasales <= 0)
    {
        cout<<"Error message";
    }
    else if( Quasales <= 20000)
    {
        Comm = Quasales * 0.05;
        cout<<"Quarterly Sales is:  "<<Quasales<<endl;
        cout<<"Commission is: "<<Comm<<endl;

    }
    else if (Quasales <= 20001 || Quasales <= 50000 )
    {
        Comm = (Quasales * 0.07)+1000;
        cout<<"Quarterly Sales is:  "<<Quasales<<endl;
        cout<<"Commission is: "<<Comm<<endl;
    }

    else if (Quasales >= 50001)
    {
        Comm = (Quasales * 0.10)+3100;
        cout<<"Quarterly Sales is:  "<<Quasales<<endl;
        cout<<"Commission is: "<<Comm<<endl;
    }












 return 0;
}
