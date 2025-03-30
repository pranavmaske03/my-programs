// program23.c

#include<iostream>
using namespace std;

class Factors
{
    public:
       int iNo;

    Factors(int X)  
    {
        iNo = X;
    }

    void DisplayFactors()
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt < (iNo/2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                cout<<iCnt<<"\n";
            }
        }
    }
};

int main()
{
    int iValue = 0;
    
    cout<<"Enter number "<<"\n";
    cin>>iValue;

    Factors fobj(iValue);
    fobj.DisplayFactors();

    return 0;
}