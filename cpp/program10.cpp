// program135.c

#include<iostream>
using namespace std;

class Pattern
{
    public:
       int iRow;
       int iCol;

    Pattern(int iNo1, int iNo2)
    {
        iRow = iNo1;
        iCol = iNo2;
    }

    void DisplayPattern()
    {
        int i = 0;
        int j = 0;

        if(iRow != iCol)
        {
            cout<<"Invalid Input"<<"\n";
            return;
        }

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++ )
            {
                if(i == j)
                {
                    cout<<"**"<<"\t";
                }
                else if(i >= j)
                {
                    cout<<"{}"<<"\t";
                }
                else
                {
                    cout<<"()"<<"\t";
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
    cin>>iValue1;

    cout<<"Enter number of colums"<<"\n";
    cin>>iValue2;

    Pattern pobj(iValue1,iValue2);
    pobj.DisplayPattern();

    return 0;
}