#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

void DecimalToBinary(int number){

    int reminder ;
    stack <int>s1 ;
    while (number > 0)
    {
        reminder = number % 2;
        number = number / 2;
        s1.push(reminder);
    }
    cout<<"resultant in binary : ";
    while (!s1.empty()){
        cout<< s1.top() ;
        s1.pop() ;
    }

}

void BinaryToDecimal(string number){
    stack<int>s1 ;
    int power = 0 ;
    double Decimal = 0 ;
    for (int i = 0 ; i < number.length() ; ++i) {
        if (number[i] < '0' || number[i] > '1' )
        {
            cout<<"Enter Binary number !" << endl;
            return;
        }
        else{
            s1.push((number[i]-'0')) ;
        }
    }

    while (!s1.empty()){
        Decimal += s1.top()*pow(2,power++)  ;
        s1.pop() ;
    }

    cout<<"resultant in binary : " << Decimal << endl;
}
int main()
{
    int number ;
    cout<<"Enter the decimal number : ";
    cin>>number;
    DecimalToBinary(number) ;

   // ------------------------------------------------------------------------

    string number2  ;
    cout<<"Enter the Binary number : ";
    cin>>number2;
    BinaryToDecimal(number2) ;



}