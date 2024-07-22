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
        // Optionally close the scanner if no more input is needed in the method
        // sobj.close();
    }

    public void Display() {
        for (int i = 0; i < iRow; i++) {
            for (int j = 0; j < iCols; j++) {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public void RowSum() {
        int iSum = 0;
        for (int i = 0; i < iRow; i++) {
            for (int j = 0,iSum = 0; j < iCols; j++) {
                iSum += Arr[i][j];
            }
            System.out.println("Sum of Row " + (i+1) + " = " + iSum);
        }
        // return iSum;
    }

    // public int Summation() {
    //     int iSum = 0;
    //     for (int i = 0; i < iRow; i++) {
    //         for (int j = 0; j < iCols; j++) {
    //             iSum += Arr[i][j];
    //         }
    //     }
    //     return iSum;
    // }
    //
    // public int Maximum() {
    //     int iMax = Arr[0][0];
    //     for (int i = 0; i < iRow; i++) {
    //         for (int j = 0; j < iCols; j++) {
    //             if (Arr[i][j] > iMax) {
    //                 iMax = Arr[i][j];
    //             }
    //         }
    //     }
    //     return iMax;
    // }
    //
    // public int Minimum() {
    //     int iMin = Arr[0][0];
    //     for (int i = 0; i < iRow; i++) {
    //         for (int j = 0; j < iCols; j++) {
    //             if (Arr[i][j] < iMin) {
    //                 iMin = Arr[i][j];
    //             }
    //         }
    //     }
    //     return iMin;
    // }


}

class Program571_Matrices_SumofRows {
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

        // iRet = mobj.Summation();
        // System.out.println("Summation of all elements: " + iRet);
        //
        // iRet = mobj.Maximum();
        // System.out.println("Maximum element: " + iRet);
        //
        // iRet = mobj.Minimum();
        // System.out.println("Minimum element: " + iRet);
        mobj.RowSum();
        sobj.close();
    }
}
