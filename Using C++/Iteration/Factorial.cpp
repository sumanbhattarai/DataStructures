
#include<iostream>
using namespace std ;

int main()
{
    int data , fact=1 ;
    cout << "Enter a number " << endl; 
    cin >> data ;
    if(data == 0)
    {
        cout << "Factorial of 0 is : 1 " << endl;  
    }
    else
    {
        for(int i=1 ; i<=data ; i++)
        {
            fact = fact * i ;
        }
        cout << "Factorial of " << data << " is : " << fact << endl; 
    }
    
}
