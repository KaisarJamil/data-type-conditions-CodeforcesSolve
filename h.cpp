#include<iostream>
using namespace std;

int main(){

    int age,year,month,day;
    cin>>age;

    year=age/365;
    age=age-year*365;

    month=age/30;
    age=age-month*30;

    day=age/1;

    cout<<year<<" years"<<endl<<month<<" months"<<endl<<day<<" days";


return 0;
}
