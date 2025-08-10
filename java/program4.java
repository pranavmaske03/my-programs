
import java.util.*;

class Number
{
    public int iNo;

    public Number(int X)
    {
        iNo = X;
    }

    public void DisplayFactor()
    {
        for(int iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class program4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number ");
        int iValue = sobj.nextInt();

        Number obj = new Number(iValue);
        obj.DisplayFactor();
    }
}