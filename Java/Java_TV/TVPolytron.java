public class TVPolytron implements Control
{
    Channel [] channel = new Channel[11];
    private int channelaktif = -1;
    private int counter = 1;
    public int tvpIndex = 1;

    

    public void addChannel(Channel channel)
    {
        this.channel[counter] = channel;
        counter ++;
    }

    public Channel getChannel(int index)
    {
        return channel[index];
    }
    

    
    public void gantiChannel(int channel)
    {   
        channelaktif = channel;
        System.out.println("Pindah channel pada TV Polytron ke "+ this.channel[channel].getName());
    }

    public void setVolumeUp(int intensitas)
    {
        int temp = channel[channelaktif].getVolume() + intensitas;
        channel[channelaktif].setVolume(temp);
        System.out.println("Perbesar Volume pada TV Polytron sebanyak "+ temp);     
    }    

    public void setVolumeDown(int intensitas)
    {
        int temp = channel[channelaktif].getVolume() - intensitas;
        channel[channelaktif].setVolume(temp);
        System.out.println("Perkecil volume pada TV Polytron sebanyak "+ temp);
    }

    public void view()
    {
        System.out.println("TV Polytron");
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