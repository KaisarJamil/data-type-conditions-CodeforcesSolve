#include<iostream>
using namespace std;

int firstDigit(int a)
    {
        while (a >= 10)
            a /= 10;
    return a;
    }

int main(){

    int a,b;
    cin>>a;
    b=firstDigit(a);
    if(b%2==0){
        cout<<"EVEN";
        }
    else{
        cout<<"ODD";
    }

return 0;
}
