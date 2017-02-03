class Solution {
public:

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
ListNode *p1,*p2,*p3,*head=NULL;
p1=l1;
p2=l2;
int flag=0;
while(p1!=NULL||p2!=NULL||flag==1){
if(p1==NULL||p2==NULL){
if((p1==NULL&&p2==NULL)&&flag==1){
p3->next=(struct ListNode*)malloc(sizeof(struct ListNode));	
p3=p3->next;
p3->val=1;
p3->next=NULL;
flag=0;
				}
if(p1==NULL&&p2!=NULL&&(p2->val+flag<10)){
p3->next=(struct ListNode*)malloc(sizeof(struct ListNode));	
p3=p3->next;
p3->val=p2->val+flag;
p3->next=NULL;
flag=0;
p2=p2->next;	
			}
if(p2==NULL&&p1!=NULL&&(p1->val+flag<10)){
p3->next=(struct ListNode*)malloc(sizeof(struct ListNode));	
p3=p3->next;
p3->val=p1->val+flag;
p3->next=NULL;
flag=0;
p1=p1->next;	
			}
if(p1==NULL&&p2!=NULL&&(p2->val+flag==10)){
p3->next=(struct ListNode*)malloc(sizeof(struct ListNode));	
p3=p3->next;
p3->val=0;
p3->next=NULL;
flag=1;
p2=p2->next;	
			}
if(p2==NULL&&p1!=NULL&&(p1->val+flag==10)){
p3->next=(struct ListNode*)malloc(sizeof(struct ListNode));	
p3=p3->next;
p3->val=0;
p3->next=NULL;
flag=1;
p1=p1->next;	
			}
		}
		
			else{		
			
if(head==NULL){
p3=(struct ListNode*)malloc(sizeof(struct ListNode));		
head=p3;
			}else{
			
p3->next=(struct ListNode*)malloc(sizeof(struct ListNode));	
p3=p3->next;
			}
			
			
if((p1->val+p2->val+flag>=10)&&p2!=NULL&&p1!=NULL){
p3->val=p2->val+p1->val-10+flag;
p3->next=NULL;
flag=1;

			}
if((p1->val+p2->val+flag<10)&&p2!=NULL&&p1!=NULL){
p3->val=p2->val+p1->val+flag;
p3->next=NULL;
flag=0;
			}
	
p1=p1->next;	
p2=p2->next;
		
	}
			
		}
		return head;
		
    }
};