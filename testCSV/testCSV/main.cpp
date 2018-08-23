#include <QtCore/QCoreApplication>
#include "xlsxdocument.h"
#include <QDate>
#include <QFont>
#include <qDebug>
#include <QLocale>
QTXLSX_USE_NAMESPACE
int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	//{
	//	//Create a new .xlsx file.
	//	QXlsx::Document xlsx;
	//	xlsx.write("A1", "Hello Qt!");
	//	xlsx.write("A2", 12345);
	//	xlsx.write("A3", "=44+33");
	//	xlsx.write("A4", true);
	//	xlsx.write("A5", "http://qt-project.org");
	//	xlsx.write("A6", QDate(2013, 12, 27));
	//	xlsx.write("A7", QTime(6, 30));
	//	xlsx.saveAs("Book1.xlsx");
	//}

	//![0]
	QXlsx::Document xlsx("PartPro350xBC-CostCal-template.xlsx");
	//![0]
	xlsx.write("C5", QTime(6, 30));
	xlsx.write("C6",144);
	xlsx.write("C7",0.1016);
	xlsx.write("C8", 60);
	xlsx.write("C9", QTime(6, 30));

	xlsx.write("C11", 41);
	xlsx.write("C12", 4);
	xlsx.write("C13", 1);
	xlsx.write("C14",1);

	
	xlsx.write("C16",23);
	xlsx.write("C17", 55);
	xlsx.write("C18", 238);
	xlsx.write("C19", 200);

	

	//![1]
	
	//![1]

	//![2]
	/*for (int row = 1; row<10; ++row) {
		if (QXlsx::Cell *cell = xlsx.cellAt(row, 1))
			qDebug() << cell->value();
	}*/
	//![2]

	xlsx.save();
	system("pause");
	return 0;
	//return a.exec();
	
}
