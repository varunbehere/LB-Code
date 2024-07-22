import java.util.*;

class Matrix {

}

class Program567_Matrices1{
  public static void main (String arg[]){
    Scanner sobj = new Scanner (System.in);

    System.out.println("No of Rows: ");
    int iNo1 = sobj.nextInt ();

    System.out.println("No of Columns: ");
    int iNo2 = sobj.nextInt ();

    int Arr [][] = new int [iNo1][iNo2];

    System.out.println("Enter a data: ");

    int i = 0, j= 0;

    for (i = 0; i < iNo1; i++){
      for (j = 0; j < iNo2; j++){
        Arr[i][j] = sobj.nextInt();
      }
    }

    //printing
    for (i = 0; i < iNo1; i++){
      for (j = 0; j < iNo2; j++){
        System.out.print (Arr[i][j] + "\t");
      }
      System.out.println();
    }
  }

}
