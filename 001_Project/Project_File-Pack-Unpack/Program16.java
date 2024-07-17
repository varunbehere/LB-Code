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

				String Header =  Arr[0].getName();
				Header = Header + " " + Arr[0].length();

				System.out.println("Header of First File : ");
				System.out.println(Header);
				System.out.println("Length of Header: " + Header.length());

				int i = 0;
				for (i = Header.length(); i< 100;i++){
					Header = Header + " ";
				}
				System.out.println("Header After Updation:");
				System.out.println("Length of Header : " + Header.length());

			}
			else{
				System.out.println("Theres no such Directory !");
			}
	}
}
