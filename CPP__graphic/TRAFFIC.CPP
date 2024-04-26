#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void program_start();
void stop_car();
void cout_down();
void last_step();
void main()

{

	int gd=DETECT,gm;

	initgraph(&gd,&gm,"c:\\tc\\bgi");



	//starting

	 program_start();



       //stop car

       stop_car();



       //cout down

      cout_down();



     //last step

     last_step();



	getch();

	closegraph();

}



void program_start()

{

		for(int i=0;i<=250;i++)

	{

	//car body

	ellipse(110+i,335,400,135,150,90);

	line(1+i,271,1+i,300);

	line(1+i,300,37+i,300);

	circle(53+i,300,17);

	line(69+i,300,154+i,300);

	circle(173+i,300,17);

	line(193+i,300,260+i,300);

	line(1+i,275,230+i,275);

	ellipse(240+i,289,322,486,24,14.9);

	line(55+i,249,55+i,275);

	line(140+i,249,140+i,275);



	      //traffic system

		if(i>=210)

		{

		  setfillstyle(SOLID_FILL,RED);

		  circle(547,152,8); //red light

		  floodfill(547,152,15);



		}





	//traffic





	line(548,200,548,320);

	rectangle(535,139,560,200);



	circle(548,124,15); //count



	circle(547,152,8); //red light

	circle(547,172,8); //yellow  light

	circle(547,192,8); //green light



	//road

	line(0,318,getmaxx(),318);



       delay(20);

	cleardevice();



	}



}





void stop_car()

{





		//stop car body

	ellipse(360,335,400,135,150,90);

	line(250,271,250,300);

	line(250,300,288,300);

	circle(303,300,17);

	line(319,300,404,300);

	circle(423,300,17);

	line(443,300,510,300);

	line(250,275,480,275);

	ellipse(490,289,322,486,24,14.9);

	line(305,249,305,275);

	line(390,249,390,275);



	//traffic light

	line(548,200,548,320);

	rectangle(535,139,560,200);



	circle(548,124,15); //count



	setfillstyle(SOLID_FILL,RED);

	 circle(547,152,8); //red light

	floodfill(547,152,15);

	circle(547,172,8); //yellow  light

	circle(547,192,8); //green light



	//road

	line(0,318,getmaxx(),318);





}



void cout_down()

