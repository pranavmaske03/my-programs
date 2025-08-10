// program132.c

#include<iostream>
using namespace std;

class Pattern
{
    public:
        int iRow;
        int iCol;

        Pattern(int X,int Y)
        {
            iRow = X;
            iCol = Y;
        }

        void DisplayPattern()
        {
            int i = 0,j = 0; 

            for(i = 1; i <= iRow; i++)
            {
                for(j = 1; j <= iCol; j++)
                {
                    if(i == j)
                    {
                        cout<<"*\t";
                    }
                    else if((i == 1) || (j == 1) || (i == iRow) || (j == iCol))
                    {
                        cout<<"$\t";
                    }
                    else
                    {
                        cout<<" \t";
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

    cout<<"Enter numbre of rows \n";
    cin>>iValue1;

    cout<<"Enter number of columns \n";
    cin>>iValue2;

    Pattern obj(iValue1,iValue2);
    obj.DisplayPattern();

    return 0;
}