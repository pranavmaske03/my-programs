using System;

class Demo
{
    public readonly int age;
    public readonly string Name;
    public readonly int Num = 23;

    public Demo(int no,string str)
    {
        this.age = no;
        this.Name = str;
    }

    public void Display()
    {
        //this.age = 44; ERROR
        Console.WriteLine(this.age);
        Console.WriteLine(this.Name);
        Console.WriteLine(this.Num);
    }
}

class MainClass
{
    public static void Main()
    {
        Demo obj = new Demo(30,"Marvellous");
        obj.Display();
    }
}