import java.util.*;

class Number 
{
    public int iNo;

    public Number(int no)
    {
        iNo = no;
    }

    public boolean CheckPrime()
    {
        int iCnt = 0;
        boolean flag = true;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                flag = false;
                break;
            }
        }
        return flag;
    }
}

class program26
{
    public static void main(String arg[])
    {
        int iValue = 0;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        iValue = sobj.nextInt();

        Number obj = new Number(iValue);
        bRet = obj.CheckPrime();

        if(bRet == true)
        {
            System.out.println(iValue+" is prime number");
        }
        else
        {
            System.out.println(iValue+" is NOT prime number");
        }
    }
}