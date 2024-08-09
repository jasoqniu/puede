import java.util.Scanner;

public class TestDriveTV
{
	public static void main(String[] args)
    {
		Scanner s = new Scanner(System.in);
		TVPolytron tvp = null;
		TVSamsung tvs = null;
        TVLG tvl = null;
		RemoteControl rc = null;

		int pil = 0;
		while(pil != 8)
		{
			System.out.println("Menu television");
			System.out.println("1. Create television");
			System.out.println("2. Add channel");
			System.out.println("3. Add universal remote (maks 1 untuk semua tv)");
			System.out.println("4. View television");
			System.out.println("5. Change Channel");
			System.out.println("6. Increase Volume");
			System.out.println("7. Decrease Volume");
			System.out.println("8. Exit");
			System.out.print("Choose : ");
			pil = s.nextInt();

			if ( pil == 1)
			{
				System.out.println("Choose Television: ");
				System.out.println("1. Polytron");
				System.out.println("2. LG");
				System.out.println("3. Samsung");
				System.out.print("Choose : ");
				int tv = s.nextInt();
				String temp = "";
				if ( tv == 1)
				{
					tvp = new TVPolytron();
					temp = "Polytron";
				}
				else if (tv == 2)
				{
					tvl = new TVLG();
					temp = "LG";
				}
				else if (tv == 3)
				{
					tvs = new TVSamsung();
					temp = "Samsung";
				}
				System.out.println("TV " + temp + " berhasil di buat");
			}
			else if ( pil == 2)
			{
				System.out.println("Choose Television: ");
				System.out.println("1. Polytron");
				System.out.println("2. LG");
				System.out.println("3. Samsung");
				System.out.print("Choose : ");
				int tv = s.nextInt();

				if(tv==1)
				{
					String name = s.nextLine();
					int frequency = s.nextInt();
					int volume = s.nextInt();
					Channel ch = new Channel(name,frequency,volume);
					tvp.addChannel(ch);
				}
				else if(tv==2)
				{
					String name = s.nextLine();
					int frequency = s.nextInt();
					int volume = s.nextInt();
					Channel ch = new Channel(name,frequency,volume);
					tvl.addChannel(ch);
				}
				else if(tv==3)
				{
					String name = s.nextLine();
					int frequency = s.nextInt();
					int volume = s.nextInt();
					Channel ch = new Channel(name,frequency,volume);
					tvs.addChannel(ch);
				}
			}
			else if ( pil == 3)
			{
				rc = new RemoteControl();
				System.out.println("Remote berhasil dibuat!");
			}
			else if ( pil == 4)
			{
				System.out.println("Choose Television: ");
				System.out.println("1. Polytron");
				System.out.println("2. LG");
				System.out.println("3. Samsung");
				System.out.print("Choose : ");
				int tv = s.nextInt();


				System.out.println("Choose Channel");
				int chan = s.nextInt();

				if(tv==1)
				{
					rc.kirimPerintahKeTv(1,tvp,chan);
				}
				else if(tv==2)
				{
					rc.kirimPerintahKeTv(1,tvl,chan);
				}
				else if(tv==3)
				{
					rc.kirimPerintahKeTv(1,tvs,chan);
				}
			}
			else if ( pil == 5)
			{
				System.out.println("Choose Television: ");
				System.out.println("1. Polytron");
				System.out.println("2. LG");
				System.out.println("3. Samsung");
				System.out.print("Choose : ");
				int tv = s.nextInt();


				System.out.println("Choose Channel");
				int chan = s.nextInt();

				if(tv==1)
				{
					rc.kirimPerintahKeTv(1,tvp,chan);
				}
				else if(tv==2)
				{
					rc.kirimPerintahKeTv(1,tvl,chan);
				}
				else if(tv==3)
				{
					rc.kirimPerintahKeTv(1,tvs,chan);
				}
			}
			else if (pil == 6)
			{
				System.out.println("Choose Television: ");
				System.out.println("1. Polytron");
				System.out.println("2. LG");
				System.out.println("3. Samsung");
				System.out.print("Choose : ");
				int tv = s.nextInt();

				if(tv==1)
				{
					int intensitas=s.nextInt();
					tvp.setVolumeUp(intensitas);
				}
				else if(tv==2)
				{
					int intensitas=s.nextInt();
					tvl.setVolumeUp(intensitas);
				}
				else if(tv==3)
				{
					int intensitas=s.nextInt();
					tvs.setVolumeUp(intensitas);
				}
			}
			else if ( pil == 7)
			{
				System.out.println("Choose Television: ");
				System.out.println("1. Polytron");
				System.out.println("2. LG");
				System.out.println("3. Samsung");
				System.out.print("Choose : ");
				int tv = s.nextInt();

				if(tv==1)
				{
					int intensitas=s.nextInt();
					tvp.setVolumeDown(intensitas);
				}
				else if(tv==2)
				{
					int intensitas=s.nextInt();
					tvl.setVolumeDown(intensitas);
				}
				else if(tv==3)
				{
					int intensitas=s.nextInt();
					tvs.setVolumeDown(intensitas);
				}
			}
		}
	}
}