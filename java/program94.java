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
        System.out.println("Enter elements of the array");

        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements of the array are ");

        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }

    public int Maximum()
    {
        int iCnt = 0;
        int iMax = Arr[iCnt];

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] > iMax)
            {
                iMax = Arr[iCnt];
            }
        }
        return iMax;
    }
}

class program94
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements : ");
        int size = sobj.nextInt();

        MyArray obj = new MyArray(size);
        obj.Accept();
        obj.Display();

        int ret = obj.Maximum();
        System.out.println("Maximum element is : "+ret);
    }
}