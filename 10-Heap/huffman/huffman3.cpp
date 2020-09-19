// hufuman3.cpp.cpp : 定义控制台应用程序的入口点。内部代码纯手工实现
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;
typedef struct huTreeNode
{
    char a;
    struct huTreeNode *rchild;
    struct huTreeNode *lchild;
} NODE, *TYPE;

typedef struct QueueNode
{
    struct huTreeNode *val;
    int probabliy;
    struct QueueNode *next;
} QUEUENODE, *pQUEUENODE;

typedef struct QUEUE
{
    int size;
    pQUEUENODE pHead;
} * pQUEUE;

typedef struct hlTable
{
    char symbol;
    char *code;
    struct hlTable *pNext;
} HLTABLE, *pHLTABLE;

//队列头指针
struct QUEUE *pQ = (struct QUEUE *)malloc(sizeof(struct QUEUE));
//table 头指针
pHLTABLE pTHead = (pHLTABLE)malloc(sizeof(HLTABLE));
pHLTABLE pTable = pTHead;

void initQueue(pQUEUE pQ)
{
    //	pQ=(struct QUEUE *)malloc(sizeof(struct QUEUE));
    pQ->size = 0;
    //	pQUEUENODE head=(pQUEUENODE)malloc(sizeof(QUEUENODE));
    pQ->pHead = (pQUEUENODE)malloc(sizeof(QUEUENODE));
    pQ->pHead->next = NULL;
    return;
}

void creatQueue(pQUEUE pQ, char inputString, int *probabliy)
{

    pQUEUENODE pQueueNode = (pQUEUENODE)malloc(sizeof(QUEUENODE));
    pQueueNode->next = NULL;
    TYPE node = (TYPE)malloc(sizeof(struct huTreeNode));
    node->a = inputString;
    node->rchild = NULL;
    node->lchild = NULL;
    pQueueNode->val = node;
    pQueueNode->probabliy = probabliy[(int)inputString];
    if (pQ->pHead->next == NULL)
    {
        pQ->pHead->next = pQueueNode;
        pQ->pHead->next->next = NULL;
    }
    else
    {
        //找重复 去重复
        pQUEUENODE p = pQ->pHead;
        while (p->next != NULL)
        {
            if (p->next->val->a == inputString)
            {
                return;
            }
            p = p->next;
        }

        //入队列
        p = pQ->pHead;
        while (1)
        {
            if (p->next != NULL && pQueueNode->probabliy > p->next->probabliy)
            {
                p = p->next;
            }
            else
            {
                pQueueNode->next = p->next;
                p->next = pQueueNode;
                break;
            }
        }
    }
    pQ->size++;
    //pQ->pHead=pQueueNode;
    // printf("%c\n",pQ->pHead ->val->a);
    return;
}

pQUEUENODE outQueue(pQUEUE pQ)
{
    if (pQ->size == 0)
    {
        printf("队列已空 出队失败");
        return NULL;
    }
    else
    {
        pQUEUENODE p = pQ->pHead->next;
        pQ->pHead->next = pQ->pHead->next->next;
        pQ->size--;
        return p;
    }
}

void inQueue(pQUEUE pQ, pQUEUENODE pQueueNode)
{
    pQUEUENODE p;
    p = pQ->pHead;
    while (1)
    {
        if (p->next != NULL && pQueueNode->probabliy > p->next->probabliy)
        {
            p = p->next;
        }
        else
        {
            pQueueNode->next = p->next;
            p->next = pQueueNode;
            break;
        }
    }
    pQ->size++;
    return;
}

