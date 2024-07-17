import java.util.*;
import java.io.*;

class Program07 {
	public static void main (String args[]) throws Exception{

			Scanner sobj = new Scanner (System.in);
			System.out.println("File Pack Unpacker CUI Module");

			System.out.println("Enter File Name that you want to open for writing: ");
			String File_Name = sobj.nextLine ();

			File fobj = new File (File_Name);

			if (fobj.exists()){
				FileInputStream fiobj = new FileInputStream(fobj);

				byte Arr[] = new byte [1024];
				int iRet = 0;
				String str = null;

				while ((iRet = fiobj.read (Arr)) != -1){
					str = new String(Arr);
					System.out.println(str);
				}
			}
			else{
				System.out.println("Unable to find !");
			}
	}
}
