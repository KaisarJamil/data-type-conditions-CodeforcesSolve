#include<iostream>
using namespace std;

int main(){
    int A,B;
    char S,E;
    double R,r;

    cin>>A;
    cin>>S;
    cin>>B;
    cin>>E;
    cin>>R;

    if(S=='+'){
        r=A+B;

    }
    else{
        if(S=='-'){
            r=A-B;
        }
        else if(S=='*'){
            r=A*B;
        }
    }

    if(r==R){
        cout<<"Yes";
    }
    else{
        cout<<r;
    }
return 0;}
