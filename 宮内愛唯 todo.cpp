#include	<stdlib.h>
#include	<stdio.h>

#define MAX 100

typedef struct{
        char title[100];
		char deadline[100];
} Task;


/*�^�X�N����*/
void add_task(){
     Task task;
	 
	 printf("�^�X�N�����:");
	 scanf("%[^\n]",task.title);
	 
	 printf("���������(�� 2025/04/20):");
	 scanf("%[^\n]",task.deadline);
	 
	 FILE *fp = fopen("todo.csv","a");
	 if(fp==NULL){
	    printf("�t�@�C�����J���܂���ł����B\n");
		return;
	 }

	 fprintf(fp,"%s,%s\n",task.title,task.deadline);
	 fclose(fp);
	 
	 printf("�^�X�N��ǉ�������I");
}
	 
	 
	 
int main(){
    int choice;
	while(1){
	     printf("\n====ToDo���j���[===\n");
		 printf("1.��邱�ƒǉ�");
		 printf("2.�I��\n");
		 printf("�I��\n");
		 scanf("%d",&choice);
		 
		 switch(choice){
		 
		     case 1:
			   add_task();
               break;
			   
			 case 2:
			   pirntf("�I�����܂��B\n");
			   return 0;
			  default:
			  printf("�����ȑI���ł��B\n");
			   
		 }
	
	
	
	}
return 0;
}

}






