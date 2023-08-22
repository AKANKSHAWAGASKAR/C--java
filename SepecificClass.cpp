#include<iostream>
using namespace std;

class Array
{
    public:
    int *Arr;
    int Size;

    Array(int length)
    {
        Size = length;
        Arr = new int[Size];
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
        a
    }
};
int main()
{
    Array obj1(5);

    obj1.Accept();
    obj1.Dispaly();

    return 0;
}
