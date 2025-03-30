import java.util.*;

class Number
{
    public int iNo;

    public Number(int no)
    {
        iNo = no;
    }

    public int Factorial()
    {
        int iCnt = 0;
        int iFact = 1;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iFact = iFact * iCnt;
        }
        return iFact;
    }
}

class program27
{
    public static void main(String arg[])
    {
        int iValue = 0,iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number ");
        iValue = sobj.nextInt();

        Number obj = new Number(iValue);
        iRet = obj.Factorial();

        System.out.println("Factorial is : "+iRet);
    }
}