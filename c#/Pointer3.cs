// pointer to a structure

using System;

public struct Demo
{
    public int data;
    public char ch;
    public float f;

    public Demo(int no,char ch)
    {
        this.data = no;
        this.ch = ch;
        this.f = 22.22f;
    }
}

class Pointer3
{
    public static void Main(string[] args)
    {          
        unsafe
        {
            Demo obj = new Demo(11, 'M');
            Demo obj1 = new Demo();
            
            Demo* ptr1 = &obj;        
            Demo* ptr2 = &obj1;

            ptr2->data = 55;
            ptr2->ch = 'P';
            ptr2->f = 99.99f;
        
        
            Console.WriteLine(ptr1->data);
            Console.WriteLine(ptr1->ch);
            Console.WriteLine(ptr1->f);

            Console.WriteLine(ptr2->data);
            Console.WriteLine(ptr2->ch);
            Console.WriteLine(ptr2->f);
            
        }
    }
}