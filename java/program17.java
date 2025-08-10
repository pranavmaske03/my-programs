import java.util.*;

class Number
{
    public int iNo;

    public Number(int i)
    {
        iNo = i;
    }

    public int Factorial()
    {
        int iFact = 1;

        for(int icnt = 1; icnt <= iNo; icnt++)
        {
            iFact = iFact * icnt;
        }
        return iFact;
    }
}

class program17
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iValue = sobj.nextInt();

        Number obj = new Number(iValue);
        System.out.println("Factorial is : "+obj.Factorial());
    }
}