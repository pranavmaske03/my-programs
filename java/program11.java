import java.util.*;

class Number
{
    public int iNo;
    
    public Number(int X)
    {
        iNo = X;
    }

    public int SumFactors()
    {
        int iSum = 0;

        for(int iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        return iSum;
    }

    boolean CheckPerfect()
    {
        int iCheck = SumFactors();

        if(iNo == iCheck)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program11
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number ");
        int iValue = sobj.nextInt();

        Number obj = new Number(iValue);
      
        boolean bRet = obj.CheckPerfect();
        if(bRet == true)
        {
            System.out.println("Number is Perfect");
        }
        else
        {
            System.out.println("Number is NOT perfect");
        }
    }
}