using System;

class Indexers
{
    public int[] Arr;

    public Indexers(int size)
    {
        this.Arr = new int[size];
    }

    public int this[int index]
    {
        get
        {
            return this.Arr[index];
        }
    }

    public void Accept()
    {
        Console.WriteLine("Enter elemebts of the array :");

        for(int iCnt = 0; iCnt < Arr.Length; iCnt++)
        {
            this.Arr[iCnt] = int.Parse(Console.ReadLine());
        }
    }
}

class MainClass
{   
    static void Main()
    {
        int size = 0;

        Console.WriteLine("Enter size of the array");
        size = int.Parse(Console.ReadLine());

        Indexers obj = new Indexers(size);
        obj.Accept();

        Console.WriteLine("Elements of the array are :");
        for(int iCnt = 0; iCnt < size; iCnt++)
        {
            Console.WriteLine(obj[iCnt]);
        }
    }
}