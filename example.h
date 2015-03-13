// example.h
// 
// Class declaration

#ifndef EXAMPLE_H
#define EXMAPLE_H

#include <QDir>

class example{

public:

	example(const QString& in, const QString& out, const QString& suffix);
    example();
	virtual ~example();
	bool setInputPath(const QString& in);

private:

	QDir dataPath;
	QDir outPath;
	QString swpSuffix;	

};

#endif
