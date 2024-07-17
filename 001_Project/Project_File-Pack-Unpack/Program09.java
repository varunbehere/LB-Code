import java.util.*;
import java.io.*;

class Program09 {
	public static void main (String args[]) throws Exception{

			Scanner sobj = new Scanner (System.in);
			System.out.println("File Pack Unpacker CUI Module");

			System.out.println("Enter File Name that you want to open for writing: ");
			String File_Name = sobj.nextLine ();

			File fobj = new File (File_Name);

			if (fobj.exists()){
				System.out.println("File Size = " + fobj.length() + " bytes");
			}
			else{
				System.out.println("Unable to find !");
			}
	}
}
