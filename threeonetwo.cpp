#include <iostream>
// this is the factorial algorithm
using namespace std;

int Recursive (int a)
    {

        if (a==1) // break when this is true
        {
            return a;
        }
        else
        {
            return (a * (Recursive(a-1))); // this is the recursive part
        }
    }
int main()
{
    cout<<"please enter a number: ";
    int factNumber;
    cin>>factNumber;
    int factTotal = Recursive(factNumber);
    cout<< factNumber<<" factorial is: "<<factTotal<<endl;

}
