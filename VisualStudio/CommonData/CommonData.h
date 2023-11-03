#pragma once

#define STR_NAME(a)	#a

using namespace std;

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
		cout << Name << "\n";
		cout << STR_NAME(Value) << " = " << Value << "\n";
		cout << STR_NAME(OldValue) << " = " << OldValue << "\n";
		cout << STR_NAME(State) << " = " << State << "\n";

		if (NewLine)
		{
			cout << "\n";
		}
	}
};
