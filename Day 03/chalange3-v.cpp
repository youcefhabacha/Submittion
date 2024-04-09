
#include <stdio.h>
#include <stdbool.h>
bool testrow(int T[9][9],int q) {
    int i, j, L[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    bool ex;
    for (i = 0; i < 9; i++) {
        j = 0;
        ex = false;
        while (j < 9 && !ex) {
            if (L[i] == T[q][j]) {
                ex = true;
            }
            j++;
        }
        if (!ex) {
            return false;
        }
    }
    return true;
}
bool testcolon(int T[9][9],int q) {
    int i, j, L[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    bool ex;
    for (i = 0; i < 9; i++) {
        j = 0;
        ex = false;
        while (j < 9 && !ex) {
            if (L[i] == T[j][q]) {
                ex = true;
            }
            j++;
        }
        if (!ex) {
            return false;
        }
    }
    return true;
}
bool testrows(int T[9][9]){
 for (int i = 0; i < 9; i++) {
             if(!testrow(T,i)){
                return false ;
             }
    }
    return true;
    
}
bool testcolons(int T[9][9]){
 for (int i = 0; i < 9; i++) {
             if(!testcolon(T,i)){
                return false ;
             }
    }
    return true;
}
bool testsubgrids(int T[9][9], int p, int q) {
    int i, j;
    bool ex;
    for (i = p; i < p + 3; i++) {
        for (j = q; j < q + 3; j++) {
            int num = T[i][j];
            for (int k = p; k < p + 3; k++) {
                for (int l = q; l < q + 3; l++) {
                    if (k != i || l != j) {
                        if (num == T[k][l]) {
                            return false;
                        }
                    }
                }
            }
        }
    }
    return true;
}

int main()
{
    bool valid;
    int i,j,T[9][9]={
        {5, 3, 4, 6, 7, 8, 9, 1, 2},
        {6, 7, 2, 1, 9, 5, 3, 4, 8},
        {1, 9, 8, 3, 4, 2, 5, 6, 7},
        {8, 5, 9, 7, 6, 1, 4, 2, 3},
        {4, 2, 6, 8, 5, 3, 7, 9, 1},
        {7, 1, 3, 9, 2, 4, 8, 5, 6},
        {9, 6, 1, 5, 3, 7, 2, 8, 4},
        {2, 8, 7, 4, 1, 9, 6, 3, 5},
        {3, 4, 5, 2, 8, 6, 1, 7, 9}
    };
    i=0;
    valid = true;
    while(i<9 && valid==true){
        if(!testrow(T,i) || !testcolon(T,i)){
            valid=false;
        }
        i++;
    }
    if (valid == false){
        printf("false\n");
    }
    else
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(!testsubgrids(T,i,j)){
                valid = false;
            }
        }
    }
    if (valid == false)
        printf("false\n");
    else
        printf("true\n");
    return 0;
}

