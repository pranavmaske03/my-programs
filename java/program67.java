import java.util.*;

class ArrayX
{
    public int Arr[];

    ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        System.out.println("Enter element of array : ");
        Scanner sobj = new Scanner(System.in);

        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {

        System.out.println("element of array are : ");

        for(int i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();
    }

    public void MaximumMinimum()
    {
        int iCnt = 0;
        int Max = Arr[iCnt];
        int Min = Arr[iCnt];

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] < Min)
            {
                Min = Arr[iCnt];
            }
            else if(Arr[iCnt] > Max)
            {
                Max = Arr[iCnt];
            }
        }
        System.out.println("Maximum element is : "+Max);
        System.out.println("Minimum element is : "+Min);
    }
}

class program67
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter number of elements");
        int size = sobj.nextInt();

        ArrayX obj = new ArrayX(size);
        obj.Accept();
        obj.Display();
        obj.MaximumMinimum();
    }
}