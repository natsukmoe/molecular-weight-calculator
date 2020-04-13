//
//  initialize.cpp
//  molecular-weight-calculator
//
//  Created by 夏欣萌 on 2020/4/12.
//  Copyright © 2020 夏欣萌. All rights reserved.
//

#include "headers.h"

void init(map<string,int> &mp,string **str){
    mp["H"]=10;
    mp["He"]=40;
    mp["Li"]=69;
    mp["Be"]=90;
    mp["B"]=108;
    mp["C"]=120;
    mp["N"]=140;
    mp["O"]=160;
    mp["F"]=190;
    mp["Ne"]=202;
    mp["Na"]=230;
    mp["Mg"]=243;
    mp["Al"]=270;
    mp["Si"]=281;
    mp["P"]=310;
    mp["S"]=321;
    mp["Cl"]=355;
    mp["Ar"]=400;
    mp["K"]=391;
    mp["Ca"]=401;
    mp["Sc"]=450;
    mp["Ti"]=479;
    mp["V"]=509;
    mp["Cr"]=520;
    mp["Mn"]=549;
    mp["Fe"]=559;
    mp["Co"]=589;
    mp["Ni"]=587;
    mp["Cu"]=636;
    mp["Zn"]=654;
    mp["Ga"]=697;
    mp["Ge"]=726;
    mp["As"]=750;
    mp["Se"]=790;
    mp["Br"]=799;
    mp["Kr"]=838;
    mp["Rb"]=855;
    mp["Sr"]=876;
    mp["Y"]=889;
    mp["Zr"]=912;
    mp["Nb"]=929;
    mp["Mo"]=960;
    mp["Tc"]=980;
    mp["Ru"]=1011;
    mp["Rh"]=1029;
    mp["Pd"]=1064;
    mp["Ag"]=1079;
    mp["Cd"]=1124;
    mp["In"]=1148;
    mp["Sn"]=1187;
    mp["Sb"]=1218;
    mp["Te"]=1276;
    mp["I"]=1269;
    mp["Xe"]=1313;
    mp["Cs"]=1329;
    mp["Ba"]=1373;
    mp["La"]=1389;
    mp["Ce"]=1401;
    mp["Pr"]=1409;
    mp["Nd"]=1442;
    mp["Pm"]=1450;
    mp["Sm"]=1504;
    mp["Eu"]=1520;
    mp["Gd"]=1573;
    mp["Tb"]=1589;
    mp["Dy"]=1625;
    mp["Ho"]=1649;
    mp["Er"]=1673;
    mp["Tm"]=1689;
    mp["Yb"]=1731;
    mp["Lu"]=1750;
    mp["Hf"]=1785;
    mp["Ta"]=1809;
    mp["W"]=1838;
    mp["Re"]=1862;
    mp["Os"]=1902;
    mp["Ir"]=1922;
    mp["Pt"]=1951;
    mp["Au"]=1970;
    mp["Hg"]=2006;
    mp["Tl"]=2044;
    mp["Pb"]=2072;
    mp["Bi"]=2090;
    mp["Po"]=2090;
    mp["At"]=2100;
    mp["Rn"]=2220;
    mp["Fr"]=2230;
    mp["Ra"]=2260;
    mp["Ac"]=2270;
    mp["Th"]=2320;
    mp["Pa"]=2310;
    mp["U"]=2380;
    mp["Np"]=2370;
    mp["Pu"]=2440;
    mp["Am"]=2430;
    mp["Cm"]=2470;
    mp["Bk"]=2470;
    mp["Cf"]=2510;
    mp["Es"]=2520;
    mp["Fm"]=2570;
    mp["Md"]=2580;
    mp["No"]=2590;
    mp["Lr"]=2620;
    mp["Rf"]=2650;
    mp["Db"]=2680;
    mp["Sg"]=2710;
    mp["Bh"]=2700;
    mp["Hs"]=2770;
    mp["Mt"]=2760;
    mp["Ds"]=mp["Uun"]=2810;
    mp["Rg"]=mp["Uuu"]=2800;
    mp["Cn"]=mp["Uub"]=2850;
    mp["Nh"]=mp["Uut"]=2840;
    mp["Fl"]=mp["Uuq"]=2890;
    mp["Mc"]=mp["Uup"]=2880;
    mp["Lv"]=mp["Uuh"]=2930;
    mp["Ts"]=mp["Uus"]=2940;
    mp["Og"]=mp["Uuo"]=2940;
    mp["Uue"]=3190;
    mp["Ubn"]=3340;
    mp["Ubu"]=3030;
    mp["Ubb"]=3220;
    mp["Ubt"]=3280;
    
    str[0][0]="   ######   ";
    str[0][1]=" ##      ## ";
    str[0][2]=" ##      ## ";
    str[0][3]=" ##      ## ";
    str[0][4]=" ##      ## ";
    str[0][5]=" ##      ## ";
    str[0][6]="   ######   ";
    
    str[1][0]="     ##     ";
    str[1][1]="   ####     ";
    str[1][2]=" ##  ##     ";
    str[1][3]="     ##     ";
    str[1][4]="     ##     ";
    str[1][5]="     ##     ";
    str[1][6]=" ########## ";
    
    str[2][0]="   ######   ";
    str[2][1]=" ##      ## ";
    str[2][2]="         ## ";
    str[2][3]="       ##   ";
    str[2][4]="     ##     ";
    str[2][5]="   ##       ";
    str[2][6]=" ########## ";
    
    str[3][0]="   ######   ";
    str[3][1]=" ##      ## ";
    str[3][2]="         ## ";
    str[3][3]="     ####   ";
    str[3][4]="         ## ";
    str[3][5]=" ##      ## ";
    str[3][6]="   ######   ";
}
