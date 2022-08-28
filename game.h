#include<ctime>

	class game {
	public:
		game();
		virtual ~game();

		//operators

		//functions
		void mainMenu();
		inline bool getPlaying() const { return this->playing; }
	void initGame();
//	void shuffle();

	// Accessors

	// Modifiers

private:
	int choice;
	bool playing;


};

