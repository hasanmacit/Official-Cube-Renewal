arat

self.wndWeb = None

altına ekle

		if app.ENABLE_CUBE_RENEWAL_WORLDARD:
			self.wndCubeRenewal = None

arat

	def __MakeItemSelectWindow(self):
		self.wndItemSelect = uiSelectItem.SelectItemWindow()
		self.wndItemSelect.Hide()

altına ekle

	if app.ENABLE_CUBE_RENEWAL_WORLDARD:
		def __MakeCubeRenewal(self):
			import uicuberenewal
			self.wndCubeRenewal = uicuberenewal.CubeRenewalWindows()
			self.wndCubeRenewal.Hide()

arat

self.__MakeTipBoard()

altına ekle

		if app.ENABLE_CUBE_RENEWAL_WORLDARD:
			self.__MakeCubeRenewal()

arat

		if self.wndItemSelect:
			self.wndItemSelect.Destroy()

altına ekle

		if app.ENABLE_CUBE_RENEWAL_WORLDARD:
			if self.wndCubeRenewal:
				self.wndCubeRenewal.Destroy()
				self.wndCubeRenewal.Close()

arat

del self.wndEnergyBar

altına ekle

		if app.ENABLE_CUBE_RENEWAL_WORLDARD:
			del self.wndCubeRenewal

arat

def CloseWbWindow(self):

altına ekle

	if app.ENABLE_CUBE_RENEWAL_WORLDARD:
		def BINARY_CUBE_RENEWAL_OPEN(self):
			self.wndCubeRenewal.Show()