//
//  classInstant.cpp
//  C++taturial
//
//  Created by Kasra Rezaei on 18/07/2025.
//

#include <iostream>

class AudioPlayer{
public:
    void play(){
        //play audio
        isPlaying = true;
        
    }
    void stop(){
        // stop playing
        isPlaying = false;
    }
    void setAmplitude (float newAmp){
        amp = newAmp;
    }

private:
    float amp = -5.2;
    bool isPlaying = false;
    
    void changeColor(){
        if(isPlaying){
            //audio player turns green
        } else {
            //audio player turns red
        }
    }
};

//int main(){
//    AudioPlayer player;
//    player.stop();
//    player.stop();
//}
