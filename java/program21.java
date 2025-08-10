import java.util.*;

class Pattern
{
    public int iRow;
    public int iCol;

    public Pattern(int X,int Y)
    {
        iRow = X;
        iCol = Y;
    }

    public void DisplayPattern()
    {
        int i = 0,j = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print(i+"\t");
            }
            System.out.println();
        }
    }
}

class program21
{
    public static void main(String arg[])
    {
        int iValue = 0,iValue1 = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows ");
        iValue = sobj.nextInt();

        System.out.println("Enter number of columns ");
        iValue1 = sobj.nextInt();

        Pattern obj = new Pattern(iValue,iValue1);
        obj.DisplayPattern();
    }
}