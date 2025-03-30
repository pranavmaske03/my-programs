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
        System.out.println("Enter elements of array :");

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
}

class MyArray extends ArrayX
{
    MyArray(int size)
    {
        super(size);
    }

    public int Minimum()
    {
        int iCnt = 0;
        int Min = Arr[iCnt];

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] < Min)
            {
                Min = Arr[iCnt];
            }
        }
        return Min;
    }

    public int Maximum()
    {
        int iCnt = 0;
        int Max = Arr[iCnt];

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] > Max)
            {
                Max = Arr[iCnt];
            }
        }
        return Max;   
    }
}

class program55
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements");
        int size = sobj.nextInt();

        MyArray obj = new MyArray(size);
        obj.Accept();
        obj.Display();

        System.out.println("Maximum element of the array is : "+obj.Maximum());
        System.out.println("Minimum element of the array is : "+obj.Minimum());
    }
}