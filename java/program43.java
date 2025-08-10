import java.util.*;

class Number 
{
    public int iNo;

    public Number(int no)
    {
        iNo = no;
    }

    public void DisplayFactors()
    {
        for(int icnt = 1; icnt <= (iNo/2); icnt++)
        {
            if((iNo%icnt) == 0)
            {
                System.out.println(icnt);
            }
        }
    }
}

class program43
{
    public static void main(String arg[])
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        iValue = sobj.nextInt();

        Number obj = new Number(iValue);
        obj.DisplayFactors();
    }
}