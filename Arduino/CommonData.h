#pragma once

#define STR_NAME(a)	#a

template<class T>
class CommonData
{
  private:
    T OldValue;
    T Value;
    bool State;

  public:
    CommonData(T value)
    {
      Value = value;
      OldValue = value;
      State = false;
    }

    ~CommonData() = default;

    void Set(T value)
    {
      if (value != OldValue)
      {
        Value = value;
        State = true;
      }
    }

    T GetValue()
    {
      return Value;
    }

    T GetOldValue()
    {
      return OldValue;
    }

    bool GetState()
    {
      return State;
    }

    void Update()
    {
      OldValue = Value;
      State = false;
    }

    void Print(const char* Name, bool NewLine = true)
    {
      Serial.println(Name);
      Serial.println(String(STR_NAME(Value)) + " = " + Value);
      Serial.println(String(STR_NAME(OldValue)) + " = " + OldValue);
      Serial.println(String(STR_NAME(State)) + " = " + State);

      if (NewLine)
      {
        Serial.println();
      }
    }
};
