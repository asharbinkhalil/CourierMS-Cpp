#pragma once
#include "UrgentMS.h"
#include "RegularMS.h"
#include "Mails.h"

class MailService {
public:
	Mails* m;      //composition
	RegularMS rms;     //aggregation
	UrgentMS ums;      //aggregation
	MailService();
	virtual ~MailService();
};