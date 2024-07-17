import java.util.*;
import java.io.*;

class Program14 {
	public static void main (String args[]) throws Exception{

			Scanner sobj = new Scanner (System.in);
			System.out.println("File Pack Unpacker CUI Module");

			System.out.println("Directory to open: ");
			String FolderName = sobj.nextLine ();

			File fobj = new File (FolderName);

			if (fobj.exists()){
				File Arr [] = fobj.listFiles();
				System.out.println("Total no of Files in Directory are: " + Arr.length);

				int i = 0;
				for (i = 0; i < Arr.length; i++){
					System.out.println("File Name: " + Arr[i].getName() + " File Size: " + Arr[i].length());
				}
			}
			else{
				System.out.println("Theres no such Directory !");
			}
	}
}
