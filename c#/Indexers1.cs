using System;

class Indexers
{
    public int[] Arr;

    public Indexers()
    {
        this.Arr = new int[5];
    }

    // indexer creation
    public int this[int index]
    {
        set
        {
            this.Arr[index] = value;
        }
        get
        {
            return Arr[index];
        }
    }
}

class MainClass
{
    public static void Main(string[] args)
    {
        Indexers obj = new Indexers();

        obj[0] = 1;
        obj[1] = 21;
        obj[2] = 31;
        obj[3] = 41;
        obj[4] = 51;

        Console.WriteLine(obj[0]);
        Console.WriteLine(obj[1]);
        Console.WriteLine(obj[2]);
        Console.WriteLine(obj[3]);
        Console.WriteLine(obj[4]);
    }
}