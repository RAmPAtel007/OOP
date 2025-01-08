 #include <iostream>
 using namespace std;

 class Animal{
    public:
        int age;
        int weight;

    public:
        void eat(){
            cout<<"Eating"<<endl;
        }  

 };
class Dog : protected Animal{
    public:
    void print(){
        this->age=10;
        cout<< this->age;
    }

};


 int main(){
    
    Dog d1;
    d1.print();
 }