#include<iostream>
using namespace std;

int main(){

    long long f,s;
    cin>>f>>s;

    int Flast=f%10;
    int Slast=s%10;

    int output=Flast+Slast;

    cout<<output;

return 0;
}

