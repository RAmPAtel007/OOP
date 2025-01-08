#include <iostream>
using namespace std;
class parameter{
    public:
    int val;

    void operator+(parameter& obj2){
        int val1 = this-> val;
        int val2= obj2.val;

        cout<<(val2-val1)<<endl;


    }

};

int main(){
    parameter obj1 , obj2;
    obj1.val= 9;
    obj2.val = 3;


// this hould give me the diffrence between them
    obj1+obj2; 

    //obj1 is passed as cureent object 
    //obj2 is passes as input parameter 
    // + ki fxn call upper defined hai 
    return 0;

}