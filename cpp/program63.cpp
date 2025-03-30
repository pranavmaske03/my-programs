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
            char ch = '\0';
            int i = 0,j = 0;

            for(i = 1; i <= iRow; i++)            
            {
                for(j = 1,ch = 'a'; j <= iCol; j++,ch++)
                {
                    cout<<ch<<"\t";
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