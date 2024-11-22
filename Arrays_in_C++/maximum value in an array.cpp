#include<iostream>
using namespace std;
int main(){
    int marks[10]={23,55,77,87,66,33,87,89};
    int maximum=marks[0];
    int k;
    for(int k=0;k<10;k++){
        if(marks[k]>maximum){
            maximum=marks[k];
        }
    }


    cout<<"The maximum value is "<<maximum<<endl;
}

