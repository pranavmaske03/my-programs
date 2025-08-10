
import java.util.Scanner;

class Digit
{
    public int iNo;

    public Digit(int X)
    {
        iNo = X;
    }

    public int SumDigit()
    {
        int iDigit = 0;
        int temp = 0, iSum = 0;

        temp = iNo;
        while(temp != 0)
        {
            iDigit = temp % 10;
            iSum = iSum + iDigit;
            temp = temp / 10;
        }
        return iSum;
    }
}

class program7
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iValue = sobj.nextInt();

        Digit obj = new Digit(iValue);
        System.out.println("Sum of the digits is : "+obj.SumDigit());
    }
}