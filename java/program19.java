import java.util.*;

class Number
{
    public int iNo;

    public Number(int i)
    {
        iNo = i;
    }

    public int MaximumDigit()
    {
        int iDigit = 0;
        int iMax = 0;
        int temp = iNo;

        while(temp != 0)
        {
            iDigit = temp % 10;
            if(iMax < iDigit)
            {
                iMax = iDigit;
            }
            temp = temp / 10;
        }
        return iMax;
    }
}

class program19
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number ");
        int iValue = sobj.nextInt();

        Number obj = new Number(iValue);
        System.out.println("Maximum digit is : "+obj.MaximumDigit());
    }
}