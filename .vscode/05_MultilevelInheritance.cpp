 #include <iostream>
 using namespace std;


//Multi level inheritance 
 class Fruit{
    public:
        string name="aacha aam " ;
        

 };
class mango : public Fruit{
    public:
    int weight=2;

};
class alphanso : public mango{
    public:
    int tasterate=10;
};


 int main(){
    alphanso a;
    cout<<a.tasterate<<" "<<a.name<<" "<<a.weight<<endl;
    
    
    
 }