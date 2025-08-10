import java.util.*;

class ArrayX
{
    protected int Arr[];
    protected int iCnt;

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
        iCnt = 0;
    }

    protected void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter elements of the array : ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    protected void Display()
    {
        System.out.println("Elements of the array are :");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
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

    public int CountEven()
    {
        int iCount = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class program9
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements");
        int iSize = sobj.nextInt();

        MyArray obj = new MyArray(iSize);
        obj.Accept();
        obj.Display();

        System.out.println("Count of the even number is : "+obj.CountEven());
    }
}