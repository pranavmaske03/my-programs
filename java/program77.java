import java.util.*;

class StringX
{
    public String str;

    StringX(String s)
    {
        this.str = s;
    }

    public void EditingString()
    {
        char Arr[] = str.toCharArray();
        int iCnt = 0;
        int j = 0;
        char Brr[] = new char[Arr.length] ;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                Brr[j] = Arr[iCnt];
                j++;
            }
        }
        String str1 = new String(Brr);
        System.out.println("Edited string is : "+str1);
    }
}

class program77
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string");
        String str = sobj.nextLine();

        StringX obj = new StringX(str);
        obj.EditingString();
    }
}