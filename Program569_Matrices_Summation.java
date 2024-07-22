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
  public int Summation(){
    int iSum  = 0, i= 0, j= 0;

    for (i = 0; i < iRow; i++){
      for (j = 0; j < iCols; j++){
        iSum += Arr[i][j];
      }
      System.out.println();
    }
    return iSum;
  }

}

class Program569_Matrices_Summation{
  public static void main (String arg[]){
    Scanner sobj = new Scanner (System.in);

    System.out.println("No of Rows: ");
    int iNo1 = sobj.nextInt ();

    System.out.println("No of Columns: ");
    int iNo2 = sobj.nextInt ();

    Matrix mobj = new Matrix(iNo1, iNo2);
    mobj.Accept();
    mobj.Display();
    int iRet = mobj.Summation();
    System.out.println("Summation of all: " + iRet);
  }

}
