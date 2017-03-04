#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;
int main(){
    int gd=DETECT;
    int gm,i;
    int color;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    for(i=500;i>=50;i--){
        cleardevice();
        outtextxy(220,i,"WELCOME GREAT PLAYER!!");
        outtextxy(240,i+50,"ENTER IF YOU DARE!!!");
        outtextxy(240,i+100,"GAME CREATED BY:-");
        outtextxy(250,i+150,"VARUN BHARGAVA");
        outtextxy(200,i+200,"BASED ON BOARD GAME RISK");
    }
    Sleep(5000);
    cleardevice();
    setcolor(WHITE);//BACKGROUND
    bar(0,0,740,1000);
    setcolor(GREEN);//NORTH AMERICA
    rectangle(13,38,72,65);
    outtextxy(15,67,"#1");//ALASKA
    rectangle(38,94,106,121);
    outtextxy(40,123,"#2");//CANADA
    rectangle(27,148,112,176);
    outtextxy(29,178,"#3");//USA
    rectangle(42,208,99,240);
    outtextxy(44,242,"#4");//MEXICO
    rectangle(134,14,198,45);
    outtextxy(136,47,"#5");//GREENLAND
    setcolor(RED);//SOUTH AMERICA
    rectangle(83,305,147,332);
    outtextxy(85,334,"#6");//VENEZUELA
    rectangle(43,371,104,397);
    outtextxy(45,399,"#7");//COLUMBIA
    rectangle(22,417,62,442);
    outtextxy(24,444,"#8");//PERU
    rectangle(122,387,175,412);
    outtextxy(124,414,"#9");//BRAZIL
    setcolor(BROWN);//EUROPE
    rectangle(262,17,322,46);
    outtextxy(264,48,"#22");//NORWAY
    rectangle(326,41,383,66);
    outtextxy(328,68,"#23");//SWEDEN
    rectangle(388,22,448,55);
    outtextxy(390,57,"#24");//FINLAND
    rectangle(335,85,388,107);
    outtextxy(337,109,"#25");//POLAND
    rectangle(269,67,329,96);
    outtextxy(269,98,"#21");//DENMARK
    rectangle(247,115,292,141);
    outtextxy(249,143,"#20");//FRANCE
    rectangle(250,169,294,191);
    outtextxy(252,193,"#19");//SPAIN
    rectangle(329,122,369,150);
    outtextxy(327,152,"#26");//TURKEY
    setcolor(COLOR(20,60,20));//ASIA AND AUSTRALIA
    rectangle(525,41,568,71);
    outtextxy(527,73,"#33");//RUSSIA
    rectangle(568,101,635,131);
    outtextxy(569,133,"#32");//MONGOLIA
    rectangle(361,168,401,194);
    outtextxy(363,196,"#27");//IRAQ
    rectangle(408,140,455,168);
    outtextxy(410,170,"#28");//IRAN
    rectangle(399,208,446,240);
    outtextxy(401,242,"#29");//SAUDI
    rectangle(456,208,506,240);
    outtextxy(458,242,"#30");//INDIA
    rectangle(540,152,635,180);
    outtextxy(542,182,"#31");//CHINA
    rectangle(576,218,635,245);
    outtextxy(574,247,"#34");//THAILAND
    rectangle(589,321,635,350);
    outtextxy(570,352,"#35");//AUSTRALIA
    rectangle(589,370,635,390);
    outtextxy(540,392,"#36");//NEW ZEALAND
    setcolor(YELLOW);//AFRICA
    rectangle(234,221,274,250);
    outtextxy(201,252,"#16");//MOROCCO
    rectangle(284,226,329,255);
    outtextxy(279,257,"#17");//ALGERIA
    rectangle(339,246,392,275);
    outtextxy(340,277,"#18");//LIBYA
    rectangle(260,275,294,300);
    outtextxy(262,302,"#15");//MALI
    rectangle(305,290,360,320);
    outtextxy(307,322,"#14");//NIGER
    rectangle(365,305,399,335);
    outtextxy(367,337,"#13");//CHAD
    rectangle(315,374,365,400);
    outtextxy(317,402,"#12");//ZAIRE
    rectangle(274,420,315,440);
    outtextxy(276,452,"#11");//ANGOLA
    rectangle(399,430,456,455);
    outtextxy(400,457,"#10");//MADAGASCAR
    setcolor(BLUE);
    line(86,121,47,148);//1→2
    line(52,65,58,94);//2→3
    line(111,161,154,45);//2→5
    line(92,176,62,208);//3→4
    line(79,240,103,305);//4→6
    line(74,240,63,371);//4→7
    line(117,332,104,387);//6→7
    line(127,332,142,387);//6→9
    line(84,397,42,417);//7→8
    line(104,392,122,397);//7→9
    line(62,427,122,402);//8→9
    line(399,450,315,430);//10→11
    line(294,420,315,394);//11→12
    line(335,374,365,325);//12→13
    line(365,325,360,300);//13→14
    line(385,305,372,275);//13→18
    line(305,310,294,280);//14→15
    line(325,290,309,255);//14→17
    line(280,275,304,255);//15→17
    line(274,235,284,241);//16→17
    line(329,235,339,266);//17→18
    line(270,169,272,141);//19→20
    line(292,121,335,105);//20→25
    line(289,67,292,46);//21→22
    line(322,26,346,41);//22→23
    line(366,41,388,27);//23→24
    line(428,55,355,85);//24→25
    line(448,35,525,61);//24→33
    line(349,150,381,168);//26→27
    line(369,130,408,160);//26→28
    line(369,120,525,71);//26→33
    line(381,194,419,208);//27→29
    line(435,168,476,208);//28→30
    line(506,220,540,172);//30→31
    line(560,152,568,121);//31→32
    line(615,180,596,218);//31→34
    line(588,101,568,51);//32→33
    line(615,245,609,321);//34→35
    line(615,350,609,370);//35→36
    getch();
    closegraph();
    return(0);
}
