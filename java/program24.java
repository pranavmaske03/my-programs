import java.util.*;

class Digit
{
    public int iNo;

    Digit(int no)
    {
        iNo = no;
    }

    public boolean CheckPallindrome()
    {
        int iResult = 0,iCnt = 0,iDigit = 0;
        int temp = iNo;

        while(temp != 0)
        {
            iDigit = temp % 10;
            iResult = (iResult * 10)+iDigit;
            temp = temp / 10;
        }
        if(iResult == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program24
{
    public static void main(String arg[])
    {
        int iValue = 0;
        boolean iRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        Digit obj = new Digit(iValue);
        iRet = obj.CheckPallindrome();
        if(iRet == true)
        {
            System.out.println("Number is pallindrome ");
        }
        else
        {
            System.out.println("Number is NOT pallindrome");
        }
    }
}