import java.io.*;

class program86
{
    public static void Factors(int No)
    {
        int i = 0;
        System.out.println("Factors of the "+No+" are : ");
        for(i = 1; i <= (No/2); i++)
        {
            if((No%i) == 0)
            {
                System.out.println(i);
            }
        }
    }

    public static void main(String arg[])
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
        int value = 0;

        try
        {
            System.out.println("Enter number : ");
            value = Integer.parseInt(bobj.readLine());
        }
        catch(IOException eobj)
        {}
        finally
        {
            Factors(value);
        }
    }
}