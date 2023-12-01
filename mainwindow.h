#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>
#include <QLabel>
#include <QFrame>
#include <QVBoxLayout>
#include <QContextMenuEvent>
#include <QStatusBar>
#include <QAction>
#include <QMessageBox>
#include <QMenuBar>
#include <QMenu>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
class QAction;
class QMenu;
class QTextEdit;
QT_END_NAMESPACE

class CodeEditor;

class MainWindow : public QMainWindow{

    Q_OBJECT;

    public:

        MainWindow();


    private slots:

        void about();

    private:

        void createStatusBar();
        void createDockWindow();
        void createActions();


        QDockWidget *sidePanel1;
        QDockWidget *sidePanel2;

        //// Top Menus
        QMenu *fileMenu;
        QMenu *editMenu;
        QMenu *searchMenu;
        QMenu *workSpaceMenu;
        QMenu *optionsMenu;
        QMenu *toolsMenu;
        QMenu *viewsMenu;
        QMenu *windowMenu;
        QMenu *actionMenu;
        QMenu *helpMenu;
        QMenu *customMenu;

        QMenu* viewMenu;
        QTextEdit *textEditor;
        CodeEditor *codeEditor;
};


#endif // MAINWINDOW_H
