#include <iostream>
using namespace std;

class Animal{
    //state or properties
    private :
       int weight;
    public:
       int age;
       string name;

    // default constructor
    Animal(){
        this->weight=0;
        this->age=0;
        this->name="";
        cout<<"constructor called automatically when the object is created"<<endl;
    }   
    //Parameterised constructor
    Animal(int age,int weight, string name){
        this->age=age;
        this->weight=weight;
        this->name=name;
        cout<<"Param. Constructor called "<<endl;
    }

    //copy constructor
    Animal(Animal& obj){
        this->age= obj.age;
        this->weight=obj.weight;
        this->name=obj.name;
        cout<<"I am inside copy constructor"<<endl;
    }

    //destructor 
    ~Animal(){
        cout<<"I am destructor"<<endl;
    }

    //behaviour
    void eat(){
        cout<<"khane de bhai"<<endl;

    }
    void sleep(){
        cout<<"Sone de bhai"<<endl;

    }

    int getWeight(){
        return weight;
    }
    void setweight(int weight){
        this->weight = weight; // this keyword is pointer to current object that will access the private data member  
    }
    

};

int main(){
    //object creation 

    //static
    Animal ramesh;
    ramesh.age =19;
    ramesh.name="Lion";
    // cout<<ramesh.age<<endl;
    // cout<<ramesh.name<<endl;


    // ramesh.eat();
    // ramesh.sleep();

    //private access
    ramesh.setweight(101);
    cout<<"weight is a private member which is :- " << ramesh.getWeight()<<endl;



    // Dynamic memory
    Animal* suresh = new Animal;
    Animal* b =new Animal(30,20,"raj");
    // (*suresh).age=15;
    // (*suresh).name="billi";

    //alternate way in DM
    // suresh->age =17;
    // suresh->name="kutta";

    // suresh->eat();
    // suresh->sleep(); 

    //copy constructor
    // Animal c = ramesh;
    //or
    // Animal animal1(ramesh);
    //or 
    // Animal animal2(animal1);

    // dyamaic m destructor 
    //static m automatic call ho gaya hai jab ramesh object create hua tha 

    cout<<"z obj creation"<<endl;
    Animal* z =new Animal();
    z->age=12;

    //manually
    delete z;
}