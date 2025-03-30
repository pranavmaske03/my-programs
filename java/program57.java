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

        if(iRow != iCol)
        {
            System.out.println("Invalid...");
            return;
        }

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print(j+"\t");
            }
            System.out.println();
        }
    }
}

class program57
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of Rows : ");
        int value1 = sobj.nextInt();

        System.out.println("Enter number of Columns : ");
        int value2 = sobj.nextInt();

        Pattern obj = new Pattern(value1,value2);
        obj.DisplayPattern();
    }
}