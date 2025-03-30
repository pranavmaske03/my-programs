import java.util.*;

class NumberX
{
    public int No;

    NumberX(int no)
    {
        No = no;
    }

    public float Average()
    {
        int iDigit,iSum = 0;
        int count = 0;
        int temp = this.No;

        while(temp != 0)
        {
            iDigit = temp % 10;
            count++;
            iSum = iSum + iDigit;
            temp = temp / 10;
        }

        return ((float)iSum / (float) count);
    }
}

class program48
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iValue = sobj.nextInt();

        NumberX obj = new NumberX(iValue);

        float iRet = obj.Average();

        System.out.println("Average is : "+iRet);
    }
}