import java.util.*;

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter elements of array");

        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements of array are : ");

        for(int i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i]+"\t");
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

    public int SearchFirstOcc(int iSearch)
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

class program46
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements");
        int size = sobj.nextInt();

        MyArray obj = new MyArray(size);
        obj.Accept();
        obj.Display();

        System.out.println("Enter the number to search in array");
        int value = sobj.nextInt();

        int iRet = obj.SearchFirstOcc(value);
        if(iRet != -1)
        {
            System.out.println("First occurence of the element is at index : "+ iRet);
        }
        else
        {
            System.out.println("Element not found...");
        }
    }
}