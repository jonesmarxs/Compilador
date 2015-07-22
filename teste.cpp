#include<stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>

using namespace std;

int main(){
    int dimensao[2] = {2, 2};
    int parametrosVar[2] = {0, 0};
    int pos = 0;
    for(int j = 0; j < 2; j++){
        int dis = 1;
        for(int i = 2-1; i > j; i--)
            dis *= dimensao[i];
        pos += dis * parametrosVar[j];
    }
    cout<<pos<<endl;
}
