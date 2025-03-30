using System;

class ArrayX
{
    public int[] Arr;

    public ArrayX(int size)
    {
        this.Arr = new int[size];
    }

    internal void Accept()
    {
        Console.WriteLine("Enter the elements of the array :");

        for(int iCnt = 0; iCnt < Arr.Length; iCnt++)
        {
            Arr[iCnt] = int.Parse(Console.ReadLine());
        }
    }

    internal void Display()
    {
        Console.WriteLine("Elements of the array are :");

        for(int iCnt = 0; iCnt < Arr.Length; iCnt++)
        {
            Console.Write(Arr[iCnt]+"\t");
        }
        Console.WriteLine();
    }
}

class MyArray : ArrayX
{
    public int ERR_NOTUFOUND;

    public MyArray(int size) : base(size)
    {
        this.ERR_NOTUFOUND = -1;    
    }

    public int CheckFirstOcc(int search)
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.Length; iCnt++)
        {
            if(Arr[iCnt] == search)
            {
                break;
            }
        }
        if(iCnt == this.Arr.Length)
        {
            return ERR_NOTUFOUND;
        }        
        else 
        {
            return iCnt;
        }
    }
}

class program22
{
    private static void Main(string[] args)
    {
        int size = 0, ret = 0, value = 0; 

        Console.WriteLine("Enter the size of the array :");
        size = int.Parse(Console.ReadLine());

        MyArray obj = new MyArray(size);
        obj.Accept();
        obj.Display();

        
        Console.WriteLine("Enter the element to search");
        value = int.Parse(Console.ReadLine());

        ret = obj.CheckFirstOcc(value);
        if(ret != -1)
        {
            Console.WriteLine("Element found at index = {0}",ret);
        }
        else
        {
            Console.WriteLine("There is no such element");
        }
    }
}