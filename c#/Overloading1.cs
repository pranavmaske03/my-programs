using System;

class Arithmetic
{
    public int Addition(int no1, int no2)
    {
        return no1 + no2;
    }

    public int Addition(int no1, int no2, int no3)
    {
        return no1+no2+no3;
    }

    public float Addition(float no1, float no2)
    {
        return no1 + no2;
    }

    public double Addition(double no1, double no2)
    {
        return no1 + no2;
    }
    public float Addition(int no1, float no2)
    {
        return (float)no1 + no2;
    }
    public float Addition(float no1, int no2)
    {
        return no1 + (float)no2;
    }
}

class MainClass
{
    static void Main()
    {
        Arithmetic obj = new Arithmetic();

        Console.WriteLine(obj.Addition(11,22));
        Console.WriteLine(obj.Addition(11,22,33));
        Console.WriteLine(obj.Addition(11.11f,22.67f));
        Console.WriteLine(obj.Addition(11.11234,22.672354));
        Console.WriteLine(obj.Addition(10,45.67f));
        Console.WriteLine(obj.Addition(24.567f,50));
    }
}