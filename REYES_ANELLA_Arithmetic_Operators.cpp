
#include <iostream>

using namespace std;
int main(){
    cout<< "THE AVERAGE OF FIVE NUMBERS"<<endl;
    int a,b,c,d,e,avg;
    cout<<"Enter 5 numbers :"<<endl;

    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;

    avg = (a+b+c+d+e) /5;

    cout<<"The average of your numbers is: "<<avg;


    return 0;
}
