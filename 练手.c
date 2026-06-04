bool isSame (Bitree* a, Bitree* b){
    if(a->nexy == NULL && b->next == NULL)
    return true;
    if(a->next == NULL || b->next == NULL)
    return false;
    
    return a->data == b->data &&
            isSame(a->lchild, b->lchild) &&
            isSame(a->rchild, b->rchild);
}

void merge(LinkList* a, LinkList* b){
    LNode dummy;
    LNode* tail = &dummy;
    while(a->next!=NULL || b->next!=NULL){
        if(a->data <= b->data){
            tail->next = a;
            a=a->next;
        }
        else{
            tail->next = b;
            b = b->next;
        }
        tail = tail->next;//第一遍忘记将tail后移了!!!
    }

    if(a == NULL)
        tail->next = b;
        else
        tail->next = a;

        return dummy.next; // 这里也忘记写了
}

int CountX (LNode* HL , ElemType x){
    int count = 0;//应当引入一个节点p 用来遍历 不要动传入的形参, 这是代码规范

    if(HL == NULL)
    return count;

    while (HL->next != NULL){ //应为p != NULL 否则会直接跳过最后一个结点
        if(HL->data == x)
        count++;
        HL = HL->next;
    }
    return count;
}

void devide(SqList* s, int i, int* p){
    if(s == NULL)
    return;

    int q[s->length - 1];
    int top = s->length-1;
    int rear = 0;
    int j=0;

    while (top != rear){
        if(j != i && s[j] <= s[i])
        q[rear++] = s[j];
        else if(j != i && s[j] > s[i])
        q[top--] = s[j];
        
        j++;
    }

    q[top] = s[i];

    p = q; 
}

LinkList merge(LinkList A, LinkList B){
    LNode dummy;
    LNode* tail = &dummy;

    while(A != NULL && B!= NULL){

    }
    return dummy.next;
}

//快速排序的一趟排序
void partition (SqList *L){
    if(L == NULL || L->length <=1)
    return;

    int pivot = L->data[0];
    int low = 0;
    int high = L->length - 1;
    while(low < high){
        int mid = (low + high) / 2;
        
        while(low <= high && L->data[high] < pivot){
            high--;
        }
        L->data[low] = L->data[high];//这个语句不要写到while里面了!

        while(low <= high && L->data[high] > pivot){
            low++;
        }
        L->data[high] = L->data[low];
    }
    L->data[low] = pivot;
}

int AdjustList (LinkList L){
    if(!L || L->next == NULL) return 0;
    LinkList p = L;
    int count = 0;
    while(p->next != NULL){
        count ++;
        if(p->next->data %2 == 1){
            p->next = p->next->next;
            count --;
        }
        else    
            p = p->next;
    }
    p->next = L; //CycleList
    return count;
}
//有序表抽象数据类型
ADT SeriedList (
    int data,
    int 
) ADT SeriedList;
//据此类型设计折半查找算法
/*算法基本思想:
1. 设置两个头结点 分别指向两个链表的第一个元素. 设链表1为递增链表 链表2为递减链表
2. 遍历L1 得到链表1的尾结点
3. 为L2设置dummyhead 遍历L2 直到p2->next->data = p1->data
4. p1->next = p2 完成拼接 
*/

List merge(List L1, List L2){
    Node* p1 = L1.head;
    Node dummy;
    dummy.next = L2.head;
    Node* p2 = dummy;

    while(p1->next != NULL){
        p1 = p1->next;
    }
    int count = p1->data
    p1->next = p2->next;
    while(p2->next == count){
        
    }
}