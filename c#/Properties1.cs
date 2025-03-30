using System;

class Demo
{
    private int age;

    public int Age
    {
        get
        {
            return this.age;
        }
        set
        {
            this.age = value;
        }
    }
}

class Properties1
{
    public static void Main()
    {
        Demo obj = new Demo();

        obj.Age = 20;
        Console.WriteLine(obj.Age);
    }
}