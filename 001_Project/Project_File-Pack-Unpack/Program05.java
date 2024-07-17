import java.util.*;
import java.io.*;

class Program01 {
	public static void main (String args[]) throws Exception{

			Scanner sobj = new Scanner (System.in);
			System.out.println("File Pack Unpacker CUI Module");

			System.out.println("Enter File Name that you want to open for writing: ");
			String File_Name = sobj.nextLine ();

			File fobj = new File (File_Name);

			if (fobj.exists()){
				System.out.println("File Found and Content Updated!");
				FileOutputStream foobj = new FileOutputStream(fobj);
				String str = "Marvellous";
				foobj.write (str.getBytes());
			}
			else{
				System.out.println("Unable to find !");
			}
	}
}
