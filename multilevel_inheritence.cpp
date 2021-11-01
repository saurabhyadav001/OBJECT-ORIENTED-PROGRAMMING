#include<iostream>
using namespace std;
class A{
    public:
    void Afunc(){
        cout<<"This is funcA";
    }
};
class B : public A
{
    public:
    void Bfunc()
    {
        cout<<"THis is funB";
    }
};
class C : public B
{
    public:
    void Cfunc()
    {
        cout<<"THis is funC";
    }
};
int main()
{
class C c;   //c is object of class C
// B b;
c.Cfunc();
c.Bfunc();
c.Afunc();
}
