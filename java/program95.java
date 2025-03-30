import java.util.*;

class program95
{
    public static void EditingString(String str)
    {
        char Arr[] = str.toCharArray();
        char Brr[] = new char[Arr.length];

        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Brr[iCnt] = Arr[iCnt];
        }

        String s = new String(Brr);
        System.out.println("String after copy is : "+s);
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        EditingString(str);
    }
}