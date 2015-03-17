// example.h
// 
// Class declaration

#ifndef EXAMPLE_H
#define EXMAPLE_H

#include <QDir>
#include <QString>
#include <string>

#include <time.h>

class example{

public:

	// example(const QString& in, const QString& out, const QString& suffix);
	// example(QString& in, QString& out, QString& suffix);
	// example(const std::string in, const std::string out, const std::string suffix);
	example(char *in,char *out,char *suffix);
	virtual ~example();
	bool setInputPath(const QString& in);
	char *getInputPath();

private:

	QDir dataPath;
	QDir outPath;
	QString swpSuffix;	

};

#endif
