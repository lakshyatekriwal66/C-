#include <iostream>
using namespace std;
int main(){

    for ( int i = 1; i <= 5 ; i++)
    {
         for ( int n = 1; n <= 5; n++)
         {
            cout << i << " x " << n << " = " << i * n << endl;
         }
         
    }
    
    int a = 6, b = 1;

    while ( a <= 10 )
    {
        while ( b <= 10 )
        {
            cout << a << " x "  << b << " = " << a*b << endl;
            b++;
            
        } 
        a++;
        b = 1;
        
    }
    
    return 0;
}