#include "sound.h"
#include "screen.h"
#include <stdio.h>
#include <math.h>


//   function definition of printID()
void printID(char id[]){
   int i;
   for(i=0; i<4; i++)
       printf("%c", id[i]);
   printf("\n");
}

// function definition of dispWAVData()
void dispWAVData(char filename[]){
	int i, j;		// loop counters
	FILE *fp;		//file handler to open the file "test.wav"
	double rms[80], sum;	// 80 pices of RMS value
	short samples[SAMPLERATE];	// totally 1600 samples in 1 sec
	WAVHeader mh;		// just used to skip over the header  of wav file
    fp = fopen(filename, "r");
    if(fp == NULL){
    	printf("Error when open the file!\n");
    	return;
    }
    fread(&mh, sizeof(mh), 1, fp);  // skip over the header of wave file
    fread(samples, sizeof(short), SAMPLERATE, fp);
    fclose(fp);
	clearScreen();
    for(i=0; i<80; i++){
    	for(j=0, sum=0.0; j<SAMPLERATE/80; ++j){
    		sum += samples[j+i*200] * samples[j+i*200];
    	}
		rms[i] = sqrt(sum/200);
#ifdef DEBUG
		printf("RMS[%d]: %10.4f, dB = %10.4f\n", i, rms[i], 20*log10(rms[i]));
#else
		dispBar(i, 20*log10(rms[i]));		// display dB value a bar
#endif
	}
}
// function definition of dispWAVHeader()
void dispWAVHeader(char filename[]){
 	FILE *fp;
	WAVHeader mh;  // an instance of WAVHeader struct

  // open the test.wav file for reading
	fp = fopen(filename, "r");
	if (fp ==NULL){   // if fopen fails
		printf("Error when open the file!\n");
		return;  // function stop
	}
	fread(&mh, sizeof(mh), 1, fp);
	fclose(fp);   // close the open file
	printf("Chunk ID: ");
	printID(mh.chunkID);
	printf("Chunk size: %d\n", mh.chunkSize);
	printf("Format: ");
	printID(mh.format);
	printf("  	subchunk 1 ID: ");
	printID(mh.subchunk1ID);
	printf("  	subchunk 1 size: %d\n",mh.subchunk1Size);
	printf("Audio Format: %d\n", mh.audioFormat);
	printf("Number Channels: %d\n ", mh.numChannels);
	printf("	sample Rate: %d\n", mh.sampleRate);
	printf("	byte Rate: %d\n", mh.byteRate);
	printf("Block Align: %d\n", mh.blockAlign);
	printf("Bits per Sample: %d\n", mh.bitsPerSample);
	printf("	subchunk 2 ID: ");
	printID(mh.subchunk2ID);
	printf("	subchunk 2 size: %d\n", mh.subchunk2Size);
	// to be continue

}
