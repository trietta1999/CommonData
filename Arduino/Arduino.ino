#include "Interface.h"

void setup()
{
  Serial.println("Program start");
  Serial.println();

  //Setting data
  a.Set(2);
  b.Set(1.234f);
  c.Set("new string");

  //Getting data
  Serial.println("Get value");
  Serial.println(String("a = ") + a.GetValue());
  Serial.println(String("b = ") + b.GetValue());
  Serial.println(String("c = ") + c.GetValue());

  //Print all data
  a.Print("a");
  b.Print("b");
  c.Print("c");

  //Leave it at the end of the loop, after setting the data for all common data
  UpdateAll();

  Serial.println("After update all state");
  Serial.println();

  //Print all data
  a.Print("a");
  b.Print("b");
  c.Print("c");

  Serial.println("Program end");
}

void loop() {}
