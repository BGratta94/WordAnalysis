#ifndef DICTIONARYFORM_H
#define DICTIONARYFORM_H

#include <QWidget>
class rti_dictionary;
class DictionaryModel;
class QTableView;
class QLabel;
class QComboBox;
class QCheckBox;
class QPushButton;
class QLineEdit;
class QSortFilterProxyModel;

class DictionaryForm : public QWidget
{
    Q_OBJECT
public:
    explicit DictionaryForm(QMap<QString, rti_dictionary *> dictMap, QWidget *parent = 0);
    explicit DictionaryForm(std::map<std::string, rti_dictionary *> dictMap, QWidget *parent = 0);

private slots:
    void search(QString searchTerm);
    void showOnlyIncompleteWords(bool incomplete);
    void importFromMaster();
    void deleteDictionary();

private:
    void init(QMap<QString, rti_dictionary *> dictMap);
    void createInterface();
    void layoutInterface();

    // Data
    QMap<QString, rti_dictionary *> dictionaryMap;
    DictionaryModel *dictionaryModel;
    QSortFilterProxyModel *proxyModel;

    // GUI
    QTableView *dictionaryView;

    QLabel *dictionaryLabel;
    QComboBox *dictionaryComboBox;
    QCheckBox *incompleteWordsCheckBox;
    QLabel *searchLabel;
    QLineEdit *searchLineEdit;
    QPushButton *importFromMasterButton;
    QPushButton *deleteDictionaryButton;
};

#endif // DICTIONARYFORM_H
