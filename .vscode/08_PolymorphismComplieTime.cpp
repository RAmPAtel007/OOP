#include <iostream>
using namespace std;

//function overloading 

class Maths{
    public: 

    int sum(int a,int b){
        cout<<"First Sum : "<<endl;
        return a+b;
    }
    int sum(int a , int b, int c){
        cout<<"Second Sum : "<<endl;
        return a+b+c ;
    }
    float sum(int a ,float b){
        cout<<"Third Sum : "<<endl;
        return a+b+10;
    }
};

int main(){
    Maths m;
    cout<<m.sum(10,21.5f); // throw error because default is double and we mention the float 
    // for float add "f" in last 



}