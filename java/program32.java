import java.util.*;

class Pattern
{
    public int iRow;
    public int iCol;

    public Pattern(int no1,int no2)
    {
        iRow = no1;
        iCol = no2;
    }

    public void DisplayPattern()
    {
        int i = 0,j = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 0; j <= iCol; j++)
            {
                if(i == j)
                {
                    System.out.print("*\t");
                }
                else
                {
                    System.out.print("!!\t");
                }
            }
            System.out.println();
        }
    }
}

class program32
{
    public static void main(String arg[])
    {
        int iValue1 = 0,iValue2 = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number rows ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns");
        iValue2 = sobj.nextInt();

        Pattern obj = new Pattern(iValue1,iValue2);
        obj.DisplayPattern();
    }
}