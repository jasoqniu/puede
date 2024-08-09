
public class RemoteControl { 
	public void kirimPerintahKeTv(int aksi,Control tv,int tombol){
		switch(aksi){
		case 1:
			tv.gantiChannel(tombol);
			break;
		case 2:
			tv.setVolumeUp(tombol);
			break;
		case 3:
			tv.setVolumeDown(tombol);
			break;
		}
	}
}
