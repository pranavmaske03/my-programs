import java.util.*;

class NumberX
{
    public int No;

    NumberX(int no)
    {
        this.No = no;
    }

    public int ReverseNumber()
    {
        int iDigit = 0;
        int result = 0;
        int temp = No;

        while(temp != 0)
        {
            iDigit = temp % 10;
            result = (result*10) + iDigit;
            temp = temp / 10;
        }
        return result;
    }
}

class program52
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int value = sobj.nextInt();

        NumberX obj = new NumberX(value);
        int iRet = obj.ReverseNumber();

        System.out.println("Reverse number is : "+iRet);
    }   
}