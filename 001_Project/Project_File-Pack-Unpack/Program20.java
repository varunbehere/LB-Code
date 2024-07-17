//Unpacking Activity

import java.util.*;
import java.io.*;

class Program20 {
	public static void main (String args[]) throws Exception{

			Scanner sobj = new Scanner (System.in);
			System.out.println("--------------------| File Pack Unpacker CUI Module |------------------------");

			System.out.println("Name of Packed File to open: ");
			String PackedFile = sobj.nextLine ();

			File fobj = new File (PackedFile);

			if (!(fobj.exists())){
				System.out.println("Unable to proceed as Packed File is Missing ");
				return;
			}

			FileInputStream fiobj = new FileInputStream(fobj);

			byte Header[] = new byte[100];

			fiobj.read(Header);

			System.out.println("Header of First File : ");
			String HeaderX = new String (Header);
			System.out.println(HeaderX);

			HeaderX = HeaderX.trim();
			String Tokens[] = HeaderX.split(" ");

			System.out.println("File name is: " + Tokens[0]);
			System.out.println("File Length is :" + Tokens[1]);

			File obj = new File (Tokens[0]);
			obj.createNewFile();

			int FileSize = Integer.parseInt (Tokens[1]);
			byte Buffer[] = new byte [FileSize];

			fiobj.read (Buffer,0,FileSize);

			String Data = new String (Buffer);
			System.out.println("Data from file is : "+Data);

			FileOutputStream foobj = new FileOutputStream(obj);
			foobj.write(Buffer,0,FileSize);
			
	}
}
