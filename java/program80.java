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
        int i = 0;
        int j = 0;
        
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if((i == j) || (j == 1) || (i == 1) || (i == iRow) || ( j == iCol))
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

class program80
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int value1 = sobj.nextInt();

        System.out.println("Enter number columns : ");
        int value2 = sobj.nextInt();

        Pattern obj = new Pattern(value1,value2);
        obj.DisplayPattern();
    }
}