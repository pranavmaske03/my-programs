import java.util.*;

class Number
{
    public int iNo;

    public Number(int no)
    {
        iNo = no;
    }
    
    public int SumFactors()
    {
        int iSum = 0,iCnt = 0;

        for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo%iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        return iSum;
    }
}

class program30
{
    public static void main(String arg[])
    {
        int iValue = 0,iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number ");
        iValue = sobj.nextInt();

        Number obj = new Number(iValue);
        iRet = obj.SumFactors();

        System.out.println("Sum of the Factors are : "+iRet);
    }
}