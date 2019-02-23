
#include<iostream>
using namespace std ;

int factorial(int number)
{
    if(number==0)
    {
        return 1 ;
    }
    else
    {
        return number *factorial(number-1) ;
    }
    
}

int main()
{
    int data ;
    cout<<"Enter the number " << endl;
    cin >> data ;
    cout << "Factorial of " << data << " is : " << factorial(data) << endl ;
    return 0 ;
}