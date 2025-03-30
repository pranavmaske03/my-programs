using System;

abstract class ArrayX
{   
    protected int[] Arr;
    public abstract void Accept();
    public abstract void Display();
}

class MyArray : ArrayX
{
    public MyArray(int size)
    {
        this.Arr = new int[size];
    }

    public override void Accept()
    {
        Console.WriteLine("Enter the elements of the array :");

        for(int iCnt = 0; iCnt < Arr.Length; iCnt++)
        {
            this.Arr[iCnt] = int.Parse(Console.ReadLine());
        }
    }

    public override void Display()
    {
        Console.WriteLine("Elements of the array are :");
        
        foreach(int iCnt in Arr)
        {
            Console.Write(iCnt+"\t");
        }
        Console.WriteLine();
    }

    public void DisplayOdd()
    {
        Console.WriteLine("Odd elements of the array are :");

        foreach(int iCnt in Arr)
        {
            if(iCnt % 2 != 0)
            {
                Console.Write(iCnt+"\t");
            }
        }
        Console.WriteLine();
    }
}

class MainClass
{
    static void Main()
    {
        int size = 0;

        Console.WriteLine("Enter the size of the array :");
        size = int.Parse(Console.ReadLine());

        MyArray obj = new MyArray(size);
        obj.Accept();
        obj.Display();
        obj.DisplayOdd();
    }
}