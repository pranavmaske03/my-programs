import java.util.*;

class StringX
{
    public void CountCapitalSmall(String str)
    {
        char Arr[] = str.toCharArray();
        int small = 0;
        int capital = 0;

        for(int i = 0; i < Arr.length; i++)
        {
            if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))   
            {
                capital++;
            }
            else if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
            {
                small++;
            }
        }
        System.out.println("count of the small letters are : "+small);
        System.out.println("count of the capital letters are : "+capital);
    }
}

class program59
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String ");
        String str = sobj.nextLine();
        
        StringX obj = new StringX();
        obj.CountCapitalSmall(str);
        
    }
}