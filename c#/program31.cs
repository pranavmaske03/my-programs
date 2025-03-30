using System;

class ArrayX
{
    public int[] Arr;

    public ArrayX(int size)
    {
        this.Arr = new int[size];
    }

    public void Accept()
    {
        Console.WriteLine("Enter the elements of the array :");

        for(int iCnt = 0; iCnt < Arr.Length; iCnt++)
        {
            Arr[iCnt] = int.Parse(Console.ReadLine());
        }
    }

    public void Display()
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
    public MyArray(int size) : base(size)
    {}

    public int SearchFirstOcc(int search)
    {
        int iCnt = 0,iPos = -1;

        for(iCnt = 0; iCnt < Arr.Length; iCnt++)
        {
            if(Arr[iCnt] == search)
            {
                iPos = iCnt;
                break;
            }
        }
        return iPos;
    }
}

class MainClass
{
    static void Main()
    {
        int size = 0,ret = 0,value = 0;

        Console.WriteLine("Enter the size of the array :");
        size = int.Parse(Console.ReadLine());

        MyArray obj = new MyArray(size);
        obj.Accept();
        obj.Display();

        Console.WriteLine("Enter the number to search in array :");
        value = int.Parse(Console.ReadLine());

        ret = obj.SearchFirstOcc(value);
        if(ret != -1)
        {
            Console.WriteLine("first occurence of the element is at index : {0}",ret);
        }
        else 
        {
            Console.WriteLine("There is no such element :");
        }
    }
}