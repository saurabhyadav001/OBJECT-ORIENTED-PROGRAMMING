#include<iostream>
using namespace std;
class A
{
    public:
    void funcA(){
        cout<<"FUncA"<<endl;
    }
};
class B : public A
{
    public:
    int funcB()
    {
        int a,b;
        cout<<"Enter Two digit Number :"<<endl;
        cin>>a>>b;
        return a+b;
    }
};
class C
{
    public:
    void funcC()
    {
        cout<<"THis is FunC"<<endl;
    }
};
class D: public C, public B{
    public:
    void funcD()
    {
        cout<<"THis is funcD"<<endl<<endl;
    }
    
};
int main()
{
    D d;
    
    d.funcA();
    d.funcC();
    C c;
    c.funcC();
    B b;
    cout<<b.funcB();
}

