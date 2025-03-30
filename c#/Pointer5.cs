using System;

unsafe class PTest
{
    public int data;
    public int* next;

    public PTest()
    {
        this.data = 0;
        this.next = null;
    }
}

class Pointer5
{
    public unsafe static void Main(string[] args)
    {
        int no = 11;

        PTest obj = new PTest();

        obj.data = 55;
        obj.next = &no;

        Console.WriteLine(obj.data);
        Console.WriteLine(*(obj.next));
    }
}