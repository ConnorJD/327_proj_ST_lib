#include "./includes/Smalltalk.h"
#include "./includes/constants.h"

using namespace std;

Smalltalk::Smalltalk(std::string myNationality, int iPerson) {
	Smalltalk::iPerson = iPerson;
	Smalltalk::current_phrase = 0;
}

Smalltalk::~Smalltalk(void) {

}

std::string Smalltalk::saySomething() {
	std::string phrase = this->mySmallTalk.at(this->current_phrase);
	if(this->current_phrase == this->mySmallTalk.size() - 1) {
		this->current_phrase = 0;
	}
	else {
		this->current_phrase++;
	}
	return phrase;
}

std::string Smalltalk::getTime() {
	if(pWatch.get() == 0) {
		return I_DO_NOT_HAVE_A_WATCH;
	}
	else {
		return pWatch.get()->getTime();
	}
}

std::unique_ptr<Watch> Smalltalk::takeWatch() {
	std::unique_ptr<Watch> Empty;
	if(this->pWatch.get() == 0) {
		return Empty;
	}
	else {
		std::unique_ptr<Watch> taken = std::move(this->pWatch);
		return taken;
	}
}

bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch) {
	if(this->pWatch.get() == 0) {
		this->pWatch = std::move(pWatch);
		return true;
	}
	else {
		return false;
	}
}
