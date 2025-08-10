// program130.c

#include<iostream>
using namespace std;

class Pattern
{
    public:
        int iRow;
        int iCol;

        Pattern(int no1,int no2)
        {
            iRow = no1;
            iCol = no2;
        }

        void DisplayPattern()
        {
            int i = 0,j = 0;

            for(i = 1; i <= iRow; i++)
            {
                for(j = 1; j <= iCol; j++)
                {
                    if((i == 1) || (i == iRow) || (j == 1) || (j == iCol))
                    {
                        cout<<"*\t";
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
    int iValue1 = 0,iValue2 = 0;

    cout<<"Enter number of rows \n";
    cin>>iValue1;

    cout<<"Enter number of colummns \n";
    cin>>iValue2;

    Pattern obj(iValue1,iValue2);
    obj.DisplayPattern();

    return 0;
}