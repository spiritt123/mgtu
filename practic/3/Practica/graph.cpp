#include "graph.h"
#include "ui_graph.h"

Graph::Graph(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Graph)
{
    ui->setupUi(this);

    connect(ui->Exit, SIGNAL(clicked(bool)),this,SLOT(close()));
}

Graph::~Graph()
{
    delete ui;
}

