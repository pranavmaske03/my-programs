// pointer as membter of the structure

using System;

unsafe struct Demo
{
    public int data;
    public int* ptr;
    public char ch;
}

class Pointer2
{
    public unsafe static void Main(string[] args)
    {
        int no = 100;

        Demo obj = new Demo();

        obj.data = 11;
        obj.ptr = &no;
        obj.ch = 'P';

        Console.WriteLine(obj.data);
        Console.WriteLine(*obj.ptr);
        Console.WriteLine(obj.ch);  
        Console.WriteLine((int)obj.ptr);
    }
}