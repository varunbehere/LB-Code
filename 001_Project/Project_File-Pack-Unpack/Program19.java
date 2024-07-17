//Unpacking Activity

import java.util.*;
import java.io.*;

class Program19 {
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
	}
}
