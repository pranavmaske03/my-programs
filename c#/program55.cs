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
        Console.WriteLine("Enter elements of the array :");

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
}

class Myarray : ArrayX
{
    public Myarray(int size) : base(size)
    {}

    public int Maximum()
    {
        int iCnt = 0;
        int iMax = Arr[iCnt];

        for(iCnt = 0; iCnt < Arr.Length; iCnt++)
        {
            if(Arr[iCnt] > iMax)
            {
                iMax = Arr[iCnt];
            }
        }
        return iMax;
    }
    public int Minumum()
    {
        int iCnt = 0;
        int iMin = Arr[iCnt];

        for(iCnt = 0; iCnt < Arr.Length; iCnt++)
        {
            if(Arr[iCnt] < iMin)
            {
                iMin = Arr[iCnt];
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

        Console.WriteLine("Enter size of the array :");
        size = int.Parse(Console.ReadLine());

        Myarray obj = new Myarray(size);
        obj.Accept();
        obj.Display();

        Console.WriteLine("Maximum element is : "+obj.Maximum());
        Console.WriteLine("Minimum element is : "+obj.Minumum());
    }
}