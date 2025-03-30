import java.util.*;

class Pattern
{
    public int iRow;
    public int iCol;

    Pattern(int no1,int no2)
    {
        this.iRow = no1;
        this.iCol = no2;
    }

    public void DisplayPattern()
    {
        int i = 0;
        int j = 0;
        char ch = ' ';

        for(i = 1; i <= iRow; i++)
        {   
            for(j = 1,ch = 'a'; j <= iCol; j++,ch++)
            {
                System.out.print(ch+"\t");
            }
            System.out.println();
        }
    }
}

class program63
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns");
        int iValue2 = sobj.nextInt();

        Pattern obj = new Pattern(iValue1,iValue2);
        obj.DisplayPattern();
    }
}