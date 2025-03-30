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
        Console.WriteLine("Enter the elements of the array : -");

        for(int iCnt = 0; iCnt < Arr.Length; iCnt++)
        {
            this.Arr[iCnt] = int.Parse(Console.ReadLine());
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

    public int CountEven()
    {
        int count = 0;

        for(int iCnt = 0; iCnt < Arr.Length; iCnt++)
        {
            if((Arr[iCnt]%2) == 0)
            {
                count++;
            }
        }
        return count;
    }
}

class program10
{
    public static void Main(string[] args)
    {
        int size = 0;
        int ret = 0;

        Console.WriteLine("Enter the size of the array : ");
        size = int.Parse(Console.ReadLine());

        ArrayX obj = new ArrayX(size);
        obj.Accept();
        obj.Display();

        Console.WriteLine("Count of the even element is : "+obj.CountEven());
    }
}