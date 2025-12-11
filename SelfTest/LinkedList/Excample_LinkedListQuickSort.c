#include <stdio.h>
#include <malloc.h>

typedef struct Node{
    int data;
    Node* next;
}Node;

int* QuickSort(Node* pBegin, Node* pEnd){
    if(pBegin == NULL || pEnd == NULL || pBegin == pEnd)
        return 0;
 
    //定义两个指针
    Node* p1 = pBegin;
    Node* p2 = pBegin->next;
    int pivot = pBegin->data;

	//每次只比较小的，把小的放在前面。经过一轮比较后，被分成左右两部分。其中p1指向中值处，pbegin为pivot。
    while(p2 != NULL){/* && p2 != pEnd->next */
        if(p2->data < pivot){
            p1 = p1->next;
            if(p1 != p2){
                SwapData(&p1->data, &p2->data);
        	}
      	}
        p2 = p2->next;
   }
   /*此时pivot并不在中间，我们要把他放到中间，以他为基准，把数据分为左右两边*/
    SwapData(&p1->data, &pBegin->data);
    //此时p1是中值节点
	//if(p1->data >pBegin->data)
    QuickSort(pBegin, p1);
	//if(p1->data < pEnd->data)
    QuickSort(p1->next, pEnd);
}