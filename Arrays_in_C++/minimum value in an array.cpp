#include<iostream>
using namespace std;
int main(){
    int marks[]={23,55,77,87,66,33,87,89};
    int minimum=marks[0];
    for(int k=0;k<8;k++){
        if(marks[k]<minimum){
            minimum=marks[k];
        }
    }


    cout<<"The minimum value is "<<minimum<<endl;
}


