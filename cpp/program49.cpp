// program145.c

#include<iostream>
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

        void DisplayPattern()
        {
            int i = 0, j = 0;

            for(i = iRow; i >= 1; i--)
            {
                for(j = 1; j <= iCol; j++)
                {
                    if(i == j)
                    {
                        cout<<"#"<<"\t";
                    }
                    else
                    {
                        cout<<"*\t";
                    }
                }
                cout<<"\n";
            }
        }
};

int main()
{
    int iValue1 = 0, ivalue2 = 0;

    cout<<"Enter number of rows :\n";
    cin>>iValue1;

    cout<<"Enter number of columns :\n";
    cin>>ivalue2;

    Pattern obj(iValue1, ivalue2);
    obj.DisplayPattern();

    return 0;
}