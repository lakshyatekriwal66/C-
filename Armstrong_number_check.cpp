#include <iostream>
using namespace std;
int main (){
    int num, count, digit, sum = 0;
    cout << "Enter the number: ";
    cin >> num;
    
    count = num;


    while (num != 0)
    {
       digit = num % 10;
       sum = sum + (digit * digit * digit);
       num = num / 10;
    }

    if (sum == count)
    {
        cout << count << " is an Armstrong number. " << endl;
}
else
cout << count << " is not an Armstrong number. " << endl;
return 0;
}
