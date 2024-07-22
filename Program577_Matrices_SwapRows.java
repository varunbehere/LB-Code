import java.util.Scanner;

class Matrix {
    public int iRow = 0, iCols = 0;
    public int[][] Arr;

    public Matrix(int A, int B) {
        this.iRow = A;
        this.iCols = B;
        Arr = new int[iRow][iCols];
    }

    public void Accept() {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the data: ");
        for (int i = 0; i < iRow; i++) {
            for (int j = 0; j < iCols; j++) {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display() {
        for (int i = 0; i < iRow; i++) {
            for (int j = 0; j < iCols; j++) {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public void SwapRows(){
      int tempArr[] = new int [iCols];
      for (int i = 0; i < iRow-1 ; i+=2) {
        tempArr = Arr[i];
        Arr[i] = Arr [i+1];
        Arr[i+1] = tempArr;
      }
    }
}

class Program577_Matrices_SwapRows {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;

        System.out.println("No of Rows: ");
        int iNo1 = sobj.nextInt();

        System.out.println("No of Columns: ");
        int iNo2 = sobj.nextInt();

        Matrix mobj = new Matrix(iNo1, iNo2);
        mobj.Accept();
        System.out.println("\nBefore Updating Matrix------------\n");
        mobj.Display();
        System.out.println("\nAfter Updating Matrix-------------\n");
        mobj.SwapRows();
        mobj.Display();
        sobj.close();
    }
}
