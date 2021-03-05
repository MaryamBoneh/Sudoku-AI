#include <fstream>
#include <QMainWindow>
#include "QLineEdit"
#include <sudoku.h>
#include "ui_mainwindow.h"


#define UNASSIGNED 0
#define N 9


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    int matrix[N][N];
    QLineEdit *tb[N][N];
    Sudoku *sudoku;
    int old_row;
    int old_col;

private slots:
    void newGame();
    void solveGame();
    void updateBoard();
    void slotShowCell(int row, int col, int num);
    void slotHideCell(int row, int col);
};
