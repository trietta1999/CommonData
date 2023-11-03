class CommonData:
	def __init__(self, value):
		self.OldValue = value
		self.Value = value
		self.State = False

	def Set(self, value):
		if (value != self.OldValue):
			self.Value = value
			self.State = True

	def GetValue(self):
		return self.Value

	def GetOldValue(self):
		return self.OldValue

	def GetState(self):
		return self.State

	def Update(self):
		self.OldValue = self.Value
		self.State = False

	def Print(self, Name, NewLine = True):
		print(Name);
		print("Value = " + str(self.Value))
		print("OldValue = " + str(self.OldValue))
		print("State = " + str(self.State))
		if (NewLine): print()
