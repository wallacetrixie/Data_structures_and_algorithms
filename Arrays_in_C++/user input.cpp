#include<iostream>
using namespace std;
int main(){
    cout<<"Enter 5 sample integer values"<<endl;
    int marks[10];
    for(int k=0;k<5;k++){
        cout<<"Enter values:"<<endl;
        cin>>marks[k];
    }
    cout<<"The entered values are:"<<endl;
    for(int i=0;i<5;i++){
        cout<<marks[i]<<endl;
    }

}
