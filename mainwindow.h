#pragma once
#include <QWidget>
class CodeEditor;
class SqlHighlighter;

class MainWindow : public QWidget
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
