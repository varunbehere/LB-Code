import java.util.*;
import java.io.*;

class Program08 {
	public static void main (String args[]) throws Exception{

			Scanner sobj = new Scanner (System.in);
			System.out.println("File Pack Unpacker CUI Module");

			System.out.println("Source File Name: ");
			String Source = sobj.nextLine ();

			System.out.println("Destination File Name: ");
			String Destination = sobj.nextLine ();

			File sourceobj = new File (Source);

			if (sourceobj.exists()){

				File destobj = new File (Destination);
				boolean bRet = destobj.createNewFile();

				if (bRet == false){
					System.out.println("File cant be created!");
					return;
				}

				FileInputStream fiobj = new FileInputStream(sourceobj);
				FileOutputStream foobj = new FileOutputStream(destobj);

				byte Buffer[] = new byte [1024];
				int iRet = 0;

				while ((iRet = fiobj.read (Buffer)) != -1){
					foobj.write(Buffer,0,iRet);
				}

				System.out.println("File Size of " + Source +  " = " + sourceobj.length() + " bytes");
				System.out.println("File Size of " + Destination +  " = " + destobj.length() + " bytes");

			}
			else{
				System.out.println("Unable to find !");
			}
	}
}
