#include<iostream>
using namespace std;
class A{
    public:
    void funcA(){
        cout<<"this is class A"<<endl;
    }
};
class B : public A
{
    public:
    void funcB(){
        cout<<"this is class B"<<endl;
    }
};
class C : public A
{
    public:
    void funcC(){
        cout<<"this is class C"<<endl;
    }
};
class D: public B{
    public :
    void funcD()
    {
        cout<<"htis is class D"<<endl;
    }
};
class E: public B
{
    public:
    void funcE()
    {
        cout<<"this is class E"<<endl;
    }
};
class F: public C
{
    public:
    void funcF()
    {
        cout<<"this is class F"<<endl;
    }
};
class G: public C
{
    public:
    void funcG()
    {
        cout<<"this is class G"<<endl;
    }
};
int main()
{
    G g;
    g.funcG();
    g.funcC();
}