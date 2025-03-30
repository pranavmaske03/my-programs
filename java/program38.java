import java.util.*;

class Number 
{
    public int iNo;

    public Number(int no)
    {
        iNo = no;
    }

    public void MaximumDigit()
    {
        int iDigit = 0,temp = iNo;
        int iMax = 0;

        while(temp != 0)
        {
            iDigit = temp % 10;
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
            temp = temp / 10;
        }
        System.out.println("Maximum digit is : "+iMax);
    }
}

class program38
{
    public static void main(String arg[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        iValue = sobj.nextInt();

        Number obj = new Number(iValue);
        obj.MaximumDigit();
    }
}