#include <iostream>
#include <cstring>

 using namespace std;
 class encryption{
 	
 	   public:
                string alphabet="#$&%*>!=abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
             
    int getalphabetindis(char text){
        int j=0;
   	    	for(j=0;j<alphabet.length();j++){
 		    	if(text==alphabet[j]){
 			    	break;
 			     }
			   	
		}
 	
 	return j;
             }
   
   void encoding(string text){
   	char stext[100];
	int cind=0,itemp=0,j=0;
 	bool temp=true,first=false;
 	
 	for(int i=0;i<=text.length();i++){
 		if(temp){
	
 	    	    	cind=getalphabetindis(text[i]);
 			    	temp=false;
 			    	first=true;
			     }
		 else{
		 	int t;
		 	if(first){
		 		t=getalphabetindis(text[itemp])-2;	
			    first=false;
			}
            else{
			   t=getalphabetindis(text[itemp])-cind+1;
		 	}
		    if(text[itemp]==32){
		      stext[itemp]=32;
		      temp=true;
		      i--;
			}
			 else
			     stext[itemp]=alphabet[(t+70)%alphabet.length()];
		 
		 itemp++;
	
		 }
	 }
	 cout<<stext;
   }
 
 string coding(string text){
 	char stext[100];
	int cind=0,itemp=0,j=0;
 	bool temp=true,first=true;
 	
 	for(int i=0;i<=text.length();i++){
 		if(temp){
	
 	    	    	cind=getalphabetindis(text[i]);
 			    	temp=false;
 			    	first=true;
			     }
		 else{
		 	int t;
		 	if(first){
		 		t=getalphabetindis(text[itemp])+2;	
			    first=false;
			}
            else{
			   t=getalphabetindis(text[itemp])+cind+1;
		 	}
		 	
		    if(text[itemp]==32){
		      stext[itemp]=32;
		      temp=true;
		      i--;
			}
			 else
			     stext[itemp]=alphabet[(t)%alphabet.length()];
	
		 itemp++;
	
		 }
	 }
	 cout<<stext<<"\n";
	 return stext;
 }

};

int main(int argc, char** argv) {
	char  text[100];
	encryption encObj;
	gets(text);
	encObj.encoding(encObj.coding(text));
//	puts(text);
	return 0;
}
