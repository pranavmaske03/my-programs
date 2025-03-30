import java.util.*;

class Bit
{
    public int No;

    Bit(int no)
    {
        this.No = no;
    }

    public boolean CheckBit()
    {
        int iMask = 0x00000004;
        int result = 0;

        result = iMask & No;
        System.out.println(iMask & No);
        if(result == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program53
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int value = sobj.nextInt();

        Bit obj = new Bit(value);
        boolean bRet = obj.CheckBit();

        if(bRet == true)
        {
            System.out.println("Bits are On");
        }
        else
        {
            System.out.println("Bits are Off");
        }
    }
}