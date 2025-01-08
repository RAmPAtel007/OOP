#include <iostream>
using namespace std;
class Car{
    public:
    int age;
    int weight;
    string name;

    void sppedUp(){
        cout<<"Speeding UPPPP!!!!"<<endl;
    }
};
class scorpio : public Car{

};

class fortuner : public Car{

};

int main(){
    fortuner f;
    scorpio s;
    f.sppedUp();
    s.sppedUp();


}