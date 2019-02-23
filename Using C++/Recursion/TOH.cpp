
#include<iostream>
using namespace std ;

void toh(int n , char source , char aux , char dest )
{
    if(n==1)
    {
        cout << "Move Disk " << n << " from " << source << " to " << dest << endl ; 
    }
    else
    {
        toh(n-1 , source , dest , aux  ) ;
        cout << "Move Disk " << n << " from " << source << " to " << dest << endl ; 
        toh(n-1 , aux , source , dest );
    }
    
}


int main()
{
    int data ;
    cout << "Enter the no of disk : " << endl;
    cin >> data ;
    toh( data , 'A' , 'B' , 'C') ;
    return 0 ;
}