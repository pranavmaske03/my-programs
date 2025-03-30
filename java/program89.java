import java.util.*;

interface ArrayX
{

    public void Accept();
    public void Display();
}

class MyArray implements ArrayX
{   
    public int Arr[];

    MyArray(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("enter elements of the array : ");

        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements of the array are : ");

        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }

    public int SearchLastOcc(int search)
    {
        int iCnt = 0;
        int iPos = -1;

        for(iCnt = Arr.length-1; iCnt >= 0; iCnt--)
        {
            if(Arr[iCnt] == search)
            {
                iPos = iCnt;
            }
        }
        return iPos;
    }
}

class program89
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("enter number of elemnts : ");
        int size = sobj.nextInt();

        System.out.println("Enter the element to search in the array : ");
        int value = sobj.nextInt();

        MyArray obj = new MyArray(size);

        obj.Accept();
        obj.Display();

        int ret = obj.SearchLastOcc(value);
        if(ret != -1)        
        {
            System.out.println("Last occurence of the element found at index : "+ret);
        }
        else
        {
            System.out.println("there is no such element..");
        }
    }
}