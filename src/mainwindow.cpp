#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->centralWidget = new QWidget(this);
    this->setMinimumSize(this->MIN_WIDTH, this->MIN_HEIGHT);

    QWidget *navigationPane = new QWidget();
    navigationPane->setMaximumWidth(200);
    //Create layout

    QVBoxLayout *vLayout = new QVBoxLayout();
    QHBoxLayout *mainLayout = new QHBoxLayout(this->centralWidget);

    //create search box
    SearchBox *searchTextField = new SearchBox();

    //create indicator combo box
    IndicatorComboBox *indicatorComboBox = new IndicatorComboBox();

    //create portfolio combo box
    PortfolioComboBox *pfComboBox = new PortfolioComboBox();

    //create decompose portfolio checkbox
    QHBoxLayout *checkboxLayout = new QHBoxLayout();
    QLabel *decomposeLabel = new QLabel("Decompose Portfolio");
    PFDecompositionCheckBox *decomposeSelector = new PFDecompositionCheckBox();
    checkboxLayout->addWidget(decomposeLabel);
    checkboxLayout->addWidget(decomposeSelector);

    //create time frame combo box
    TimeFrameComboBox *timeFrameComboBox = new TimeFrameComboBox();

    //create list box
    PlotList *plottedItems = new PlotList();

    //create interactive chart
    InteractiveChart *chart = new InteractiveChart();

    vLayout->addWidget(searchTextField);
    vLayout->addWidget(indicatorComboBox);
    vLayout->addWidget(pfComboBox);
    vLayout->addLayout(checkboxLayout);
    vLayout->addWidget(timeFrameComboBox);
    vLayout->addWidget(plottedItems);

    navigationPane->setLayout(vLayout);

    mainLayout->addWidget(navigationPane);
    mainLayout->addWidget(chart);
    this->setCentralWidget(this->centralWidget);



}

MainWindow::~MainWindow()
{
    delete ui;
}
