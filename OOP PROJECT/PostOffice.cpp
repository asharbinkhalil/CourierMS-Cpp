#include<cstring>
#include "PostOffice.h"
PostOffice::PostOffice(int uid, char* cityy)
{
	uniqueId = uid;
	strcpy_s(city, cityy);
}
PostOffice::PostOffice() {
	// TODO Auto-generated constructor stub

}
int PostOffice::getUniqueId() const {
	return uniqueId;
}

void PostOffice::setUniqueId(int uniqueId) {
	this->uniqueId = uniqueId;
}

PostOffice::~PostOffice() {
	// TODO Auto-generated destructor stub
}
