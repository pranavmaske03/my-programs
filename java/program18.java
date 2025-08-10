import java.util.*;

class Number
{
    public void Display(int iNo)
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        for(int iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.print(iCnt+"\t");
        }
        System.out.println();
    }
}

class program18
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Frequency");
        int iValue = sobj.nextInt();

        Number obj = new Number();
        obj.Display(iValue);
    }
}