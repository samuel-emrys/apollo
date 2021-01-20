#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "searchbox.h"
#include "indicatorcombobox.h"
#include "portfoliocombobox.h"
#include "pfdecompositioncheckbox.h"
#include "timeframecombobox.h"
#include "plotlist.h"
#include "interactivechart.h"
#include <QHBoxLayout>
#include <QVBoxLayout>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QWidget *centralWidget;
    unsigned const MIN_WIDTH = 600;
    unsigned const MIN_HEIGHT = 350;
};

#endif // MAINWINDOW_H
