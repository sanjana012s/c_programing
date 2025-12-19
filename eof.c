#include<stdio.h>
int  main()
  {
    FILE *fp;// declearing a file pointer
    // from reading the data in text file
    char tex[100];
    //operation file with file name and mode
    fp = fopen("C:\\Users\\rajak\\OneDrive\\Documents\\New folder\\sanjana.txt", "r");

    if(fp==NULL)
    {
      printf("\nfile coud not be open");
      return 1;
    }
    // read the data
   // fgets(tex,100,fp);
   // printf("\n %s",tex);
    //file close

        int ch;
        do{
          ch=fgetc(fp);
          printf("%c",ch);
        }
    while(ch!=EOF);
    {
      putchar(ch);

    }

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


   