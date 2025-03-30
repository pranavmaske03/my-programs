import java.util.*;

class program65
{
    public static int Factorial(int no)
    {
        int iFact = 1;

        for(int i = 1; i <= no; i++)
        {
            iFact = iFact * i;
        }
        return iFact;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int No = sobj.nextInt();        

        int ret = Factorial(No);
        System.out.println("Result is : "+ret);
    }
}
