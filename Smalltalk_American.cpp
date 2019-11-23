#include "./includes/Smalltalk_American.h"
#include "./includes/constants.h"

Smalltalk_American::Smalltalk_American(int iPerson):Smalltalk(AMERICAN) {
	this->iPerson = iPerson;
	populatePhrases();
}

Smalltalk_American::Smalltalk_American(std::string myNationality, int iPerson):Smalltalk(myNationality) {
	this->iPerson = iPerson;
	populatePhrases();
}

Smalltalk_American::~Smalltalk_American(void) {

}

void Smalltalk_American::populatePhrases() {
	this->mySmallTalk.push_back(AMERICAN_PHRASE_1);
	this->mySmallTalk.push_back(AMERICAN_PHRASE_2);
	this->mySmallTalk.push_back(AMERICAN_PHRASE_3);
	this->mySmallTalk.push_back(AMERICAN_PHRASE_4);
	this->mySmallTalk.push_back(AMERICAN_PHRASE_5);
}
