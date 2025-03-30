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
        Console.WriteLine("Enter the elemets of the array :");

        for(int iCnt = 0; iCnt < Arr.Length; iCnt++)
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

    public int Minimum()
    {
        int iMin = Arr[0];

        foreach(int iCnt in Arr)
        {
            if(iMin > iCnt)
            {
                iMin = iCnt;
            }
        }
        return iMin;
    }
}

class MainClass
{
    static void Main()
    {
        int size = 0,ret = 0;

        Console.WriteLine("Enter the size of the array :");
        size = int.Parse(Console.ReadLine());

        ArrayX obj = new ArrayX(size);
        obj.Accept();
        obj.Display();

        ret = obj.Minimum();
        Console.WriteLine("Minimum element is : "+ret);
    }
}