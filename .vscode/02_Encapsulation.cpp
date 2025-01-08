 #include <iostream>
 using namespace std;
//class itself is an example of  encapulation(hides the data member and member function into it )
 class Animal{
    private:
        int age;
        int weight;

    public:
        void eat(){
            cout<<"Eating"<<endl;
        }  

        int getAge(){
            return this->age;
        }  

        void setAge(int age){
            this->age= age;
        }

 };

 int main(){
    Animal a;
    a.eat();
    a.setAge(10);
    cout<<"Age is : " <<a.getAge()<<endl;
 }