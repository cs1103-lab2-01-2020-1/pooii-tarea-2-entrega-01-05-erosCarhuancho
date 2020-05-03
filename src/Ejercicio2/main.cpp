#include<iostream>
using namespace std;

template<class T>
class Stack
    {
    private:
        T* arr;
        int size;
        int prim;

    public:
        Stack(T a)
        {
          size=a;
          prim=-1;
          arr=new T[size];
        }

        

        void push(T a)
        {
          if(full()) return;
          ++prim;
          arr[prim]=a;
        }

        int toop ()
        {
          return arr[prim];
        }

        void pop()
        {
          if(empty()) return;
          --prim;
        }

        int tam()
        {
          return prim+1;
        }

        bool empty()
        {
          return(prim==-1);
        }

        bool full()
        {
          return(prim==size-1);
        }
    };

int main() {

  Stack<int> a(5);
  a.push(5);
  a.push(6);
  a.push(48);
  a.push(79);
  cout<<a.toop()<<endl;
  a.pop();
  cout<<a.toop()<<endl;
  cout<<"Tamaño: "<<a.tam()<<endl;
  return 0;
}
