#include <iostream>
using namespace std;
class A{
    public : 
    int chemistry =100;
};
class B {
    public:
    int chemistry = 99;

};
class C : public A, public B{
    public:
    int maths=98;

};

int main(){
    C obj;
    cout<<"chemistry : "<<obj.B::chemistry<<"   Maths :"<<obj.maths<<endl;
    //sytanx when both the member are same 

}