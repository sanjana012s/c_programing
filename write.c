// FUNCTION :use fputc and fputs and fwrite or fprintf  for write data
#include<stdio.h>
int  main()
  {
    FILE *fp;// declearing a file pointer
    // from reading the data in text file
    char tex[100];
    //operation file with file name and mode
    fp = fopen("C:\\Users\\rajak\\OneDrive\\Documents\\New folder\\sanjana.txt", "a");

    if(fp==NULL)
    {
      printf("\nfile coud not be open");
      return 1;
    }
   //write formate text to the file
   fprintf(fp,"sanjana is the good girls:\n");
   fprintf(fp, "this is squer of %d is %d",5,5*5);

    fgets(tex,100,fp);
    printf("\n %s",tex);
    //file close

     int res=fclose(fp);
     if (res==0){
      fp=NULL;
     }
    else{
      printf("\nfile was not close proper");
      return 1;
    }
  return 0;
  }
