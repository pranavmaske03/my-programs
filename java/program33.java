import java.util.Scanner;

class Number 
{
    public int iNo;

    public Number(int x)
    {
        iNo = x;
    }

    public void CountDigit()
    {
        int iDigit = 0,iCount = 0,temp = 0;
        temp = iNo;

        while(temp != 0)
        {
            iDigit = temp % 10;
            iCount++;
            temp = temp / 10;
        }
        System.out.println("count of the digits are : "+iCount);
    }
}

class program33
{
    public static void main(String arg[])
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number ");
        iValue = sobj.nextInt();

        Number obj = new Number(iValue);
        obj.CountDigit();
    }
}