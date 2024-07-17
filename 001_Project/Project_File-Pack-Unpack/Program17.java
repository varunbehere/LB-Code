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
				int i = 0, j = 0;
				File Arr [] = fobj.listFiles();
				System.out.println("Total no of Files in Directory are: " + Arr.length);

				String Header = null;

				for (i = 0; i < Arr.length; i++){
					Header =  Arr[i].getName();

					if (Header.endswith(".txt")){
						Header = Header + " " + Arr[i].length();
						for (j = Header.length(); j< 100;j++){
							Header = Header + " ";
						}
						System.out.println("Header of File:");
						System.out.println("Length of Header : " + Header.length());
					}

				}
			}
			else{
				System.out.println("Theres no such Directory !");
			}
	}
}
