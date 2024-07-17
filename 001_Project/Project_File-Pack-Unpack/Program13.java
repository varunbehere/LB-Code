import java.util.*;
import java.io.*;

class Program09 {
	public static void main (String args[]) throws Exception{

			Scanner sobj = new Scanner (System.in);
			System.out.println("File Pack Unpacker CUI Module");

			System.out.println("Directory to open: ");
			String FolderName = sobj.nextLine ();

			File fobj = new File (FolderName);

			if (fobj.exists()){
				File Arr [] = fobj.listFiles();
				System.out.println("Total no of Files in Directory are: " + Arr.length);
			}
			else{
				System.out.println("Theres no such Directory !");
			}
	}
}
