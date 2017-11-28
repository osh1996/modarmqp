from PyQt5 import QtCore, QtGui
from PyQt5.QtWidgets import QWidget
from PyQt5.QtWidgets import QApplication
import sys
import design


class ExampleApp(QMainWindow):
    def __init__(self, parent=None):
        super(ExampleApp, self).__init__(parent)
        self.setupUi(self)

def main():
    app = QApplication(sys.argv)
    form = ExampleApp()
    form.show()
    app.exec_()

if __name__ == '__main__':
    main()
