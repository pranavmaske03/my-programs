import java.util.*;

class Number
{
    public int iNo;

    public Number(int no)
    {
        iNo = no;
    }

    public void DisplayDigit()
    {
        int iDigit = 0,temp = iNo;

        while(temp != 0)
        {
            iDigit = temp % 10;
            System.out.println(iDigit);
            temp = temp / 10;
        }
    }
}

class program44
{
    public static void main(String arg[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number ");
        iValue = sobj.nextInt();

        Number obj = new Number(iValue);
        obj.DisplayDigit();
    }
}