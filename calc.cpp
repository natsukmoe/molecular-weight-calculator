//
//  calc.cpp
//  molecular-weight-calculator
//
//  Created by 夏欣萌 on 2020/4/13.
//  Copyright © 2020 夏欣萌. All rights reserved.
//

#include "headers.h"

int GetAtomWeight(map<string,int> &mp,const string &s){
    if(!mp.count(s)){
        return -1;
    }else{
        return mp[s];
    }
}

int CalculateMol(map<string,int> &mp,const string &s){
    if(!isupper(s[0])){
        return -1;
    }
    int l=1;
    while(l<(int)s.size()&&isupper(s[l])){
        l++;
    }
    if(l==(int)s.size()){
        return GetAtomWeight(mp,s);
    }
    int r=l;
    int tms=0;
    while(r<(int)s.size()&&isdigit(s[r])){
        tms=tms*10+s[r]-'0';
        if(tms>Maxweight){
            return -1;
        }
        r++;
    }
    if(!tms){
        tms=1;
    }
    if(r==(int)s.size()){
        int wl=GetAtomWeight(mp,s.substr(0,l));
        if(1ll*tms*wl>Maxweight){
            return -1;
        }
        return wl*tms;
    }
    int wl=GetAtomWeight(mp,s.substr(0,l));
    if(1ll*tms*wl>Maxweight){
        return -1;
    }
    wl*=tms;
    int wr=CalculateMol(mp,s.substr(r));
    if(wl+wr>Maxweight){
        return -1;
    }
    return wl+wr;
}

int CalculateSingle(map<string,int> &mp,const string &s){
    if(isdigit(s[0])){
        int l=0,num=0;
        while(l<(int)s.size()&&isdigit(s[l])){
            num=num*10+s[l]-'0';
            if(num>Maxweight){
                return -1;
            }
            l++;
        }
        if(l==(int)s.size()){
            return -1;
        }
        int count=CalculateMol(mp,s.substr(l));
        if(!~count){
            return -1;
        }else{
            if(1ll*num*count>Maxweight){
                return -1;
            }
            return num*count;
        }
    }else{
        return CalculateMol(mp,s);
    }
}

int Calculate(map<string,int> &mp,const string &s){
    int Split=-1;
    for(int i=0;i<s.size();i++){
        if(!isdigit(s[i])&&!isalpha(s[i])&&s[i]!='('&&s[i]!=')'&&s[i]!='['&&s[i]!=']'&&s[i]!='{'&&s[i]!='}'&&s[i]!='<'&&s[i]!='>'){
            Split=i;
        }
    }
    if(~Split){
        if(!Split){
            return -1;
        }
        int countL=CalculateSingle(mp,s.substr(0,Split-1));
        if(!~countL){
            return -1;
        }
        int countR=Calculate(mp,s.substr(Split+1));
        if(!~countR){
            return -1;
        }
        if(countL+countR>Maxweight){
            return -1;
        }
        return countL+countR;
    }else{
        return CalculateSingle(mp,s);
    }
}
