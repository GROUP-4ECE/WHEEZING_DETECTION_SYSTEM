#include <stdio.h>

int main() {
    // Define the file names of the normal and wheezing sound files
    char* normalSoundFile = "normal_sound.wav";
    char* wheezingSoundFile = "wheezing_sound.wav";

    // Define the segment size for segmentation of the data
    int segmentSize = 1024;

    // Print the file names and segment size
    printf("Normal sound file: %s\n", normalSoundFile);
    printf("Wheezing sound file: %s\n", wheezingSoundFile);
    printf("Segment size: %d\n", segmentSize);

    return 0;
}
