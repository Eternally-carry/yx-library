# include<stdio.h>
/*函数定义*/
double input_Celsius(int,double); //输入摄氏温度的函数
double input_Kelvin_temperature(int,double); //输入开氏温度的函数
double input_Fahrenheit(int,double); //输入华氏温度的函数
void error(void);
/*变量定义*/
const double Celsius_And_Kelvin_temperature = 273.16;//摄氏温度和开氏温度
const double Celsius_And_Fahrenheit = 32.0; //华氏温度和摄氏温度
int input_unit; //用于记录输入单位
int output_unit; //用于记录输出单位
/*保存用户输入的数据*/
double Celsius; 
double Kelvin_temperature; 
double Fahhrenheit;

int main(void)
{
    
    /*
        开氏温度单位选择值为：1
        摄氏温度单位选择值为：2
        华氏温度单位选择值为：3
    */
}

double input_Celsius(int output,double Celsius)
{
    double outcome; //储存返回结果的变量
    if (output_unit == 1) //输出单位为开氏温度
    {
        outcome = Celsius + Celsius_And_Kelvin_temperature;
    }
    else if (output_unit == 3) //输出单位为华氏温度
    {
        outcome = 5.0 / 9.0 * (Fahhrenheit + Celsius_And_Fahrenheit);
    }
    else
    {
        error //转跳到错误函数
    }
    
    
    
    return outcome(main);
}