#include "video_proc.hpp"


int main(){

    int nFrames = 20;
    for ( int iFrame = 0; iFrame < nFrames ; iFrame++){
		// produce file name of "X.ppm" type where X goes from 0 to number of images
		std::string fileName;
		std::ostringstream stringStream;
        stringStream <<iFrame<<".ppm";
        fileName = stringStream.str();
		std::cout<<" File::"<<fileName<<std::endl;
		// open image file
		OpenPPMFile(fileName);
		
	//struct ImagePPM{ 
		//int width, height;  // size of the image in pixels 
		//int n_bytes;  // size of the image in bytes 
		//char* data;  // array of pixels R,G,B,ALPHA values. 
                     //  Pixels stored by horizontal lines 
//}; 
		
	
        int totred = 0;
        int totint = 0;
        float redness = 0;
        Pixel curPix;
        for ( int row =0 ; row < image.height ; row++)
	    {	
		  for ( int column = 0; column < image.width ; column++)
		  {
			  curPix = get_pixel(row,column);
			  totred = totred + (int)curPix.red;
			  totint = totint + ((int)curPix.red+(int)curPix.green+(int)curPix.blue)/3;
			  redness = (float)totred/(3.0*(float)totint);
			  
			  //totred = totred + (int)get_pixel(row,column,0);
			  //totint = totint + (int)get_pixel(row,column,3);
			  //redness = (float)totred/(3.0*(float)totint);
		   }	  
	    }  
	   cout<<"Total red ="<<totred;
	   cout<<"Total int ="<< totint;
	   cout<<" Redness ="<<redness<<endl;
	
	if(totred > redness){
				printf("Ruby has been stolen\n\n");
				}
			else{ 
				printf("Ruby is there\n");
				}
	
	return 0; 
}
}
