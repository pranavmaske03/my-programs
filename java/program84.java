import java.io.*;

class DigitX
{
    public int No;

    DigitX(int no)
    {
        this.No = no;
    }

    public int Minimum()
    {
        int iDigit = 0;
        int Min = 9;

        while(No != 0)
        {
            iDigit = No % 10;
            if(iDigit < Min)
            {
                Min = iDigit;
            }
            No = No / 10;
        }
        return Min;
    }
}

class program84
{
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
            DigitX obj = new DigitX(value);
            int ret = obj.Minimum();

            System.out.println("Minimum digit is : "+ret);
        }
    }
}