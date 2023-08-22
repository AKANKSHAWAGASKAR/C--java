#include<iostream>
using namespace std;

template <class T>

class Array
{
    public:
    T *Arr;
    int Size;

    Array(int length)
    {
        Size = length;
        Arr = new T[Size];
    }

    void Accept()
    {
        cout<<"Enter the Values\n";
        for(int i = 0; i < Size; i++)
        {
            cin>>Arr[i];
        }
    }
        void Dispaly()
        {
            cout<<"Values of array are\n";
            for(int i = 0; i < Size; i++)
        {
            cout<<Arr[i]<<"\n";
        }
        }
        
    
};
int main()
{
    Array <int>obj1(5);

    obj1.Accept();
    obj1.Dispaly();

    Array <float>obj2(5);

    obj2.Accept();
    obj2.Dispaly();

    Array <char>obj3(5);

    obj3.Accept();
    obj3.Dispaly();

    Array <double>obj4(5);

    obj4.Accept();
    obj4.Dispaly();

    return 0;
}