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

        for(int icnt = 0; icnt < Arr.length; icnt++)
        {
            Arr[icnt] = sobj.nextInt();
        }
    }

    protected void Display()
    {
        System.out.println("Elements of the array are :");

        for(int icnt = 0; icnt < Arr.length; icnt++)
        {
            System.out.print(Arr[icnt]+"\t");
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

    public void DisplayOdd()
    {
        System.out.println("Odd elements of the Array are : ");
        
        for(int icnt = 0; icnt < Arr.length; icnt++)
        {
            if((Arr[icnt]%2) != 0)
            {
                System.out.println(Arr[icnt]);
            }
        }
    }
}

class program42
{
    public static void main(String af[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements");
        iValue = sobj.nextInt();

        MyArray obj = new MyArray(iValue);
        obj.Accept();
        obj.Display();
        obj.DisplayOdd();
    }
}