{

	circle(548,124,15); //count



  for(int g=1; g<=220;g++)

  {



     if(g==20)

     {

       outtextxy(546,122,"1");



		//stop car body

	ellipse(360,335,400,135,150,90);

	line(250,271,250,300);

	line(250,300,288,300);

	circle(303,300,17);

	line(319,300,404,300);

	circle(423,300,17);

	line(443,300,510,300);

	line(250,275,480,275);

	ellipse(490,289,322,486,24,14.9);

	line(305,249,305,275);

	line(390,249,390,275);



	//traffic light

	line(548,200,548,320);

	rectangle(535,139,560,200);



	circle(548,124,15); //count



	setfillstyle(SOLID_FILL,RED);

	 circle(547,152,8); //red light

	floodfill(547,152,15);

	circle(547,172,8); //yellow  light

	circle(547,192,8); //green light



	//road

	line(0,318,getmaxx(),318);





     }

     if(g==50)

     {

	cleardevice();

	circle(548,124,15);

	outtextxy(546,122,"2");



		//stop car body

	ellipse(360,335,400,135,150,90);

	line(250,271,250,300);

	line(250,300,288,300);

	circle(303,300,17);

	line(319,300,404,300);

	circle(423,300,17);

	line(443,300,510,300);

	line(250,275,480,275);

	ellipse(490,289,322,486,24,14.9);

	line(305,249,305,275);

	line(390,249,390,275);



	//traffic light

	line(548,200,548,320);

	rectangle(535,139,560,200);



	circle(548,124,15); //count



	setfillstyle(SOLID_FILL,RED);

	 circle(547,152,8); //red light

	floodfill(547,152,15);

	circle(547,172,8); //yellow  light

	circle(547,192,8); //green light



	//road

	line(0,318,getmaxx(),318);





     }



     if(g==80)

     {

	cleardevice();

	circle(548,124,15);

	outtextxy(546,122,"3");



		//stop car body

	ellipse(360,335,400,135,150,90);

	line(250,271,250,300);

	line(250,300,288,300);

	circle(303,300,17);

	line(319,300,404,300);

	circle(423,300,17);

	line(443,300,510,300);

	line(250,275,480,275);

	ellipse(490,289,322,486,24,14.9);

	line(305,249,305,275);

	line(390,249,390,275);



	//traffic light

	line(548,200,548,320);

	rectangle(535,139,560,200);



	circle(548,124,15); //count



	setfillstyle(SOLID_FILL,RED);

	 circle(547,152,8); //red light

	floodfill(547,152,15);

	circle(547,172,8); //yellow  light

	circle(547,192,8); //green light



	//road

	line(0,318,getmaxx(),318);





     }



     if(g==110)

     {

	cleardevice();

	circle(548,124,15);

	outtextxy(546,122,"4");



		//stop car body

	ellipse(360,335,400,135,150,90);

	line(250,271,250,300);

	line(250,300,288,300);

	circle(303,300,17);

	line(319,300,404,300);

	circle(423,300,17);

	line(443,300,510,300);

	line(250,275,480,275);

	ellipse(490,289,322,486,24,14.9);

	line(305,249,305,275);

	line(390,249,390,275);



	//traffic light

	line(548,200,548,320);

	rectangle(535,139,560,200);



	circle(548,124,15); //count



	setfillstyle(SOLID_FILL,RED);

	 circle(547,152,8); //red light

	floodfill(547,152,15);

	circle(547,172,8); //yellow  light

	circle(547,192,8); //green light



	//road

	line(0,318,getmaxx(),318);





     }



     if(g==140)

     {

	cleardevice();

	circle(548,124,15);

	outtextxy(546,122,"5");



		//stop car body

	ellipse(360,335,400,135,150,90);

	line(250,271,250,300);

	line(250,300,288,300);

	circle(303,300,17);

	line(319,300,404,300);

	circle(423,300,17);

	line(443,300,510,300);

	line(250,275,480,275);

	ellipse(490,289,322,486,24,14.9);

	line(305,249,305,275);

	line(390,249,390,275);



	//traffic light

	line(548,200,548,320);

	rectangle(535,139,560,200);



	circle(548,124,15); //count



	setfillstyle(SOLID_FILL,RED);

	 circle(547,152,8); //red light

	floodfill(547,152,15);

	circle(547,172,8); //yellow  light

	circle(547,192,8); //green light



	//road

	line(0,318,getmaxx(),318);





     }



     if(g==170)

     {

       cleardevice();

       circle(548,124,15);

       outtextxy(546,122,"R");



		//stop car body

	ellipse(360,335,400,135,150,90);

	line(250,271,250,300);

	line(250,300,288,300);

	circle(303,300,17);

	line(319,300,404,300);

	circle(423,300,17);

	line(443,300,510,300);

	line(250,275,480,275);

	ellipse(490,289,322,486,24,14.9);

	line(305,249,305,275);

	line(390,249,390,275);



	//traffic light

	line(548,200,548,320);

	rectangle(535,139,560,200);



	circle(548,124,15); //count





	 circle(547,152,8); //red light

	setfillstyle(SOLID_FILL,YELLOW);

	circle(547,172,8); //yellow  light

	floodfill(547,172,15);

	circle(547,192,8); //green light



	//road

	line(0,318,getmaxx(),318);





     }

     if(g==200)

     {

       cleardevice();

       circle(548,124,15);

       outtextxy(546,122,"R");



		//stop car body

	ellipse(360,335,400,135,150,90);

	line(250,271,250,300);

	line(250,300,288,300);

	circle(303,300,17);

	line(319,300,404,300);

	circle(423,300,17);

	line(443,300,510,300);

	line(250,275,480,275);

	ellipse(490,289,322,486,24,14.9);

	line(305,249,305,275);

	line(390,249,390,275);



	//traffic light

	line(548,200,548,320);

	rectangle(535,139,560,200);



	circle(548,124,15); //count



	 circle(547,152,8); //red light

	setfillstyle(SOLID_FILL,YELLOW);

	circle(547,172,8); //yellow  light

	floodfill(547,172,15);

	circle(547,192,8); //green light

	//road

	line(0,318,getmaxx(),318);





     }

     delay(20);



  }

	cleardevice();

	outtextxy(540,118,"go");



		//stop car body

	ellipse(360,335,400,135,150,90);

	line(250,271,250,300);

	line(250,300,288,300);

	circle(303,300,17);

	line(319,300,404,300);

	circle(423,300,17);

	line(443,300,510,300);

	line(250,275,480,275);

	ellipse(490,289,322,486,24,14.9);

	line(305,249,305,275);

	line(390,249,390,275);



	//traffic light

	line(548,200,548,320);

	rectangle(535,139,560,200);



	circle(548,124,15); //count



	 circle(547,152,8); //red light

	setfillstyle(SOLID_FILL,0);

	circle(547,172,8); //yellow  light

	floodfill(547,172,15);



	setfillstyle(SOLID_FILL,GREEN);

	circle(547,192,8); //green light

	floodfill(547,192,15);





	//road

	line(0,318,getmaxx(),318);







}



void last_step()

{





	for(int g=0;g<=400;g++)

	{

		//stop car body

	ellipse(360+g,335,400,135,150,90);

	line(250+g,271,250+g,300);

	line(250+g,300,288+g,300);

	circle(303+g,300,17);

	line(319+g,300,404+g,300);

	circle(423+g,300,17);

	line(443+g,300,510+g,300);

	line(250+g,275,480+g,275);

	ellipse(490+g,289,322,486,24,14.9);

	line(305+g,249,305+g,275);

	line(390+g,249,390+g,275);



	//traffic light

	line(548,200,548,320);

	rectangle(535,139,560,200);



	circle(548,124,15); //count



	 circle(547,152,8); //red light

	setfillstyle(SOLID_FILL,0);

	circle(547,172,8); //yellow  light

	floodfill(547,172,15);



	setfillstyle(SOLID_FILL,GREEN);

	circle(547,192,8); //green light

	floodfill(547,192,15);





	//road

	line(0,318,getmaxx(),318);

	delay(20);

	cleardevice();

       }
}