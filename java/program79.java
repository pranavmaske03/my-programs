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
        System.out.println("Enter elements of the array : ");

        Scanner sobj = new Scanner(System.in);
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

    public int Addition()
    {
        int sum = 0;
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            sum = sum + Arr[iCnt];
        }
        return sum;
    }
}

class program79
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number elements");
        int size = sobj.nextInt();

        MyArray obj = new MyArray(size);
        obj.Accept();
        obj.Display();
        
        System.out.println("Addition is : "+obj.Addition());
    }
}