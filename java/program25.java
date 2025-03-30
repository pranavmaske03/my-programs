import java.util.*;

class program25
{
    public static void Display(int no)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= no; iCnt++)
        {
            System.out.println("Fuck you bitch...");
        }
    }
    public static void main(String arg[])
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        iValue = sobj.nextInt();

        Display(iValue);
    }    
}