import java.util.*;

class ArrayX
{
    public int Arr[];

    ArrayX(int isize)
    {
        this.Arr = new int[isize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter elements of array :");

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
}

class MyArray extends ArrayX
{
    MyArray(int size)
    {
        super(size);
    }

    public void DisplayEven()
    {
        System.out.println("Even elements of the array are : ");

        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                System.out.print(Arr[iCnt]+"\t");
            }
        }
        System.out.println();
    }

    public void DisplayOdd()
    {
        System.out.println("Odd elements of the array are : ");

        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) != 0)
            {
                System.out.print(Arr[iCnt]+"\t");
            }
        }
        System.out.println();
    }
}

class program85
{
    public static void main(String arg[])
    {
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter number of elements : ");
    int size = sobj.nextInt();

    MyArray obj = new MyArray(size);
    obj.Accept();
    obj.Display();
    obj.DisplayEven();
    obj.DisplayOdd();
    }
}