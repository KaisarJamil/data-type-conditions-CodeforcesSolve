#include<iostream>
using namespace std;

int main(){

    string fp_fn,fp_sn,sp_fn,sp_sn;

    cin>>fp_fn;
    cin>>fp_sn;
    cin>>sp_fn;
    cin>>sp_sn;

    if(fp_sn==sp_sn){
        cout<<"ARE Brothers"<<endl;
    }
    else{
        cout<<"NOT"<<endl;
    }

return 0 ;

}
