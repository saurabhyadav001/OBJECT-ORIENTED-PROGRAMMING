#include<iostream>
using namespace std;
class Test
{
    public:
    void fun()
    {
        cout<<"Function with no argument";
    }
    void fun(int x)
    {
        cout<<"Function with int argument";
    }
    void fun(double x)
    {
        cout<<"Function with double argument";
    }
}; 
int main()
{
    Test obj;
    obj.fun();
    obj.fun(7);
    obj.fun(55.2);
}