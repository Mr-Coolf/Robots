﻿void setup()    //Блок настроект. Здесь указываются все параметры для настройки портов(пинов) микроконтроллера.
{               //Также сдеать происходит инициализация некоторых модулей. Этот блок повторяется только 
}               //один раз при запуске контроллера.
void loop()     //Блок цыкла. Здесь вписываются все действия которые должен выполнять контроллер.
{               //Эти действия будут выполнятся бесчисленнео количество раз." Пока есть питание."
}
#define Led 5          //Заменяет 5 на Led.Очень полезно когда большой код, и не помнишь какйо пин за что отвечает
#define Rez A0         //Мы заранее вводим такое название, что бы мы знали, за какйо модуль отвечает порт
int LED=5,b            //Задвать значение порта можно и так. Но в рельности это переменная, которая равна 5! (5,14,42...)
digitalWrite(LED,HIGH/LOW);     //Задает высокий или низкий уровень на ножке контроллера (D2..D13)Либо 0 либо 1. 0|5 Вольт
pinMode(LED,OUTPUT/* Сигнал выдает*//INPUT /*Сингнал принимает*/);      //Задает режим работы. Ножка отдает или принимает. 
b=analogRead(Rez);              //Считывает значение с аналогового порта А0 (#define Rez A0) И присваивает это значение b!
for(int x = 1; x < 100; x++)    //Цыкл, работает пока х не станет 100. Каждые пол секунды х увеличивается на 1 (x++).
{                                 
    println(x);                 //Выводит значение х на монитор.
    delay(500);
}                  //Задержка в пол секунды. 500 милисекунд = 0.5 секунды.
Serial.begin(9600);             //Создает соединение с компьютером для обмена данных по сериал порту на скорости 9600 бод.
Serial.println(x);            //Выводит значение х в Сериал порт.
