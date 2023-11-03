from CommonData import *

# ~ Create new common data
a = CommonData(5)
b = CommonData(5.123)
c = CommonData("old string")

# ~ Update all state of common data
def UpdateAll():
	a.Update()
	b.Update()
	c.Update()
