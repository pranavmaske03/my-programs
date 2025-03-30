using System;

class AccessProperties
{
    private int _age;
    private string _firstname;
    private string _lastname;

    public AccessProperties()
    {
        this._lastname = "Marvellous";
        this._firstname = "Insosytems";
    }

    public int Age           
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
    public string LastName     
    {
        get
        {
            return this._lastname;
        }
        private set
        {
            this._lastname = value;
        }
    }  
    public string FirstName     
    {   
        get
        {
            return this._firstname;
        }
        protected set  
        {
            this._firstname = value;
        }
    }
}

class MainClass
{
    public static void Main()
    {   
        AccessProperties pobj = new AccessProperties();
       
        pobj.Age = 11;
       // pobj.FirstName = "Marvellous";

        Console.WriteLine(pobj.Age);
        Console.WriteLine(pobj.FirstName);
        Console.WriteLine(pobj.LastName);
    }
}