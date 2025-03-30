import java.io.*;


class program82
{
    public static int CountChar(String str,char ch)
    {
        char Arr[] = str.toCharArray();
        int iCnt = 0;
        int count = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == ch)
            {
                count++;
            }
        }
        return count;
    }

    public static void main(String arg[])
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
        String str = "";
        char ch = ' ';
        int ret = 0;

        try
        {
            System.out.println("Enter string : ");
            str = bobj.readLine();

            System.out.println("Enter the character you want to count : ");
            ch = (char)bobj.read();
           // char ch = sobj.next().charAt(0);
        }
        catch(IOException eobj)
        {}
        finally
        {
            ret = CountChar(str,ch);
            System.out.println("count of the character is : "+ret);
        }
    }
}