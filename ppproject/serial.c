#include <stdio.h>
#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main(void)
{  
    DIR *d;
    struct dirent *dir;
    d = opendir(".");
   printf("Files in this directory\n");
	char files[1000][1000];
	int count=0;
	if (d)
    { 
        while ((dir = readdir(d)) != NULL)
        {   
        	strcpy(files[count++],dir->d_name);
        
    	}
    	
    	closedir(d);
    }
    //printf("count =%d\n",count-2);
            //printf("%s\n", dir->d_name);
		
	
	
	
	 clock_t tic = clock();
		for(int i=2;i<count;i++)
	{
		puts(files[i]);
		printf("\n");
	}	
	
		for(int i=2;i<count;i++)


																																																																			for(int i=2;i<count;i++)
		{
			FILE * fp1;
			fp1 = fopen(files[i], "r");
			for(int j=i+1;j<count;j++)
			{
				
			 FILE * fp2;
			 char c1[100], c2[100];
			 int cmp;
			 
			 
			 fp2 = fopen(files[j], "r");
			 
			 if((fp1 == NULL) || (fp2 == NULL))
			 {
			  //printf("Error in the file \n");
			 }
			 else
			 {
			  while(fgets(c1 , 100, fp1) != NULL);    
			   //puts(c1);        
			    
			  while(fgets(c2 , 100, fp2) != NULL);
			   //puts(c2);
			   
			  if((cmp = strcmp(c1, c2)) == 0)
			  {
			   printf("Files \t%s \t& \t%s \tDUPLICATE \n",files[i],files[j]);
			  }
			  else
			  {
			   printf("Files \t%s \t& \t%s \t\n",files[i],files[j]);
			  }  
			 }			
				
			}
		}
	
        clock_t toc = clock();
        printf("count =%d\n",count-2);

    printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
    return(0);
}








