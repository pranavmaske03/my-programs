// interface with property

using System;

interface Person
{
    int Age {get;set;}
    string FirstName{get;set;}
    string LastName{get;set;}
}

class Me : Person
{
    private int _age;
    private string _firstname;
    private string _lastname;

    public Me()
    {
        this._lastname = "Maske";
    }


    public int Age 
    {
        get
        {
            return this._age;
        }
        set
        {
            this._age = value;
        }
    }


    public string FirstName
    {   
        get
        {
            return this._firstname;
        }
        set
        {
            this._firstname = value;
        }
    } 


    public string LastName
    {
        get
        {
            return this._lastname;
        }
        set
        {
            this._lastname = value;
        }
    }
}

class MainClass
{
    private static void Main()
    {
        Me obj = new Me();

        obj.Age = 21;
        obj.FirstName = "Pranav";

        Console.WriteLine(obj.Age);
        Console.WriteLine(obj.FirstName);
        Console.WriteLine(obj.LastName);
    }
}