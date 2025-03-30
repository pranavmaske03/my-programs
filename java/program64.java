import java.util.*;

class ArrayX
{
    public int Arr[];

    ArrayX(int iSize)
    {
        this.Arr = new int[iSize];
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
        System.out.println("Elements of the array are : ");

        for(int i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();
    }

    public boolean Search(int search)
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == search)
            {
                break;
            }
        }
        if(iCnt == Arr.length)
        {
            return false;
        }
        else 
        {
            return true;
        }
    }
}

class program64
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements");
        int size = sobj.nextInt();

        ArrayX obj = new ArrayX(size);
        obj.Accept();
        obj.Display();

        System.out.println("Enter the element you want to search in array");
        size = sobj.nextInt();
        
        boolean bRet = obj.Search(size);
        if(bRet == true)
        {
            System.out.println("Element found in array");
        }
        else
        {
            System.out.println("There is no such element");
        }
    }
}