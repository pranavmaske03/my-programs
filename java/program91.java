import java.util.*;

class StringX
{
    public String str1;
    public String str2;

    public StringX(String s1,String s2)
    {
        this.str1 = s1;
        this.str2 = s2;
    }

    public void ConcateString()
    {
        char Arr[] = str2.toCharArray();
        char Crr[] = str1.toCharArray();
        char Brr[] = new char[Arr.length + Crr.length]; 

        int iCnt = 0;
        int i = 0;

        for(iCnt = 0,i = 0; iCnt < Brr.length; iCnt++)
        {
           if(iCnt < Crr.length)
           {
             Brr[iCnt] = Crr[iCnt];
           }
           else 
           {
              Brr[iCnt] = Arr[i];
              i++;
           }
        }
        
        String str = new String(Brr);
        System.out.println("String after concatination is : "+str);
    }
}

class program91
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first string");
        String str1 = sobj.nextLine();

        System.out.println("Enter string to concate ");
        String str2 = sobj.nextLine();

        StringX obj = new StringX(str1,str2);
        obj.ConcateString();
    }
}