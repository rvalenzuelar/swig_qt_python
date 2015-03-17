// example.cpp
//
// Implementation

#include "example.h"

// example::example(const QString &in, const QString &out, const QString &suffix)
// example::example(QString &in, QString &out, QString &suffix)
// example::example(const std::string in, const std::string out, const std::string suffix)
example::example(char *in,char *out,char *suffix)
{
	const QString inq(QString::fromLatin1(in));
	const QString outq(QString::fromLatin1(out));
	const QString suffixq(QString::fromLatin1(suffix));

	// Setup the data path
	dataPath.setPath(inq);
	outPath.setPath(outq);
	swpSuffix = suffixq;
	// readSwpDir();
}


example::~example()
{
}

bool example::setInputPath(const QString &in)
{
	dataPath.setPath(in);
	if (dataPath.isReadable()) {
		// readSwpDir();
		return true;
	}
	return false;
}

char *example::getInputPath()
{
	// QString mypath=dataPath.absolutePath();
	// QByteArray byteArray=mypath.toUtf8();
	// return std::string(byteArray.constData());

	// path=byteArray.constData();
	// return path;

	// return std::string("hola");
	// return "hola!!";
	// sprintf("hola");

	time_t ltime;
	time(&ltime);
	return ctime(&ltime);

}
