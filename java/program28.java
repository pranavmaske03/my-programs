import java.util.*;

class Digit 
{
    public int iNo;

    public Digit(int no)
    {
        iNo = no;
    }

    public int CheckFrequency(int iSearch)
    {
        int iDigit = 0,iCount = 0;
        int temp = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        if((iSearch < 1) || (iSearch > 9))
        {
            System.out.print("Invalid Input \nNote : please enter digit between (0 to 9) \n");
            return 0;
        }

        temp = iNo;
        while(temp != 0)
        {
            iDigit = temp % 10;
            if(iDigit == iSearch)
            {
                iCount++;
            }
            temp = temp / 10;
        }
        return iCount;
    }
}

class program28
{
    public static void main(String arg[])
    {
        int iValue1 = 0,iValue2 = 0,iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the digit to check frequency between (1 to 9)");
        iValue2 = sobj.nextInt();

        Digit obj = new Digit(iValue1);
        iRet = obj.CheckFrequency(iValue2);

        System.out.println("Frequency of digit is : "+iRet);
    }
}