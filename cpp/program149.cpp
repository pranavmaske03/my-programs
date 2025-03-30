//// program127.c

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
                    if((i == 1) || (j == 1) || (i == iRow) || (j == iCol))
                    {
                        cout<<"7\t";
                    }
                    else
                    {
                        cout<<"0\t";
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

    cout<<"Enter numbr of rows \n";
    cin>>iValue1;

    cout<<"Etner number columns \n";
    cin>>iValue2;

    Pattern obj(iValue1,iValue2);
    obj.DisplayPattern();

    return 0;
}