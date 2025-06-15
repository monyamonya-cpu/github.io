#include	<stdlib.h>
#include	<stdio.h>

#define MAX 100

typedef struct{
        char title[100];
		char deadline[100];
} Task;


/*タスク入力*/
void add_task(){
     Task task;
	 
	 printf("タスクを入力:");
	 scanf("%[^\n]",task.title);
	 
	 printf("期限を入力(例 2025/04/20):");
	 scanf("%[^\n]",task.deadline);
	 
	 FILE *fp = fopen("todo.csv","a");
	 if(fp==NULL){
	    printf("ファイルが開けませんでした。\n");
		return;
	 }

	 fprintf(fp,"%s,%s\n",task.title,task.deadline);
	 fclose(fp);
	 
	 printf("タスクを追加したよ！");
}
	 
	 
	 
int main(){
    int choice;
	while(1){
	     printf("\n====ToDoメニュー===\n");
		 printf("1.やること追加");
		 printf("2.終了\n");
		 printf("終了\n");
		 scanf("%d",&choice);
		 
		 switch(choice){
		 
		     case 1:
			   add_task();
               break;
			   
			 case 2:
			   pirntf("終了します。\n");
			   return 0;
			  default:
			  printf("無効な選択です。\n");
			   
		 }
	
	
	
	}
return 0;
}

}






