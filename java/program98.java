import java.io.*;

class program98
{
    public static String ToggleString(String str)
    {
        char Arr[] = str.toCharArray();
        int Gap = 'a' - 'A';
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] - Gap);
            }
            else if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] + Gap);
            }
        }
        String s = new String(Arr);
        return s;
    }

    public static void main(String arg[])
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
        String str = "";

        try
        {
            System.out.println("Enter string : ");
            str = bobj.readLine();
        }
        catch(IOException eobj)
        {}
        finally
        {
            String sRet = ToggleString(str);
            System.out.println("String after Togle is : "+sRet);
        }
    }
}