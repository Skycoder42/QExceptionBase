#include "qexceptionbase.h"
//Q_EXCEPTION_BASE_NS_USING

void QExceptionBase::raise() const
{
	throw *this;
}

Q_EXCEPTION_BASE_CLASS *QExceptionBase::clone() const
{
	return new QExceptionBase{*this};
}
