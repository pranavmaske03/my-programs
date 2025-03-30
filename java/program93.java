import java.util.*;

class program93
{
    public static String StringRev(String str)
    {
        char Arr[] = str.toCharArray();
        int end = Arr.length-1;
        int start = 0;
        char temp = ' ';

        while(start < end)
        {
            temp = Arr[start];
            Arr[start] = Arr[end];
            Arr[end] = temp;

            start++;
            end--;
        }

        String s = new String(Arr);
        return s;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String");
        String str = sobj.nextLine();

        String sRet = StringRev(str);
        System.out.println("Reverse string is : "+sRet);
    }   
}