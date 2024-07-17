import java.util.*;
import java.io.*;

class Program18 {
	public static void main (String args[]) throws Exception{

			Scanner sobj = new Scanner (System.in);
			System.out.println("File Pack Unpacker CUI Module");

			System.out.println("Directory to open: ");
			String FolderName = sobj.nextLine ();

			File fobj = new File (FolderName);

			System.out.println("Name of Packed File to create : ");
			String PackedFile = sobj.nextLine();

			File Packobj = new File (PackedFile);

			boolean bRet = Packobj.createNewFile();

			if (bRet == false){
				System.out.println("Unable to create Packed File");
				return;
			}

			if (fobj.exists()){
				int i = 0, j = 0;
				File Arr [] = fobj.listFiles();
				System.out.println("Total no of Files in Directory are: " + Arr.length);

				String Header = null;

				for (i = 0; i < Arr.length; i++){

					Header =  Arr[i].getName();

					if (Header.endsWith(".txt")){

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
