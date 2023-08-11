#include <graphics.h>
#include <iostream>

void drawHouse();
void drawBangladeshFlag();
void drawEmoji();
void drawVillage();

int main()
{
    int choice;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    std::cout << "Choose an option:\n";
    std::cout << "1. House\n";
    std::cout << "2. National Flag of Bangladesh\n";
    std::cout << "3. Emoji\n";
    std::cout << "4. Village\n";


    std::cout << "Enter your choice (1 or 2 or 3 or 4): ";
    std::cin >> choice;

    cleardevice();

    switch (choice) {
        case 1:
            drawHouse();
            break;
        case 2:
            drawBangladeshFlag();
            break;
        case 3:
            drawEmoji();
            break;
        case 4:
            drawVillage();
            break;

        default:
            std::cout << "Invalid choice.\n";
            break;
    }

    getch();
    closegraph();
    return 0;
}
void drawHouse()
{

    setfillstyle(SOLID_FILL,YELLOW);
    rectangle(150,180,250,300);
    floodfill(151,181,WHITE);


    rectangle(250,180,420,300);
    setfillstyle(SOLID_FILL,GREEN);



  setfillstyle(SOLID_FILL,GREEN);
    floodfill(199,199,WHITE);
    line(200,100,150,180);


     line(200,100,250,180);
       setfillstyle(SOLID_FILL,YELLOW);

    floodfill(199,179,WHITE);
    floodfill(251,181,WHITE);

     setfillstyle(SOLID_FILL,YELLOW);
     rectangle(180,250,220,300);
     floodfill(181,251,WHITE);


     line(200,100,370,100);

     line(370,100,420,180);




}

void drawBangladeshFlag()
{
    // Draw the national flag of Bangladesh

    setcolor(GREEN);
    rectangle(50,50,220,150);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(51,51,GREEN);
    setcolor(WHITE);
    rectangle(40,40,50,300);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(41,41,WHITE);
    setcolor(RED);
    circle(130,100,30);
    setfillstyle(SOLID_FILL,RED);
    floodfill(131,101,RED);
}

void drawEmoji()
{
    // Draw the Emoji

     initwindow(700,600,"Afsana");
     setcolor(WHITE);
  circle(300,300,160);
  setfillstyle(SOLID_FILL,YELLOW);
  floodfill(274,284,WHITE);
  setcolor(BLACK);
  circle(240,260,45);
  setfillstyle(SOLID_FILL,WHITE);
  floodfill(230,260,BLACK);

  setcolor(BLACK);
  ellipse(240,280,0,360,20,25);
  setfillstyle(SOLID_FILL,BLACK);
  floodfill(240,280,BLACK);

  setcolor(BLACK);
  circle(360,260,45);
  setfillstyle(SOLID_FILL,WHITE);
  floodfill(360,260,BLACK);
   setcolor(BLACK);
  ellipse(360,280,0,360,20,25);
  setfillstyle(SOLID_FILL,BLACK);
  floodfill(360,280,BLACK);

   setcolor(BLACK);
   ellipse(300,390,0,180,70,40);



}
void drawVillage()
{
    // Middle cloud
    ellipse(200,30,60,240,10,15);
    ellipse(225,20,345,165,20,15);
    ellipse(262,27,340,160,20,15);
    ellipse(268,42,230,50,20,10);
    ellipse(226,46,163,340,31,15);
    ellipse(300,21,20,182,21,19);
    ellipse(325,31,290,100,21,15);
    ellipse(299,45,228,20,33,11);

    //left cloud

    ellipse(40,30,60,240,10,15);
    ellipse(65,20,345,165,20,15);
    ellipse(105,27,340,160,20,15);
    ellipse(109,42,230,50,20,10);

    // Right cloud

    ellipse(450,30,60,240,10,15);
    ellipse(475,20,345,165,20,15);
    ellipse(512,27,340,160,20,15);
    ellipse(518,42,230,50,20,10);
    ellipse(476,46,163,340,31,15);

    // Tree

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(240,420,275,420);
    line(240,420,245,405);
    line(275,420,270,405);
    line(245,405,240,405);
    line(270,405,275,405);
    line(240,405,245,390);
    line(275,405,270,390);
    line(245,390,240,390);
    line(270,390,275,390);
    line(240,390,258,370);
    line(275,390,257,370);
    floodfill(259,375,WHITE);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,BROWN);
    line(250,460,250,420);
    line(265,460,265,420);
    line(250,460,265,460);
    line(250,420,265,420);
    floodfill(255,441,WHITE);


    // House

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,BROWN);
    line(88,400,163,400);
    line(100,370,88,400);
    line(100,370,112,400);
    line(100,370,150,370);
    line(150,370,163,400);
    floodfill(100,375,WHITE);


    setcolor(WHITE);
    setfillstyle(SOLID_FILL,BROWN);
    line(88,400,160,400);
    line(100,370,112,400);
    line(100,370,150,370);
    line(150,370,163,400);
    floodfill(105,375,WHITE);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,5);
    line(112,400,112,440);
    line(88,440,112,440);
    line(88,400,88,440);
    line(112,440,163,440);
    floodfill(90,402,WHITE);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,5);
    line(163,400,163,440);
    line(112,440,163,440);
    line(112,400,112,440);
    line(88,4000,163,400);
    floodfill(115,405,WHITE);

    // door

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,RED);
    line(94,440,94,420);
    line(106,440,106,420);
    line(94,420,106,420);
    floodfill(97,435,WHITE);

    //mountain 1
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(0,150,100,75);
    line(100,75,200,150);

     //mountain 2
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(175,131,275,75);
    line(275,75,375,150);

     //mountain 3
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    line(350,131,450,75);
    line(450,75,550,150);

     //mountain 4
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(525,131,600,75);
    line(600,75,750,180);
    line(0,150,750,150);
    floodfill(100,136,WHITE);
    floodfill(275,136,WHITE);
    floodfill(450,136,WHITE);
    floodfill(600,136,WHITE);


    // sun

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,RED);
    arc(178,112,0,180,30);
    floodfill(171,109,WHITE);

    setfillstyle(SOLID_FILL,BLUE);
    floodfill(50,50,WHITE);


}

