
public class TVSamsung implements Control{
	Channel [] channel = new Channel[11];
    private int channelaktif = -1;
    private int counter = 1;
    public int tvsIndex = 1;

    

    public void addChannel(Channel channel)
    {
        this.channel[counter] = channel;
        counter ++;
    }

    public Channel getChannel(int index)
    {
        return channel[index];
    }

	public void gantiChannel(int channel) {  
		System.out.println("Pindah channel pada TV Samsung ke "+ this.channel[channel]);
	} 
	
	public void setVolumeUp(int intensitas) {  
		System.out.println("Perbesar volume pada TV Samsung sebanyak "+ intensitas);
	}
	
	public void setVolumeDown(int intensitas) {  
		System.out.println("Perkecil volume pada TV Samsung sebanyak "+ intensitas);
	}

    public void view()
    {
        System.out.println("TV Samsung");
        System.out.println("Daftar Channel :");
        for(int a=1; a<=10; a++)
        {
            if(channel[a] !=null)
            {
                System.out.println(a + ". " + channel[a].getName());
            }
        }
    }

}
