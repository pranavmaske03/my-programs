using System;

abstract class ArrayX
{
    public int[] Arr;

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
}

class MyArray : ArrayX
{
    public MyArray(int size)
    {
        this.Arr = new int[size];
    }

    public int SearchFirstOcc(int search)
    {
        int iPos = -1;

        for(int iCnt = 0; iCnt < Arr.Length; iCnt++)
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

        Console.WriteLine("Enter the element to serch in array :");
        value = int.Parse(Console.ReadLine());

        ret = obj.SearchFirstOcc(value);
        if(ret != -1)
        {
            Console.WriteLine("First occurence of the element is at index : {0}",ret);
        }
        else
        {
            Console.WriteLine("There is no such element : ");
        }
    }
}