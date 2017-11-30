import sys
from PyQt5 import QtCore, QtGui, QtWidgets
from  PyQt5.QtWidgets import QApplication, QMainWindow, QDialog
from mainPage import Ui_MainWindow

app = QApplication(sys.argv)
window = QMainWindow()
ui = Ui_MainWindow()
ui.setupUi(window)

window.show()
sys.exit(app.exec_())
