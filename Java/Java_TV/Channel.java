public class Channel
{
    private String name;
    private int frequency;
    private int volume;
    
    public Channel()
    {
        name="";
        frequency=0;
        volume=0;
    }

    public Channel(String name,int frequency, int volume)
    {
        this.name = name;
        this.frequency = frequency;
        this.volume = volume;
    }
    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setFrequency(int frequency) {
        this.frequency = frequency;
    }

    public int getFrequency() {
        return frequency;
    }

    public void setVolume(int volume) {
        this.volume = volume;
    }

    public int getVolume() {
        return volume;
    }
}