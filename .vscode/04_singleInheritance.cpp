 #include <iostream>
 using namespace std;


//single inheritance 
 class Animal{
    public:
        int age;
        int weight;

    public:
        void eat(){
            cout<<"Eating"<<endl;
        }  

 };
class Dog : public Animal{
    

};


 int main(){
    
    Dog d1;
    d1.eat();
 }