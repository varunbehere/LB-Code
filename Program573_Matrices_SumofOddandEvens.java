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

    public void DisplaySumOfEvenAndOddElements() {
        int iSumEven = 0, iSumOdd = 0;
        for (int i = 0; i < iRow; i++) {
            for (int j = 0; j < iCols; j++) {
                if (Arr[i][j] % 2 == 0) {
                    iSumEven += Arr[i][j];
                } else {
                    iSumOdd += Arr[i][j];
                }
            }
        }
        System.out.println("Sum of Even elements: " + iSumEven);
        System.out.println("Sum of Odd elements: " + iSumOdd);
    }
}

class Program573_Matrices_SumofOddandEvens {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;

        System.out.println("No of Rows: ");
        int iNo1 = sobj.nextInt();

        System.out.println("No of Columns: ");
        int iNo2 = sobj.nextInt();

        Matrix mobj = new Matrix(iNo1, iNo2);
        mobj.Accept();
        mobj.Display();

        mobj.DisplaySumOfEvenAndOddElements();
        sobj.close();
    }
}
