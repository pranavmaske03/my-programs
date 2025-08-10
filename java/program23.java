import java.util.*;

class Number 
{
    public int iBase;
    public int iPower;

    public Number(int no1,int no2)
    {
        iBase = no1;
        iPower = no2;
    }

    public int CalculatePower()
    {
        int iResult = 1;

        for(int iCnt = 1; iCnt <= iPower; iCnt++)
        {
            iResult = iResult * iBase;
        }
        return iResult;
    }
}

class program23
{
    public static void main(String arg[])
    {
        int iValue1 = 0;
        int iValue2 = 0,iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Base :");
        iValue1 = sobj.nextInt();

        System.out.println("Enter power :");
        iValue2 = sobj.nextInt();

        Number obj = new Number(iValue1,iValue2);
        iRet = obj.CalculatePower();

        System.out.println("Result is : "+iRet);
    }
}