TYPE buildTree(char *inputString)
{
    int i = 0;
    char m;
    int *probabliy = (int *)malloc(sizeof(int) * 256);
    for (i = 0; i < 256; i++)
    {
        probabliy[i] = 0;
    }
    i = 0;
    while (inputString[i] != '\0')
    {
        probabliy[(int)inputString[i]]++;
        i++;
    }

    initQueue(pQ);

    i = 0;
    while (inputString[i] != '\0')
    {
        m = inputString[i];
        creatQueue(pQ, m, probabliy);
        i++;
    }
    //开始建树
    while (pQ->size >= 2)
    {
        pQUEUENODE p1 = (pQUEUENODE)malloc(sizeof(QUEUENODE));

        TYPE node = (TYPE)malloc(sizeof(NODE));
        // huTreeNode * node1=(huTreeNode *)malloc(sizeof(huTreeNode));
        // huTreeNode * node2=(huTreeNode *)malloc(sizeof(huTreeNode));
        node->rchild = NULL;
        node->lchild = NULL;
        node->a = '0';
        p1->val = node;
        pQUEUENODE p = outQueue(pQ);
        pQUEUENODE q = outQueue(pQ);

        //node->rchild=node1;
        p1->val->rchild = q->val;
        p1->val->lchild = p->val;
        p1->probabliy = p->probabliy + q->probabliy;
        //creatQueue(pQ, inputString,probabliy)
        inQueue(pQ, p1);
    }
    TYPE huboot = outQueue(pQ)->val;
    return huboot;
}

//遍历
void traversal(TYPE T, pHLTABLE *p, int k, char code[256])
{
    if (T != NULL)
    {

        if (T->rchild == NULL && T->lchild == NULL)
        {
            code[k] = '\0';
            pHLTABLE q = (pHLTABLE)malloc(sizeof(HLTABLE));
            q->symbol = T->a;
            q->code = (char *)malloc(sizeof(char) * (strlen(code) + 1));
            strcpy(q->code, code);
            q->pNext = NULL;
            (*p)->pNext = q;
            (*p) = (*p)->pNext;
        }
        else
        {
            if (T->rchild != NULL)
            {
                code[k] = '0';
                traversal(T->rchild, p, k + 1, code);
            }
            if (T->lchild != NULL)
            {
                code[k] = '1';
                traversal(T->lchild, p, k + 1, code);
            }
        }
    }
    else
    {
        printf("table 为空");
        return;
    }
    return;
}
//建table
void buildTable(TYPE L, pHLTABLE *pTHead)
{
    char code[256];
    pHLTABLE *p;
    traversal(L, pTHead, 0, code);

    return;
}
//enCode定义
void enCode(char *inputString)
{
    pHLTABLE p;
    p = pTHead->pNext;
    int i = 0, j = 0;
    for (i = 0; inputString[i] != '\0'; i++)
    {
        while (p != NULL)
        {

            if (p->symbol == inputString[i])
            {
                //printf("%c\n",inputString[i]);
                printf("%s", p->code);
                break;
            }
            else
            {
                p = p->pNext;
                if (p == NULL)
                {
                    printf("存在陌生字符！\n");
                    return;
                }
            }
        }
        p = pTHead->pNext;
    }
    printf("\n");
    return;
}
//decode定义
void deCode(char *inputString)
{
    int t = strlen(inputString);
    // printf("%d\n",t);
    char str[200];
    pHLTABLE p;
    p = pTHead->pNext;
    int i = 0, j = 0;

    while (inputString[i] != '\0')
    {
        str[j] = inputString[i];
        j++;
        i++;
        str[j] = '\0';
        while (p != NULL)
        {
            if (strcmp(p->code, str) == 0)
            {
                //  printf("ppppp%s\n",str);
                printf("%c", p->symbol);
                j = 0;
                //  j--;
                break;
            }
            else
            {
                p = p->pNext;
            }

            if (p == NULL)
            {
                break;
            }
        }
        p = pTHead->pNext;
    }
    printf("\n");
    return;
}

//主函数
int main()
{
    //table链表头指针
    pTHead->pNext = NULL;
    //参考数据源
    TYPE L = buildTree("abab12340ljiuof56jyrkwe4uii kyerqqw  o...,,ddeeeeeuhd%%%*khfuikj,yrkwesdfret567563tyryeydwrtddiiingfryui54874buyiy iu 98\ uyiiy uy7igi09.,;'[]");
    buildTable(L, &pTable);
    cout << "编码之后为：" << endl;
    enCode("khfuikj,yrkwesdfdddffousdfdfshjguky");
    cout << "解码后内容为" << endl;
    deCode("0101010111101110010011001010001011100100001111001010011000011100001000000011100000000000000000111001110101001010010000100000001110000000111010000101011110010111011000100010100001");
    scanf("%d"); //防闪退
    return 0;
}
