#include<iostream>
using namespace std;
int main(){
    cout<<"Printing odd and even values in an array"<<endl;
    int marks[10]={30,44,67,83,22,35,88,93,92};
    for(int i=0;i<10;i++){
        if(marks[i]%2==0){
            cout<<"Even numbers"<<endl;
            cout<<marks[i]<<endl;;
        }
        else{
            cout<<"Odd numbers"<<endl;
            cout<<marks[i]<<endl;
        }
    }
    return 0;
}
