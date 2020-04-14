//
//  ui.cpp
//  molecular-weight-calculator
//
//  Created by 夏欣萌 on 2020/4/13.
//  Copyright © 2020 夏欣萌. All rights reserved.
//

#include "headers.h"

int Calculate(map<string,int> &mp,const string &str);
namespace{
WINDOW *output;
}

void PrinttoOutput(string str[][7],const string &fis,const string &fst){
    string fm[7];
    if(fis=="0.-1"){
        for(int i=0;i<7;i++){
            fm[i]+=str[11][i];
            fm[i]+=str[12][i];
            fm[i]+=str[12][i];
        }
    }else{
        for(int i=0;i<(int)fis.size();i++){
            for(int j=0;j<7;j++){
                if(isdigit(fis[i])){
                    fm[j]+=str[fis[i]-'0'][j];
                }else{
                    fm[j]+=str[10][j];
                }
            }
        }
    }
    for(int i=0;i<11;i++){
        for(int j=0;j<COLS;j++){
            mvwaddch(output,i,j,' ');
        }
    }
    mvwprintw(output,0,0,"This molecule's relative molecular weight is:");
    for(int i=2;i<9;i++){
        mvwprintw(output,i,0,fm[i-2].substr(1).c_str());
    }
    mvwprintw(output,10,0,fst.c_str());
    wrefresh(output);
}

void StartUI(map<string,int> &mp,map<string,int> &stu,string str[][7]){
    #if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
    system("title Moecular Weight Calculator by Natsu Kinmoe");
    #endif
    initscr();
    noecho();
    clear();
    init_pair(1,COLOR_WHITE,COLOR_BLACK);
    init_pair(2,COLOR_BLACK,COLOR_WHITE);
    WINDOW *title=newwin(3,COLS,0,0);
    string Title="Molecular Weight Calculator";
    mvwprintw(title,0,COLS/2-(int)Title.size()/2,Title.c_str());
    Title="Made by Natsu Kinmoe in April 2020";
    mvwprintw(title,1,COLS/2-(int)Title.size()/2,Title.c_str());
    Title="Input a molecule's name and press ENTER to calculate. Press Ctrl+Q to quit.";
    mvwprintw(title,2,COLS/2-(int)Title.size()/2,Title.c_str());
    start_color();
    init_pair(1,COLOR_WHITE,COLOR_BLACK);
    init_pair(2,COLOR_BLACK,COLOR_WHITE);
    WINDOW *input=newwin(1,COLS,4,0);
    keypad(input,1);
    Title="Molecule's name: ";
    wattron(input,COLOR_PAIR(1));
    mvwprintw(input,0,0,Title.c_str());
    const int PreSize=(int)Title.size();
    wattron(input,COLOR_PAIR(2));
    for(int i=PreSize;i<COLS;i++){
        mvwaddch(input,0,i,' ');
    }
    const int Fwid=COLS-PreSize;
    output=newwin(11,COLS,6,0);
    wrefresh(title);
    wrefresh(input);
    wmove(input,0,PreSize);
    vector<char> inputs;
    int cursorpos=0,winl=0;
    while(1){
        char ch=wgetch(input);
        if(ch==10||ch==13){
            string Str;
            for(int i=0;i<(int)inputs.size();i++){
                Str+=inputs[i];
            }
            int ans=Calculate(mp,Str);
            if(Str==""){
                ans=0;
            }
            char tmp[15];
            sprintf(tmp,"%d.%d",ans/10,ans%10);
            int ans2=Calculate(stu,Str);
            char tmp2[45];
            if(!~ans2){
                tmp2[0]=0;
            }else{
                sprintf(tmp2,"Result in student mode: %d.%d",ans2/10,ans2%10);
            }
            PrinttoOutput(str,tmp,tmp2);
        }else if(ch=='\x11'){
            break;
        }else if(ch=='\x1b'||(ch>=2&&ch<=5)){
            if(ch=='\x1b'){
                ch=wgetch(input);
                if(ch=='['){
                    ch = wgetch(input);
                }
            }
            if(ch==4||ch=='D'){
                cursorpos--;
                if(cursorpos<0){
                    cursorpos=0;
                }
                if(cursorpos-1<winl&&cursorpos){
                    winl=cursorpos-1;
                }
            }else if(ch==5||ch=='C'){
                cursorpos++;
                if(cursorpos>(int)inputs.size()){
                    cursorpos=(int)inputs.size();
                }
                if(cursorpos-Fwid+1>winl){
                    winl=cursorpos-Fwid+1;
                }
            }
        }else if(ch==8||ch=='\x7f'){
            if(!cursorpos){
                continue;
            }
            inputs.erase(inputs.begin()+cursorpos-1);
            cursorpos--;
            if(winl+Fwid-2==(int)inputs.size()&&winl){
                winl--;
            }
        }else if(ch>=32&&ch<127){
            inputs.insert(inputs.begin()+cursorpos,ch);
            cursorpos++;
            if(winl+Fwid-1<cursorpos){
                winl++;
            }
        }
        wattron(input,COLOR_PAIR(2));
        for(int i=PreSize,j=winl;i<COLS;i++,j++){
            if(j>=inputs.size()){
                mvwaddch(input,0,i,' ');
            }else{
                mvwaddch(input,0,i,inputs[j]);
            }
        }
        wmove(input,0,PreSize+cursorpos-winl);
    }
    endwin();
}
