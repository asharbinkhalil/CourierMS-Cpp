#pragma once
#include "ReturnedMails.h"
#include "BouncedMails.h"
class Mails {
	BouncedMails bm;
	ReturnedMails rm;
public:
	Mails();
	virtual ~Mails();
};