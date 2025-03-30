import java.io.*;

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

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(i == j)
                {
                    System.out.print("#\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }
            System.out.println();
        }
    }
}

class program70
{
    public static void main(String arg[])
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
        int value1 = 0;
        int value2 = 0;
        try 
        {
            System.out.println("Enter number of rows : ");
            value1 = Integer.parseInt(bobj.readLine());

            System.out.println("Enter number of columns : ");
            value2 = Integer.parseInt(bobj.readLine());
        }
        catch(IOException eobj)
        {
            System.out.println("Exception occured : "+eobj);
        }
        finally
        {
            Pattern obj = new Pattern(value1,value2);
            obj.DisplayPattern();
        }
    }
}