using System;

class PTest
{
    public int age;
    public char ch;

    public PTest()
    {
        this.age = 20;
        this.ch = 'P';
    }

    public void Display()
    {
        Console.WriteLine("Your age is : "+this.age);
    }
}

class Pointer4
{
    public unsafe static void Main(string[] args)
    {
        PTest obj = new PTest();
        obj.Display();

        fixed(int* myAge = &obj.age)
        {
            *myAge = *myAge + 5;
        }
        obj.Display();
    }
}