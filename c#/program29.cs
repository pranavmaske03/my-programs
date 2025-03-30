using System;

interface ArrayX
{
    void Accept();
    void Display();
}

struct MyArray : ArrayX
{
    public int[] Arr;

    public MyArray(int size)
    {
        this.Arr = new int[size];
    }

    public void Accept()
    {
        Console.WriteLine("Enter the elements of the array :");

        for(int iCnt = 0; iCnt  < Arr.Length; iCnt++)
        {
            this.Arr[iCnt] = int.Parse(Console.ReadLine());
        }
    }
    public void Display()
    {
        Console.WriteLine("Elements of the array are :");

        foreach(int iCnt in Arr)
        {
            Console.Write(iCnt+"\t");
        }
        Console.WriteLine();
    }
    public int CountOdd()
    {
        int count = 0;

        foreach(int iCnt in Arr)
        {
            if((iCnt%2) != 0)
            {
                count++;
            }
        }
        return count;
    }
}

struct MainStruct
{
    public static void Main()
    {
        int size = 0,ret = 0;

        Console.WriteLine("Enter the size of the array :");
        size = int.Parse(Console.ReadLine());

        MyArray obj = new MyArray(size);
        obj.Accept();
        obj.Display();

        ret = obj.CountOdd();
        Console.WriteLine("Count of the odd elements is : "+ret);
    }
}