import java.util.*;

class StringX
{
    public String str;

    StringX(String s)
    {
        this.str = s;
    }

    public int SearchFirstOcc(char ch)
    {
        char Arr[] = str.toCharArray();
        int i = 0;

        while(i < Arr.length)
        {
            if(Arr[i] == ch)
            {
                break;
            }
            i++;
        }
        if(i == Arr.length)
        {
            return -1;
        }
        else
        {
            return i;
        }
    }
}

class program51
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string");
        String str = sobj.nextLine();

        System.out.println("Enter the character you want to search");
        char ch = sobj.next().charAt(0);     

        StringX obj = new StringX(str);
        int iRet = obj.SearchFirstOcc(ch);
        
        if(iRet != -1)
        {
            System.out.println("First occurence of the character is at index : "+iRet);
        }
        else
        {
            System.out.println("There is no such character");
        }
    }
}
