#include<iostream>
using namespace std;
class A{
    public:
    void Afunc(){
        cout<<"Func A"<<endl;
    }
};
class B{
    public:
    void Bfunc(){
        cout<<"Func B"<<endl;
    }
};
class C: public A, public B {
    
};
int main(){
    C c;       // ALL classsess!
    c.Afunc();
    c.Bfunc();
    // c.Cfunc();
    // B b;
    // // b.Bfunc();
    // A a;
    // a.Afunc();
    B b;
    b.Bfunc();
}

 