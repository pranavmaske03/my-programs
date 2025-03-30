import java.util.*;

class program62
{
    public static void Display(int no)
    {
        int iCnt = 0;
        char ch = ' ';

        for(iCnt = 1,ch = 'A'; iCnt <= no; iCnt++,ch++)
        {
            System.out.print(ch+"\t"+iCnt+"\t");
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