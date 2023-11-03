#pragma once
#include "CommonData.h"

//Create new common data
CommonData<int> a(5);
CommonData<float> b(5.123f);
CommonData<String> c("old string");

//Update all state of common data
void UpdateAll()
{
  a.Update();
  b.Update();
  c.Update();
}
