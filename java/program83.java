import java.io.*;

class program83
{
    public static int CountDigit(int No)
    {
        int iCnt = 0;

        while(No != 0)
        {
            iCnt++;
            No = No / 10;
        }
        return iCnt;
    }

    public static void main(String arg[])
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
        int value = 0;

        try
        {
            System.out.println("Enter number :");
            value = Integer.parseInt(bobj.readLine());
        }
        catch(IOException eobj)
        {
            
        }
        finally
        {
            int ret = CountDigit(value);
            System.out.println("Count of the Digits is : "+ret);
        }
    }
}