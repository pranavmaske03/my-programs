import java.io.*;

class program100
{
    public static boolean CompareString(String str1,String str2)
    {
        char Arr[] = str1.toCharArray();
        char Brr[] = str2.toCharArray();
        int iCnt = 0;

        if(Arr.length != Brr.length)
        {
            return false;
        }

        while(iCnt < Arr.length)
        {
            if(Arr[iCnt] != Brr[iCnt])
            {
                break;
            }
            iCnt++;
        }
        if(iCnt == Arr.length)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public static void main(String arg[])
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
        String str1 = "";
        String str2 = "";
        boolean bRet = false;

        try
        {
            System.out.println("Enter first string : ");
            str1 = bobj.readLine();

            System.out.println("Enter second string : ");
            str2 = bobj.readLine();
        }
        catch(IOException eobj)
        {}
        finally
        {
            bRet = CompareString(str1,str2);
            if(bRet == true)
            {
                System.out.println("String is identicle");
            }
            else
            {
                System.out.println("String is NOT identicle");
            }
        }
    }
}