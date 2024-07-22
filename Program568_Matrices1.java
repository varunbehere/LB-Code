import java.util.*;

class Matrix {
  public int iRow = 0, iCols = 0;
  public int Arr [][];

  public Matrix (int A, int B){
    this.iRow = A;
    this.iCols = B;
    Arr = new int [iRow][iCols];
  }

  public void Accept(){
    Scanner sobj = new Scanner (System.in);
    System.out.println("Enter a data: ");
    int i = 0, j= 0;
    for (i = 0; i < iRow; i++){
      for (j = 0; j < iCols; j++){
        Arr[i][j] = sobj.nextInt();
      }
    }

  }

  public void Display(){
    int i = 0, j= 0;
    for (i = 0; i < iRow; i++){
      for (j = 0; j < iCols; j++){
        System.out.print (Arr[i][j] + "\t");
      }
      System.out.println();
    }
  }

}

class Program568_Matrices1{
  public static void main (String arg[]){
    Scanner sobj = new Scanner (System.in);

    System.out.println("No of Rows: ");
    int iNo1 = sobj.nextInt ();

    System.out.println("No of Columns: ");
    int iNo2 = sobj.nextInt ();

    Matrix mobj = new Matrix(iNo1, iNo2);
    mobj.Accept();
    mobj.Display();

  }

}
