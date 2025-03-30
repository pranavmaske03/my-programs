import java.util.*;

class Digit
{
    public int iNo;

    public Digit(int X)
    {
        iNo = X;
    }

    public int CountEven()
    {
        int iDigit = 0;
        int iCount = 0;
        int temp = iNo;

        while(temp != 0)
        {
            iDigit = temp % 10;
            if((iDigit % 2) == 0)
            {
                iCount++;
            }
            temp = temp / 10;
        }
        return iCount;
    }
}

class program16
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number ");
        int iValue = sobj.nextInt();

        Digit obj = new Digit(iValue);

        System.out.println("Count of the Even digits is : "+obj.CountEven());
        System.out.println("Count of the Even digits is : "+obj.CountEven());
    }

}