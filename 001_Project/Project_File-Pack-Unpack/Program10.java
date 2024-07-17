import java.util.*;
import java.io.*;

class Program08 {
	public static void main (String args[]) throws Exception{

			Scanner sobj = new Scanner (System.in);
			System.out.println("File Pack Unpacker CUI Module");

			System.out.println("new File Name: ");
			String New_File_Name = sobj.nextLine ();

			System.out.println("Existing File Name: ");
			String File_Name = sobj.nextLine ();

			File fobj = new File (File_Name);
			File nfobj = new File (New_File_Name);

			if (fobj.exists()){
				FileInputStream fiobj = new FileInputStream(fobj);
				FileOutputStream nfoobj = new FileOutputStream(nfobj);

				byte Arr[] = new byte [1024];
				int iRet = 0, iSum = 0;
				String str = null;

				//writing into the File

				while ((iRet = fiobj.read (Arr)) != -1){
					iSum = iSum + iRet;
					str = new String(Arr);
					nfoobj.write (str.getBytes());
					// System.out.println(str);
				}

				System.out.println("Reading '" + New_File_Name +"'s Content : ");

				byte Arr1[] = new byte [1024];
				String str1 = null;
				int iRet1 = 0;

				while ((iRet1 = fiobj.read (Arr)) != -1){
					str1 = new String(Arr1);
					System.out.println(str1);
				}

				System.out.println("File Size of " + File_Name +  " = " + fobj.length() + " bytes");
				System.out.println("File Size of " + New_File_Name +  " = " + nfobj.length() + " bytes");

			}
			else{
				System.out.println("Unable to find !");
			}
	}
}
