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
        int iCnt = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter elements of array");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    protected void Display()
    {
        System.out.println("Elements of the array are : ");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
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

    public int CountOdd()
    {
        int iCnt = 0;
        int iCount = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt]%2) != 0)
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class program29
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter number of elements ");
        iValue = sobj.nextInt();

        MyArray obj = new MyArray(iValue);
        obj.Accept();
        obj.Display();
        
        System.out.println("Count of the Odd elements are : "+obj.CountOdd());
    }
}