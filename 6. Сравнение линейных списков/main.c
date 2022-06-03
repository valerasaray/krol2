#include <stdio.h>

struct list {
    struct list *next;
    int val;
}

int main()
{
    struct list *list1;
    struct list *list2;
    
    int size1 = init_list(list1); // функция возвр. размер
    int size2 = init_list(list2);
    
    int flag = 1;
    if (size1 == size2) {
        while (list1 != NULL && list2 != NULL) {
            if (list1->val != list2->val) {
                flag = 0;
            }
            list1 = list1->next;
            list2 = list2->next;
        }
    } else {
        flag = 0;
    }
    
    if (flag) {
        printf("OK");
    } else {
        printf("NO OK");
    }
    
    return 0;
}
