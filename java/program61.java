import java.util.*;

class program61
{
    public static void Display(int no)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= no; iCnt++)
        {
            System.out.print(iCnt+"\t");
        }
        for(iCnt = no-1; iCnt >= 1; iCnt--)
        {
            System.out.print(iCnt+"\t");
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter frequency");
        int value = sobj.nextInt();

        Display(value);
    }
}