#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    void funcA()
    {
        cout<<"funA"<<endl;
    }
    private:
    int b;
    void funcB()
    {
        cout<<"funcB"<<endl;
    }
    protected:
    int c;
    void funcC()
    {
        cout<<"funC"<<endl;
    }
};
int main()
{
    A obj;
    obj.funcA();
    // obj.funcB(); // it is inaccessible becoz it is private class member.
}