// program119.c

#include <iostream>
using namespace std;

class Pattern
{
public:
    int iRow;
    int iCol;

    Pattern(int X, int Y)
    {
        iRow = X;
        iCol = Y;
    }

    void Display()
    {
       int i = 0,j = 0;

       for(i = 1; i <= iRow; i++)
       {
            for(j = 1; j <= iCol; j++)
            {
                if((i%2) != 0)
                {
                    cout<<"(^_^)"<<"\t";
                }
                else
                {
                    cout<<" !!! "<<"\t";
                }
            }
            cout<<"\n";
       }
    }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter number of Rows"<<"\n";
    cin >> iValue1;

    cout<<"Enter number columns"<<"\n";
    cin>>iValue2;

    Pattern pobj(iValue1,iValue2);
    pobj.Display();

    return 0;
}