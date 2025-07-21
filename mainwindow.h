#pragma once
#include <QMainWindow>
class CodeEditor;
class SqlHighlighter;

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
private slots:
    void onCursorChanged();
private:
    CodeEditor *textEdit;
    SqlHighlighter *highlighter;
};
