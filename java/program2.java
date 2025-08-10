
import java.util.*;

class program2
{
    public static int Arithmatic(int iNo1, int iNo2)
    {
        int iAns = iNo1 + iNo2;

        return iAns;
    }
    

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number :");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter Second number :");
        int iValue2 = sobj.nextInt();
        
        int iRet = Arithmatic(iValue1, iValue2);
        System.out.println("Addition is : "+iRet);
    }
}