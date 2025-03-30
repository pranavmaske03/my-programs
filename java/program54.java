import java.util.*;

class CharacterX
{
    public char ch;

    CharacterX(char c)
    {
        this.ch = c;
    }

    public boolean CheckChar()
    {
        if((ch >= 'A') && (ch <= 'Z') || (ch >= 'a') && (ch <= 'z'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program54
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter character");
        char ch = sobj.next().charAt(0);

        CharacterX obj = new CharacterX(ch);
        boolean bRet = obj.CheckChar();

        if(bRet == true)
        {
            System.out.println("It is Character");
        }
        else
        {
            System.out.println("It is not character");
        }
    }
}