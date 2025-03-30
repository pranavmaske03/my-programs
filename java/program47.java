import java.util.*;

class StringX
{
    public String str;

    StringX(String srt)
    {
        this.str = srt;
    }

    public int CountVowels()
    {
        byte[] Arr = str.getBytes();
        int count = 0;

        for(int i = 0; i < Arr.length; i++)
        {
            if((Arr[i] == 'A') || (Arr[i] == 'E') || (Arr[i] == 'E') || (Arr[i] == 'I') || (Arr[i] == 'O') ||(Arr[i] == 'U') || (Arr[i] == 'a') || (Arr[i] == 'e') || (Arr[i] == 'i') || (Arr[i] == 'o') || (Arr[i] == 'u'))
            {
                count++;
            }
        }
        return count;
    }
}

class program47
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String");
        String str = sobj.nextLine();

        StringX obj = new StringX(str);
        int iRet = obj.CountVowels();

        System.out.println("Count of the vowels is : "+iRet);
    }
}