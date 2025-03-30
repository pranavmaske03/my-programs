import java.io.*;

class NumberX
{
    public int No;

    NumberX(int num)
    {
        this.No = num;
    }

    public int SumFactors(int num)
    {
        int sum = 0;
        int i = 0;

        for(i = 1; i <= (num/2); i++)
        {
            if((num%i) == 0)
            {
                sum = sum + i;

                if(sum > num)
                {
                    break;
                }
            }
        }
        System.out.println(sum);
        return sum;
    }

    public boolean CheckPerfect()
    {
        int result = 0;

        result = SumFactors(No);
        if(result == No)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program99
{
    public static void main(String arg[])
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
        int value = 0;
        boolean bRet = false;

        try
        {
            System.out.println("Enter the number ");
            value = Integer.parseInt(bobj.readLine());
        }
        catch(IOException eobj)
        {}
        finally
        {
            NumberX obj = new NumberX(value);
            bRet = obj.CheckPerfect();
            if(bRet == true)
            {
                System.out.println("Number is perfect");
            }
            else
            {
                System.out.println("Number is not perfect");
            }
        }
    }
}