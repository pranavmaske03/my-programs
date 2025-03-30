import java.util.*;

class program69
{
    public static int CalculatePower(int iBase,int iPower)
    {
        int result =   1;

        for(int i = 1; i <= iPower; i++)
        {
            result = result * iBase;
        }
        return result;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Base : ");
        int value1 = sobj.nextInt();

        System.out.println("Enter power : ");
        int value2 = sobj.nextInt();

        int ret = CalculatePower(value1,value2);
        System.out.println("Result is : "+ret);
    }
}