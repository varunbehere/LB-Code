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
				System.out.println("Directory is Present !");
			}
			else{
				System.out.println("Theres no such Directory !");
			}
	}
}
