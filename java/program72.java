import java.util.*;

class program72
{
    public static boolean CheckChar(char ch)
    {
        if((ch >= 'A') && (ch <= 'Z') || (ch >= 'a') && (ch <= 'z'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        boolean bRet = false;

        System.out.println("Enter character");
        char ch = sobj.next().charAt(0);

        bRet = CheckChar(ch);
        if(bRet == true)
        {
            System.out.println(ch+" is character");
        }
        else
        {
            System.out.println(ch+" is not character");
        }
    }
}