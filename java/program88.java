import java.util.*;

class program88
{

    public static String EditString(String str)
    {
        char Arr[] = str.toCharArray();
        int icnt = 0;

        for(icnt = 0; icnt < Arr.length; icnt++)
        {
            if((Arr[icnt] >= 'A') && (Arr[icnt] <= 'Z'))
            {
                Arr[icnt] = 'v';
            }
            else if((Arr[icnt] >= 'a') && (Arr[icnt] <= 'z'))
            {
                Arr[icnt] = '^';
            }
        }
        String s = new String(Arr);
        return s;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        String s = EditString(str);
        System.out.println("String after editing is : "+s);
    }
}