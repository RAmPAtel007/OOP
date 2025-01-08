#include <iostream>
using namespace std;
class A{
    public : 
    int chemistry =100;
};
class B {
    public:
    int physics = 99;

};
class C : public A, public B{
    public:
    int maths=98;

};

int main(){
    C obj;
    cout<<"chemistry : "<<obj.chemistry<<"   Physics: "<<obj.physics<<"   Maths :"<<obj.maths<<endl;

}