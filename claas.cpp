#include <iostream>
using namespace std;
class A
{
   
   public :
   int bookid,y;
      void set(int l,int z)
      { if(l<0)
          bookid = -l;
          y = z;
      }
      void getval()
      {
          cout<<"x is "<<bookid<<" y is "<<y<<endl;
      }
};
int main()
{
   A obja;
//    obja.set(-5,78);
  obja.bookid = -5;
   obja.getval();
   //setters and getters 
}