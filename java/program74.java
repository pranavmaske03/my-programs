import java.io.*;

class program74
{
    public static int CountSpace(String str)
    {
        char Arr[] = str.toCharArray();
        int count = 0;
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == ' ')
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
        try
        {
            System.out.println("Enter String");
            str = bobj.readLine();
        }
        catch(IOException eobj)
        {}
        finally
        {
            int ret = CountSpace(str);
            System.out.println("count of the white spaces are : "+ret);
        }
    }
}