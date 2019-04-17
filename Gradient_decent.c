//1) Gradient Decent
#include<stdio.h>
#include<stdlib.h>
float data2[24] = {8890.55,8856.00,8856.50,
	8744.70,8840.60,8764.10,
	8898.50,8878.50,8943.60,
	8915.70,8984.94,9019.40,
	9069.60,8911.75,8694.20,
	8791.85,8905.20,8928.45,
	8928.80,8886.15,8635.15,
	8635.15,8771.15,8748.45};
float data1[24] = {1.0,2.0,3.0,4.0,7.0,8.0,9.0,10.0,11.0,14.0,15.0,16.0,17.0,18.0,21.0,22.0,23.0,24.0,25.0,28.0,29.0,30.0,31.0};
float m=1.0,b=8800.0,y;
int i;
float learning_rate = 0.001;
void cal(float m,float b){
	for(i=1;i<=28;i++){
		y = m*i + b;
		printf("%d/02/19 %f \n",i,y);
	}
}
void main()
{
	for(int i = 0;i<24;i++){
		float x = data1[i];
		float y = data2[i];
		float guess = m*x + b;
		float error = y-guess;
		printf("%f %f \n",x,error);
		m = m + error*x* learning_rate;
		b = b + error*learning_rate;
	}
	printf("%f \n",m);
	printf("%f \n",b);
	cal(m,b);
}
/*//2)Least sqaure method
#include<stdio.h>
#include<stdlib.h>

float data2[24] = {8890.55,8856.00,8856.50,
	8744.70,8840.60,8764.10,
	8898.50,8878.50,8943.60,
	8915.70,8984.94,9019.40,
	9069.60,8911.75,8694.20,
	8791.85,8905.20,8928.45,
	8928.80,8886.15,8635.15,
	8635.15,8771.15,8748.45};
float data1[24] = {1.0,2.0,3.0,4.0,7.0,8.0,9.0,10.0,11.0,14.0,15.0,16.0,17.0,18.0,21.0,22.0,23.0,24.0,25.0,28.0,29.0,30.0,31.0};
float m=1.0,b=8800.0,y;
int i;
float learning_rate = 0.001;
void cal(float m,float b){
	for(i=1;i<=28;i++){
		y = m*i + b;
		printf("%d/02/19 %f \n",i,y);
	}
}
void main()
{
	for(int i = 0;i<24;i++){
		float x = data1[i];
		float y = data2[i];
		float guess = m*x + b;
		float error = y-guess;
		m = m + error*x* learning_rate;
		b = b + error*learning_rate;
	}
	printf("%f \n",m);
	printf("%f \n",b);
	cal(m,b);
}
*/