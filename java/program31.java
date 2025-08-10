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
        System.out.println("Enter elements of the array");

        Scanner sobj = new Scanner(System.in);

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    protected void Display()
    {
        System.out.println("Elements of the array are ");

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

    public int FirstOcc(int iSearch)
    {
        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iSearch)
            {   
                break;
            }
        }
        if(iCnt == Arr.length)
        {
            return -1;
        }
        else 
        {
            return iCnt;
        }
    }
}

class program31
{
    public static void main(String arg[])
    {
        int iValue = 0,iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements");
        iValue = sobj.nextInt();

        MyArray obj = new MyArray(iValue);
        obj.Accept();
        obj.Display();

        System.out.println("Enter element to search");
        iValue = sobj.nextInt();

        iRet = obj.FirstOcc(iValue);
        if(iRet == -1)
        {
            System.out.println("There is no such number");
        }
        else
        {
            System.out.println("First occurence of the "+iValue+" is at Index : "+iRet);
        }
    }
}
