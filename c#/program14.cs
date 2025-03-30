using System;

struct ArrayX
{
    internal int[] Arr;

    internal ArrayX(int size)
    {
        this.Arr = new int[size];
    }

    public void Accept()
    {
        Console.WriteLine("Enter the elements of the array : ");

        for(int iCnt = 0; iCnt < Arr.Length; iCnt++)
        {
            Arr[iCnt] = int.Parse(Console.ReadLine());
        }
    }

    public void Display()
    {
        Console.WriteLine("Elements of the array are : ");

        for(int iCnt = 0; iCnt < Arr.Length; iCnt++)
        {
            Console.Write(Arr[iCnt]+"\t");
        }
        Console.WriteLine();
    }

    internal bool SearchNum(int search)
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.Length; iCnt++)
        {
            if(Arr[iCnt] == search)
            {
                break;
            }
        }
        if(iCnt == Arr.Length)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

struct program14
{
    public static void Main()
    {
        int size = 0,value = 0;
        bool bRet = false;

        Console.WriteLine("Enter the size of the array : ");
        size = int.Parse(Console.ReadLine());

        ArrayX obj = new ArrayX(size);
        obj.Accept();
        obj.Display();

        Console.WriteLine("Enter the element to search : ");
        value = int.Parse(Console.ReadLine());

        bRet = obj.SearchNum(value);
        if(bRet == true)        
        {
            Console.WriteLine("Element is present in array : ");
        }
        else
        {
            Console.WriteLine("There is no such element..");
        }
    }
}