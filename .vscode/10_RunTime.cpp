#include <iostream>
using namespace std;
//fxn overridding
class Animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }

};
class Dog: public Animal{
    public :
    //override 
    void speak(){
        cout<<"barking"<<endl;
    }
};

int main(){
    Dog d;
    d.speak();
     
}