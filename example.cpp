// example.cpp
//
// Implementation

#include "example.h"

example::example(const QString& in, const QString& out, const QString& suffix)
{
	// Setup the data path
	dataPath.setPath(in);
	outPath.setPath(out);
	swpSuffix = suffix;
	// readSwpDir();
}

example::example()
{
	// Setup the data path
	dataPath.setPath(".");
	outPath.setPath(".");
	swpSuffix = "QC";
}

example::~example()
{
}

bool example::setInputPath(const QString& in)
{
	dataPath.setPath(in);
	if (dataPath.isReadable()) {
		// readSwpDir();
		return true;
	}
	return false;
}