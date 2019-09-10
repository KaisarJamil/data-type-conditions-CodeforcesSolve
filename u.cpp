#include<iostream>
using namespace std;

int main(){

    int code;
    cin>>code;
    float p;

    if(code==1){
        p=code*4.00;
    }
    else if(code==2){
        p=code*4.50;
    }
    else if(code==3){
        p=code*5.00;
    }
    else if(code==4){
        p=code*2.00;
    }
    else if(code==5){
        p=code*1.50;
    }

    cout<<"Total : R ";
    cout<<p;

return 0;
}
