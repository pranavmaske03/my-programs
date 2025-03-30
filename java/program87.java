import java.util.*;

class program87
{
    public static boolean CheckDigit(int No,int search)
    {   
        int iDigit = 0;

        while(No != 0)
        {
            iDigit = No % 10;
            if(iDigit == search)
            {
                break;
            }
            No = No / 10;
        }
        if(No == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        boolean bRet = false;

        System.out.println("Enter number : ");
        int value = sobj.nextInt();

        System.out.println("Enter the digit you want to search : ");
        int digit = sobj.nextInt();

        bRet = CheckDigit(value,digit);
        if(bRet == true)
        {
            System.out.println(digit+" is present...");
        }
        else
        {
            System.out.println(digit+" is not present ...");
        }
    }
}