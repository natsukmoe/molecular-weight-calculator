//
//  main.cpp
//  molecular-weight-calculator
//
//  Created by 夏欣萌 on 2020/4/12.
//  Copyright © 2020 夏欣萌. All rights reserved.
//

#include "headers.h"

void init(map<string,int>& mp,string str[][7],map<string,int> &stu);
map<string,int> mp,stu;
string disp[15][7];

int Calculate(map<string,int> &mp,const string &str);
void StartUI(map<string,int> &mp,map<string,int> &stu,string str[][7]);

int main(int argc,char** argv){
    init(mp,disp,stu);
    if(argc==1){
        StartUI(mp,stu,disp);
    }else{
        if(argc==2){
            puts("0");
            return 0;
        }
        if(!strcmp(argv[1],"-a")){
            int res=Calculate(mp,argv[2]);
            if(res==-1){
                puts("-1");
                return 0;
            }
            printf("%d.%d\n",res/10,res%10);
        }else if(!strcmp(argv[1],"-at")){
            int res=Calculate(mp,argv[2]);
            printf("%d\n",res);
        }else if(!strcmp(argv[1],"-s")){
            int res=Calculate(stu,argv[2]);
            if(res==-1){
                puts("-1");
                return 0;
            }
            printf("%d.%d\n",res/10,res%10);
        }else if(!strcmp(argv[1],"-st")){
            int res=Calculate(stu,argv[2]);
            printf("%d\n",res);
        }
    }
}
