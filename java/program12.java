import java.util.*;

class Digits
{
    public int CountFrequency(int iNo)
    {
        int iCount = 0;

        while(iNo != 0)
        {
            if((iNo % 10) == 7)
            {
                iCount++;
            }
            iNo = iNo / 10;
        }
        return iCount;
    }
}

class program12
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iValue = sobj.nextInt();

        Digits obj = new Digits();
        
        System.out.println("Count of the 7 is : "+obj.CountFrequency(iValue));
    }
}