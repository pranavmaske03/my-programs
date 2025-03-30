import java.util.Scanner;

class ArrayX
{
    protected int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    protected void Accept()
    {
        int iCnt = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter elements of array :");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    protected void Display()
    {
        System.out.println("Element of the array are :");

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

    public int CheckFirstOcc(int iSearch)
    {
        int iCnt = 0;
        int iPos = -1;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iSearch)
            {
                iPos = iCnt;
                break;
            }
        }
        return iPos;
    }
}

class program22
{
    public static void main(String arg[])
    {
        int iValue = 0,iValue1 = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements ");
        iValue = sobj.nextInt();

        MyArray obj = new MyArray(iValue);
        obj.Accept();
        obj.Display();
        
        System.out.println("Enter number to search :");
        iValue1 = sobj.nextInt();
        int iRet = obj.CheckFirstOcc(iValue1);
        if(iRet == -1)
        {
            System.out.println("There is no such number in array :");
        }
        else
        {
            System.out.println("First occurence of the element is at index : "+iRet);
        }
    }
}