import java.util.*;

class StringX
{
    public String str;

    StringX(String s)
    {
        this.str = s;
    }

    public String StringReverse()
    {
        char Arr[] = str.toCharArray();    
        int start = 0;
        int end = Arr.length-1;
        char temp = ' ';

        while(start < end)
        {
            temp = Arr[start];
            Arr[start] = Arr[end];
            Arr[end] = temp;

            start++;
            end--;
        }

        String name = new String(Arr);
        return name;
    }
}

class program50
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();

        StringX obj = new StringX(str);
        
        System.out.println("Reverse String is : "+obj.StringReverse());
    }
}