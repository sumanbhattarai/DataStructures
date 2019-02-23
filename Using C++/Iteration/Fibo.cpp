
#include<iostream>
using namespace std ;


int main()
{
    int  i , data  , first = 0 , second = 1 ; next ;

    cout << "Enter the no. of terms  : " << endl ;
    cin >> data ;

    for( i = 0 ; i <=data ; i++  )
    {
        if( i <=1 )
        {
            next = i ; 
        }
        else 
        {
            next = first + second ;
            first = second ;
            second = first ;
            
        }
        cout << next << endl;
    }
    return 0;
}