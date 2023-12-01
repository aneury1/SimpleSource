#include "mainwindow.h"
#include <QtWidgets>


MainWindow::MainWindow(): textEditor(new QTextEdit)
{
    setCentralWidget(textEditor);
    createActions();
    createDockWindow();
    createStatusBar();
    setUnifiedTitleAndToolBarOnMac(true);
}

void MainWindow::about()
{
    QMessageBox::about(this, tr("Simple Editor ::"),
                       tr("this is a simple Editor that Allow you write code without dealing of propietary structures regarding "
                          "projects just that. and in the future should customizable."
                          )
   );
}

void MainWindow::createStatusBar()
{
    statusBar()->showMessage(tr("Simple Text editor"));
}

void MainWindow::createDockWindow()
{
    sidePanel1 = new QDockWidget(this);
    sidePanel2 = new QDockWidget(this);
    sidePanel1->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
    sidePanel1->setMaximumWidth(200);
    sidePanel2->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
    sidePanel2->setMaximumWidth(200);

    addDockWidget(Qt::LeftDockWidgetArea, sidePanel1);
    addDockWidget(Qt::RightDockWidgetArea, sidePanel2);
}

void MainWindow::createActions()
{
    fileMenu = menuBar()->addMenu(tr("File"));
    editMenu= menuBar()->addMenu(tr("Edit"));
    searchMenu= menuBar()->addMenu(tr("Search"));
    workSpaceMenu= menuBar()->addMenu(tr("WorkSpace"));
    optionsMenu= menuBar()->addMenu(tr("Options"));
    toolsMenu= menuBar()->addMenu(tr("Tools"));
    viewsMenu= menuBar()->addMenu(tr("Views"));
    windowMenu= menuBar()->addMenu(tr("Window"));
    actionMenu = menuBar()->addMenu(tr("Actions"));
    helpMenu= menuBar()->addMenu(tr("Help"));
    customMenu= menuBar()->addMenu(tr("Custom Menu"));


    QToolBar *toolbar = addToolBar(tr("simple toolbar"));


    QAction *aboutAction = helpMenu->addAction(tr("About"), this, &MainWindow::about);
    aboutAction->setStatusTip(tr("Show the about box"));

    QAction *exitAction = fileMenu->addAction(tr("Exit"), this, &QWidget::close);
    aboutAction->setStatusTip(tr("Close the App"));

}
