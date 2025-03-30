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
            char ch = '\0';

            for(i = 1,ch = 'a'; i <= iRow; i++,ch++)
            {
                for(j = 1; j <= iCol; j++)
                {
                    cout<<ch<<"\t";
                }
                cout<<"\n";
            }
        }
};

int main()
{
    int iValue = 0;
    int iValue1 = 0;

    cout<<"Enter number rows \n";
    cin>>iValue;

    cout<<"Enter number of columns \n";
    cin>>iValue1;

    Pattern obj(iValue,iValue1)   ;
    obj.DisplayPattern();

    return 0;
}