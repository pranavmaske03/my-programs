// program141.c

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
            int i = 0, j = 0;
            char ch = '\0';

        if(iRow != iCol)
        {
            cout<<"Invalid input\n";
            return;
        }

            for(i = 1,ch = 'a'; i <= iRow; i++,ch++)
            {
                for(j = 1; j <= iCol; j++)
                {
                    if(i == j)
                    {
                        cout<<"*\t";
                    }
                    else
                    {
                        cout<<ch<<"\t";
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

    cout<<"Enter number of rows \n";
    cin>>iValue1;

    cout<<"Enter number of columns \n";
    cin>>iValue2;

    Pattern obj(iValue1,iValue2);
    obj.DisplayPattern();

    return 0;
}