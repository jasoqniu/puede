public interface Control {
	public void gantiChannel(int channel);
	public void setVolumeUp(int intensitas);
	public void setVolumeDown(int intensitas);
}
/* 
public class TVPolytron implements Control{
	String[] channel = {"RCTI","SCTV","INDOSIAR","ANTV","TV7"};
	public void pindahChannel(int channel) {
		System.out.println("Pindah channel pada TV Politron ke "+ this.channel[channel]);
	}
 
	public void perbesarVolume(int intensitas) {
		System.out.println("Perbesar volume pada TV Politron sebanyak "+ intensitas);
	}
 
	public void perkecilVolume(int intensitas) {
		System.out.println("Perkecil volume pada TV Politron sebanyak "+ intensitas);
	}

}

public class TVSamsung implements Control{
	String[] channel = {"RCTI","SCTV","INDOSIAR","ANTV","TV7"};

	public void pindahChannel(int channel) {  
		System.out.println("Pindah channel pada TV Samsung ke "+ this.channel[channel]);
	} 
	
	public void perbesarVolume(int intensitas) {  
		System.out.println("Perbesar volume pada TV Samsung sebanyak "+ intensitas);
	}
	
	public void perkecilVolume(int intensitas) {  
		System.out.println("Perkecil volume pada TV Samsung sebanyak "+ intensitas);
	}
}

public class RemoteControl { 
	public void kirimPerintahKeTv(int aksi,Control tv,int tombol){
		switch(aksi){
		case 1:
			tv.pindahChannel(tombol);
			break;
		case 2:
			tv.perbesarVolume(tombol);
			break;
		case 3:
			tv.perkecilVolume(tombol);
			break;
		}
	}
}
public class TestRemoteControl {
	public static void main(String[] args){
		TVPolitron tvp = new TVPolitron();
		TVSamsung tvs = new TVSamsung();
		RemoteControl rc = new RemoteControl();

		rc.kirimPerintahKeTv(1,tvp,1);  
	}
}
*/