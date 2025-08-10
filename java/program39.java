import java.util.*;

class Number 
{
    public int iNo;

    public Number(int no)
    {
        iNo = no;
    }

    public boolean CheckDigit()
    {
        int iDigit = 0,temp = iNo;
    
        while(temp != 0)
        {
            iDigit = temp % 10;
            if(iDigit == 7)
            {
                break;
            }
            temp = temp / 10;
        }
        if(temp == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

class program39
{
    public static void main(String arg[])
    {
        int iValue = 0;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        iValue = sobj.nextInt();

        Number obj = new Number(iValue);
        bRet = obj.CheckDigit();
        if(bRet == true)
        {
            System.out.println("7 is present ");
        }
        else
        {
            System.out.println("7 is NOT present");
        }
    }
}