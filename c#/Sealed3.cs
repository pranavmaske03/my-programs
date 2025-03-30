using System;

class Animal
{
    public virtual string Name {set;get;}
    public virtual string Gender{set;get;}
}

class Dog : Animal
{
    private string _name;
    private string _gender;

    public override string Name
    {
        get
        {
            return this._name;
        }
        set
        {
            this._name = value;
        }
    }

    public sealed override string Gender
    {
        get
        {
            return this._gender;
        }
        set
        {
            this._gender = value;
        }
    }
}

class Cat : Dog
{
    private string _name;
    private string _gender;

    public override string Name
    {
        get
        {
            return this._name;
        }
        set
        {
            this._name = value;
        }
    }

    public sealed override string Gender  // Error
    {
        get
        {
            return this._gender;
        }
        set
        {
            this._gender = value;
        }
    }
}

class MainClass
{
    static void Main()
    {
        Cat obj = new Cat();
    }
}
