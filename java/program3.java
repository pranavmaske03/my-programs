
import java.util.*;

class Digit
{
    public int iNo;

    public Digit(int X)
    {
        iNo = X;
    }

    public boolean CheckDigit()
    {
        int iDigit = 0;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit == 7)
            {
                break;
            }
            iNo = iNo / 10;
        }
        if(iDigit == 7)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iValue = sobj.nextInt();

        Digit obj = new Digit(iValue);

        boolean bRet = obj.CheckDigit();
        if(bRet == true)
        {
            System.out.println("7 is present");
        }
        else
        {
            System.out.println("7 is NOT present");
        }
    }
}