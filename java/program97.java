import java.util.*;

class Pattern
{
    public int iRow;
    public int iCol;

    public Pattern(int no1,int no2)
    {
        this.iRow = no1;
        this.iCol = no2;
    }

    public void DisplayPattern()
    {
        int i = 0,j = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = iCol; j >= 1; j--)
            {
                if(i >= j)
                {
                    System.out.print("*\t");
                }
                else
                {
                    System.out.print(" \t");
                }
            }
            System.out.println();
        }
    }
}

class program97
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int value1 = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int value2 = sobj.nextInt();

        Pattern obj = new Pattern(value1,value2);
        obj.DisplayPattern();
    }
}