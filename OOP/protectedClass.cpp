//protectd class example
#include <iostream>
using namespace std;

class A{
    protected:
        int a;
    public:
        void setA(int x){
            a=x;
        }
        void printA(){
            cout<<"The value of a is: "<<a<<endl;
        }
};
class B : public A{
    public:
        void printB(){
            cout<<"The value of a is: "<<a<<endl;
        }
};

int main(){
    A obj;
    obj.setA(10);
    obj.printA();
    return 0;
}