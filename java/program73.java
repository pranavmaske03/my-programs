import java.util.*;

class StringX
{
    public String str;

    StringX(String s)
    {
        this.str = s;
    }

    public int CountDigit()
    {
        char Arr[] = this.str.toCharArray();
        int iCnt = 0;
        int count = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= '0') && (Arr[iCnt] <= '9'))
            {
                count++;
            }
        }
        return count;
    }
}

class program73
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        StringX obj = new StringX(str);
        
        int ret = obj.CountDigit();
        System.out.println("Count of the digits in the string is : "+ret);
    }   
}