#include <QApplication>
#include <QPushButton>
#include "RemoteCtrlWindow.h"
#include "./ui_RemoteCtrlUi.h"



int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    RemoteController window(nullptr);
    Ui::MainWindow remoteCtrl;
    remoteCtrl.setupUi(&window);
    window.plainTextEdit = remoteCtrl.plainTextEdit;
    window.resize(263, 680);
    window.showInfo();
    window.show();

    return QApplication::exec();
}
