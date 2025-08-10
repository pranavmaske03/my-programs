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

    public void Display()
    {
        int i = 0, j = 0;

        if(iRow != iCol)
        {
            cout<<"Invalid Input"<<"\n";
            return;
        }

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(i == j)
                {
                    System.out.print("(^_^)\t");
                }
                else if(i <= j)
                {
                    System.out.print("(*_*)\t");
                }
                else
                {
                    System.out.print("(~_~)\t");
                }
            }
            System.out.println();
        }
    }
}

class program10
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of row");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter number of column");
        int iValue2 = sobj.nextInt();

        Pattern obj = new Pattern(iValue1,iValue2);
        obj.Display();
    }
}