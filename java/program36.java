import java.util.*;

class Number 
{
    public int iNo;

    public Number(int no)
    {
        iNo = no;
    }

    public void Display()
    {
        for(int iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.print("(^_^)\t");
        }
    }
}

class program36
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);  
        int iValue = 0;

        System.out.println("Enter number");
        iValue = sobj.nextInt();

        Number obj = new Number(iValue);
        obj.Display();
    }
}