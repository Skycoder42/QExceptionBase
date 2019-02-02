#include "qexceptionbase.h"
using namespace generated;

void QExceptionBase::raise() const
{
	throw *this;
}

Q_EXCEPTION_BASE_CLASS *QExceptionBase::clone() const
{
	return new QExceptionBase{*this};
}
