#include<iostream>
using namespace std;
   class A{
        public:
        void func(){
            cout << "This is program of Single INheritence";
        }
    };
    class B: public A {};
    int main(){
        B b;
        b.func();
    }
