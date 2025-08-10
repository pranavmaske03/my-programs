import java.util.*;

class Array
{
    public int Arr[];
    public int icnt;

    public Array(int iSize)
    {
        Arr = new int[iSize];
        icnt = 0;
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter elements of the array");

        for(icnt = 0; icnt < Arr.length; icnt++)
        {
            Arr[icnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements of the array are :");

        for(icnt = 0; icnt < Arr.length; icnt++)
        {
            System.out.print(Arr[icnt]+"\t");
        }   
        System.out.println();
    }
}

class MyArray extends Array
{
    public MyArray(int iSize)
    {
        super(iSize);
    }

    boolean CheckNumber(int iSearch)
    {
        for(icnt = 0; icnt < Arr.length; icnt++)
        {
            if(Arr[icnt] == iSearch)
            {
                break;
            }
        }
        if(icnt == Arr.length)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

class program14
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements :");
        int iValue = sobj.nextInt();

        MyArray obj = new MyArray(iValue);
        obj.Accept();
        obj.Display(); 

        System.out.println("Enter number you want to search");
        int iNo = sobj.nextInt();

        boolean bRet = obj.CheckNumber(iNo);
        if(bRet == true)
        {
            System.out.println("Number is present");
        }
        else
        {
            System.out.println("Number is NOT present");
        }
    }
}