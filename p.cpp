#include<iostream>
using namespace std;

int main(){
    char c;
    cin>>c;
    if(c>64 && c<91){
        c=c+32;
        cout<<c;
    }
    else{
        c=c-32;
        cout<<c;
    }

return 0 ;

}

