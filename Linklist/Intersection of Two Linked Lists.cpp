class Solution {
public:
     ListNode *getIntersectionNode(ListNode *heada, ListNode *headb) {
    //     unordered_map<ListNode*,int>mp;
    //     while(heada != NULL)
    //     {
    //         mp[heada]++;
    //         heada=heada->next;
    //     }
    //     while(headb !=NULL)
    //     {
    //         if(mp[headb]>0)
    //         {
    //             return headb;

    //         }
    //         headb=headb->next;
    //     }
    //     return NULL;
  
		// ListNode *ptr1 = headA;
		// ListNode *ptr2 = headB;
		// while(ptr1 != ptr2){
		// 	if(ptr1 == NULL){
		// 		ptr1 = headB;
		// 	}
		// 	else{
		// 		ptr1 = ptr1 -> next;
		// 	}
		// 	if(ptr2 == NULL){
		// 		ptr2 = headA;
		// 	}
		// 	else{
		// 		ptr2 = ptr2 -> next;
		// 	}
		// }
		// return ptr1;
            ListNode *ptr1=heada;
            ListNode *ptr2=headb;
            while(ptr1 !=ptr2)
            {
                if(ptr1==NULL)
                {
                    ptr1=headb;
                }
                else
                {
                    ptr1=ptr1->next;
                }
                 if(ptr2==NULL)
                {
                    ptr2=heada;
                }
                else
                {
                    ptr2=ptr2->next;
                }
            }
            return ptr1;

                

    }
};
