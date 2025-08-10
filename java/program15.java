import java.util.*;

class Pattern
{
    public int iRow;
    public int iCol;

    public Pattern(int X, int Y)
    {
        iRow = X;
        iCol = Y;
    }

    public void DisplayPattern()
    {
        int i = 0, j = 0;
        char ch = '\0';

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1, ch = 'A'; j <= iCol; j++, ch++)
            {
                System.out.print(ch+"\t");
            }
            System.out.println();
        }
    }
}

class program15
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns");
        int iValue2 = sobj.nextInt();

        Pattern obj = new Pattern(iValue1, iValue2);
        obj.DisplayPattern();
    }
}