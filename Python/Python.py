from Interface import *

if __name__ == "__main__":

	print("Program start\n")

	# ~ Setting data
	a.Set(2)
	b.Set(1.234)
	c.Set("new string")

	# ~ Getting data
	print("Get value")
	print("a = " + str(a.GetValue()))
	print("b = " + str(b.GetValue()))
	print("c = " + str(c.GetValue()))
	print()

	# ~ Print all data
	a.Print("a")
	b.Print("b")
	c.Print("c")

	# ~ Leave it at the end of the loop, after setting the data for all common data
	UpdateAll()

	print("After update all state\n")

	# ~ Print all data
	a.Print("a")
	b.Print("b")
	c.Print("c")

	print("Program end")
