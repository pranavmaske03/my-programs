import java.util.*;

class program68
{
    public static void DisplayCapitalLetters1(String str)
    {
        char Arr[] = str.toCharArray();
        int j = 0;
        int count = 0;

        for(int i = 0; i < Arr.length; i++)
        {
            if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
            {
                count++;
            }
        }

        char Brr[] = new char[count];

        for(int i = 0; i < Arr.length; i++)
        {
            if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
            {
                Brr[j] = Arr[i];
                j++;
            }
        }

        String str1 = new String(Brr);
        System.out.println("Editing string is : "+str1);
    }

    public static void DisplayCapitalLetters(String str)
    {
        char Arr[] = str.toCharArray();
        char Brr[] = new char[Arr.length];
        int j = 0;

        for(int i = 0; i < Arr.length; i++)
        {
            if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
            {
                Brr[j] = Arr[i];
                j++;
            }
        }
        String str1 = new String(Brr);
        System.out.println("Editing string is : "+str1);
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String");
        String str = sobj.nextLine();

        DisplayCapitalLetters1(str);
    }
}