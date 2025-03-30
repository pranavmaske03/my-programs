import java.util.*;

class StringX
{
    public int CountVowels(String str)
    {
        char Arr[] = str.toCharArray();
        int count = 0;

        for(int i = 0; i < Arr.length; i++)
        {
            if((Arr[i] == 'A') || (Arr[i] == 'E') || (Arr[i] == 'I') || (Arr[i] == 'O') || (Arr[i] == 'U') || (Arr[i] == 'a') || (Arr[i] == 'e') || (Arr[i] == 'i') || (Arr[i] == 'o') || (Arr[i] == 'u'))
            {
                count++;
            }
        }
        return count;
    }
}

class program58
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String ");
        String str = sobj.nextLine();
        
        StringX obj = new StringX();
        int ret = obj.CountVowels(str);

        System.out.println("Count of vowels is : "+ret);
    }
}