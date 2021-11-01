#include <iostream>
using namespace std;
class A
{
    protected :
       int x;

};
class B : public A{
    
};
class C : public B{

};
int main()
{
    C obj;
    obj.x=5;
    cout<<obj.x;
}