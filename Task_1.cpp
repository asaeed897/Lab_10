#include<iostream>

class audioClip{
private:
  int channels;
  double resolution,sample_Rate;
public:
  audioClip(): channels(1),resolution(8),sample_Rate(22050){}
    void set_channels(int new_channels)
    { if(new_channels==1 || new_channels==2)
      channels=new_channels;
    else
  cout<<"wrong input!!!!\n";}
    void set_resolution(double new_resolution)
    { if(new_resolution==8 || new_resolution==16 || new_resolution==24)
      resolution=new_resolution;
    else
  cout<<"Wrong input!!!\n";}
    void set_sample_Rate(int new_Sample_Rate)
    {if(new_Sample_Rate==22050 || new_Sample_Rate==44100 || new_Sample_Rate==88200)
      sample_Rate=new_Sample_Rate;
    else
  cout<<"Wrong input!!!\n";}
  int get_channels()
  {return channels;}
  double get_resolution()
  {return resolution;}
  double get_sample_Rate()
  {return sample_Rate;}

};

int main(int argc, char const *argv[]) {
  audioClip clip1;
  std::cout << "channel: " <<get_channels()<< '\n';
  std::cout << "resolution: " <<get_resolution()<< '\n';
  std::cout << "sample_Rate: " <<get_sample_Rate()<< '\n';
  return 0;
}
