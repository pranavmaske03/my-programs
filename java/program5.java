
import java.util.*;

class ArrayX
{
    protected int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    protected void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter elements of array ");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    protected void Display()
    {
        System.out.println("Elements of array are :");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]+"\t");
        }
        System.out.println();
    }
}

class MyArray extends ArrayX
{
    public MyArray(int iSize)
    {
        super(iSize);
    }

    public boolean CheckNumber(int iSearch)
    {
        boolean bFlag = false;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iSearch)
            {
                bFlag = true;
                break;
            }
        }
        return bFlag;
    }
}

class program5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements :");
        int iSize = sobj.nextInt();

        MyArray obj = new MyArray(iSize);
        obj.Accept();
        obj.Display();

        System.out.println("Enter the numbe you want to search :");
        int iValue = sobj.nextInt();

        boolean bRet = obj.CheckNumber(iValue);
        if(bRet == true)
        {
            System.out.println("Number is present :");
        }
        else
        {
            System.out.println("Number is NOT present :");
        }
    }
}