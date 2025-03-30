import java.util.*;

class program13
{
    public static void DisplayDigits(int iNo)
    {
        for(int icnt = 1; icnt <= iNo; icnt++)    
        {
            System.out.print(icnt+"\t");
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Frequency");
        int iValue = sobj.nextInt();

        DisplayDigits(iValue);
    }
}