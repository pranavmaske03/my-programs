
import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {
        for(int iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.print("*\t");
        }
    }
}

class program8
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iValue = sobj.nextInt();

        Pattern obj = new Pattern();
        obj.Display(iValue);
    }
}