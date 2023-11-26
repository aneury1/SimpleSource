
#include <QApplication>
#include "codeeditor.h"
#include "mainwindow.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ///CodeEditor editor;
   /// editor.setWindowTitle(QObject::tr("Code Editor Example"));
   /// editor.show();
    MainWindow window;
    window.show();

    return a.exec();
}
