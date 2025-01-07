#include <iostream>
using namespace std;

class Animal{
    //state or properties
    private :
    int weight;
    public:
    int age;
    string name;

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
    void setweight(int w){
        weight = w;
    }
    

};

int main(){
    //object creation 

    //static
    Animal ramesh;
    ramesh.age =19;
    ramesh.name="Lion";
    cout<<ramesh.age<<endl;
    cout<<ramesh.name<<endl;


    ramesh.eat();
    ramesh.sleep();

    //private access
    ramesh.setweight(101);
    cout<<"weight is a private member which is :- " << ramesh.getWeight()<<endl;



    // Dynamic memory
    Animal* suresh = new Animal;

    (*suresh).age=15;
    (*suresh).name="billi";

    //alternate way in DM
    suresh->age =17;
    suresh->name="kutta";

    suresh->eat();
    suresh->sleep(); 




}