//
//  initialize.cpp
//  molecular-weight-calculator
//
//  Created by 夏欣萌 on 2020/4/12.
//  Copyright © 2020 夏欣萌. All rights reserved.
//

#include "headers.h"

void init(map<string,int> &mp,string str[][7],map<string,int> &stu){
    mp["H"]=10;stu["H"]=10;
    mp["D"]=20;stu["D"]=20;
    mp["T"]=30;stu["T"]=30;
    mp["He"]=40;stu["He"]=40;
    mp["Li"]=69;stu["Li"]=70;
    mp["Be"]=90;stu["Be"]=90;
    mp["B"]=108;stu["B"]=110;
    mp["C"]=120;stu["C"]=120;
    mp["N"]=140;stu["N"]=140;
    mp["O"]=160;stu["O"]=160;
    mp["F"]=190;stu["F"]=190;
    mp["Ne"]=202;stu["Ne"]=200;
    mp["Na"]=230;stu["Na"]=230;
    mp["Mg"]=243;stu["Mg"]=240;
    mp["Al"]=270;stu["Al"]=270;
    mp["Si"]=281;stu["Si"]=280;
    mp["P"]=310;stu["P"]=310;
    mp["S"]=321;stu["S"]=320;
    mp["Cl"]=355;stu["Cl"]=355;
    mp["Ar"]=400;stu["Ar"]=400;
    mp["K"]=391;stu["K"]=390;
    mp["Ca"]=401;stu["Ca"]=400;
    mp["Sc"]=450;stu["Sc"]=450;
    mp["Ti"]=479;stu["Ti"]=480;
    mp["V"]=509;stu["V"]=510;
    mp["Cr"]=520;stu["Cr"]=520;
    mp["Mn"]=549;stu["Mn"]=550;
    mp["Fe"]=559;stu["Fe"]=560;
    mp["Co"]=589;stu["Co"]=590;
    mp["Ni"]=587;stu["Ni"]=590;
    mp["Cu"]=636;stu["Cu"]=640;
    mp["Zn"]=654;stu["Zn"]=650;
    mp["Ga"]=697;stu["Ga"]=700;
    mp["Ge"]=726;stu["Ge"]=730;
    mp["As"]=750;stu["As"]=750;
    mp["Se"]=790;stu["Se"]=790;
    mp["Br"]=799;stu["Br"]=800;
    mp["Kr"]=838;stu["Kr"]=840;
    mp["Rb"]=855;stu["Rb"]=855;
    mp["Sr"]=876;stu["Sr"]=880;
    mp["Y"]=889;stu["Y"]=890;
    mp["Zr"]=912;stu["Zr"]=910;
    mp["Nb"]=929;stu["Nb"]=930;
    mp["Mo"]=960;stu["Mo"]=960;
    mp["Tc"]=980;stu["Tc"]=980;
    mp["Ru"]=1011;
    mp["Rh"]=1029;
    mp["Pd"]=1064;
    mp["Ag"]=1079;stu["Ag"]=1080;
    mp["Cd"]=1124;
    mp["In"]=1148;
    mp["Sn"]=1187;
    mp["Sb"]=1218;
    mp["Te"]=1276;
    mp["I"]=1269;
    mp["Xe"]=1313;
    mp["Cs"]=1329;
    mp["Ba"]=1373;stu["Ba"]=1370;
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
    mp["Pt"]=1951;stu["Pt"]=1950;
    mp["Au"]=1970;stu["Au"]=1970;
    mp["Hg"]=2006;stu["Hg"]=2010;
    mp["Tl"]=2044;
    mp["Pb"]=2072;stu["Pb"]=2070;
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
    mp["Rf"]=mp["Unq"]=2650;
    mp["Db"]=mp["Unp"]=2680;
    mp["Sg"]=mp["Unh"]=2710;
    mp["Bh"]=mp["Uns"]=2700;
    mp["Hs"]=mp["Uno"]=2770;
    mp["Mt"]=mp["Une"]=2760;
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
    
    str[4][0]="       ##   ";
    str[4][1]="     ####   ";
    str[4][2]="   ##  ##   ";
    str[4][3]=" ##    ##   ";
    str[4][4]=" ########## ";
    str[4][5]="       ##   ";
    str[4][6]="       ##   ";
    
    str[5][0]=" ########## ";
    str[5][1]=" ##         ";
    str[5][2]=" ##         ";
    str[5][3]=" ########   ";
    str[5][4]="         ## ";
    str[5][5]=" ##      ## ";
    str[5][6]="   ######   ";
    
    str[6][0]="     ###    ";
    str[6][1]="   ##       ";
    str[6][2]=" ##         ";
    str[6][3]=" ########   ";
    str[6][4]=" ##      ## ";
    str[6][5]=" ##      ## ";
    str[6][6]="   ######   ";
    
    str[7][0]=" ########## ";
    str[7][1]="         ## ";
    str[7][2]="       ##   ";
    str[7][3]="     ##     ";
    str[7][4]="     ##     ";
    str[7][5]="     ##     ";
    str[7][6]="     ##     ";
    
    str[8][0]="   ######   ";
    str[8][1]=" ##      ## ";
    str[8][2]=" ##      ## ";
    str[8][3]="   ######   ";
    str[8][4]=" ##      ## ";
    str[8][5]=" ##      ## ";
    str[8][6]="   ######   ";
    
    str[9][0]="   ######   ";
    str[9][1]=" ##      ## ";
    str[9][2]=" ##      ## ";
    str[9][3]="   ######## ";
    str[9][4]="         ## ";
    str[9][5]="       ##   ";
    str[9][6]="    ###     ";
    
    str[10][0]="       ";
    str[10][1]="       ";
    str[10][2]="       ";
    str[10][3]="       ";
    str[10][4]="       ";
    str[10][5]="  ###  ";
    str[10][6]="  ###  ";
    
    str[11][0]=" ########## ";
    str[11][1]=" ##         ";
    str[11][2]=" ##         ";
    str[11][3]=" ########   ";
    str[11][4]=" ##         ";
    str[11][5]=" ##         ";
    str[11][6]=" ########## ";
    
    str[12][0]=" ########   ";
    str[12][1]=" ##      ## ";
    str[12][2]=" ##      ## ";
    str[12][3]=" ########   ";
    str[12][4]=" ##  ##     ";
    str[12][5]=" ##    ##   ";
    str[12][6]=" ##      ## ";
}
