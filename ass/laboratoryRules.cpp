#include <iostream>
using namespace std;

int main(){
	int rule;
	cout << "Input number (from 1-17) to see the rule ";
	cin >> rule;
	
	cout << "\n";
	switch(rule){
		case 1:
			cout << "GENERL RULE: University Computer Laboratory including Printers may only be used for official University purposes. Private or personal work may not be undertaken without the permission of the NOD"<< endl;
			break;
		case 2:
			cout << "GENERL RULE: Users should not create disturbance or interference with other users"<< endl;
			break;
		case 3:
			cout << "GENERL RULE: Users shall not litter, cause any mess or leave the Laboratory in an untidy State" << endl;
			break;
		case 4:
			cout << "GENERL RULE: Users shall obey all reasonable instructions from the Laboratory Technologist" << endl;
			break;
		case 5:
			cout << "RIGHT OF USE: Users shall only gain access to the Computer Laboratory by providing students ID Card or staff I.D Card or a written authorization to use the Laboratory." << endl;
			break;
		case 6:
			cout << "RIGHT OF USE: Users shall produce a proof of identity at the request of the Laboratory to the Technologist or any University officials."<< endl;
			break;
		case 7:
			cout << "RIGHT OF USE: Users shall not share, distribute or use access identifications or passwords other than those assigned to them." << endl;
			break;
		case 8:
			cout << "RIGHT OF USE: It is the responsibility of the students to log out after using the Comp	uter." << endl;
			break;
		case 9:
			cout << "RIGHT OF USE: Any student who Intentionally or negligently fails to log out will be held responsible for whatever purpose the Computer is used for after the moment." << endl;
			break;
		case 10:
			cout << "USE OF SOFT WARE AND DATA: Users should not attempt to bypass or undermine the system security." << endl;
			break;
		case 11:
			cout << "USE OF SOFT WARE AND DATA: The system security must be observed at all times." << endl;
			break;
		case 12:
			cout << "USE OF SOFT WARE AND DATA: No software that may attempt to alter the network file servers or other equipment be loaded, developed or executed on University Laboratory Computers." << endl;
			break;
		case 13:
			cout << "USE OF SOFT WARE AND DATA: Users shall only access those Laboratory commuters, system or data which has been specifically authorized to use."<< endl;
			break;
		case 14:
			cout << "USE OF SOFT WARE AND DATA: Only the materials related to the users courses and duties at the University may be downloaded from the internet." << endl;
			break;
		case 15:
			cout << "USE OF SOFT WARE AND DATA: Users shall not send messages using email facilities to an individual or a large number of users that may be considered undesirable or harassment by some or one of the recipients." << endl;
			break;
		case 16:
			cout << "USE OF SOFT WARE AND DATA: No body should go away with any of the equipment that belongs to the University from the laboratory" << endl;
			break;
		case 17:
			cout << "ADDITIONAL RULE: No eating, drinking or smoking in the laboratory." << endl;
			break;
		default:
			cout << "There is no rule with the number";
	}
	
	return 0;
}
