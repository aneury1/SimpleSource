#ifndef CODEEDITOR_H
#define CODEEDITOR_H
#include <QWidget>
#include <QPlainTextEdit>


class CodeEditor : public QPlainTextEdit
{
    Q_OBJECT

    bool _required_save = false;

public:
    CodeEditor(QWidget *parent = nullptr);

    void lineNumberAreaPaintEvent(QPaintEvent *event);
    int lineNumberAreaWidth();

    bool required_save(){
        return _required_save;
    }


protected:
    void resizeEvent(QResizeEvent *event) override;

private slots:
    void updateLineNumberAreaWidth(int newBlockCount);
    void highlightCurrentLine();
    void updateLineNumberArea(const QRect &rect, int dy);



private:
    QWidget *lineNumberArea;
};
#endif // CODEEDITOR_H
