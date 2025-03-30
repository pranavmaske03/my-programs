using System;

class Properties
{
    private int _age;
    private string _lastname;
    private string _firstname;

    public Properties()
    {
        this._lastname = "Infosystems";
    }

    public int Age              // Read-Write property
    {
        set
        {
            this._age = value;
        }
        get
        {
            return this._age;
        }
    }       
    public string LastName      // Read only property
    {
        get
        {
            return this._lastname;
        }
    }  
    public string FirstName     // Write only property
    {
        set
        {
            this._firstname = value;
        }
    }
}

class StaticProperties
{
    private static int age;

    public static int Age
    {
        get
        {
            return age;    
        }
        set
        {
            age = value;
        }
    }
}

class MainClass
{
    static void Main()
    {
        Properties pobj = new Properties();
        StaticProperties sobj = new StaticProperties();

        pobj.Age = 11;
        pobj.FirstName = "Marvellous";
       // pobj.LastName = "Maske";

        Console.WriteLine(pobj.Age);
        //Console.WriteLine(pobj.FirstName);
        Console.WriteLine(pobj.LastName);

        StaticProperties.Age = 20;
        Console.WriteLine(StaticProperties.Age);
    }
}