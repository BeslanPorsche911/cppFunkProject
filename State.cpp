#include <iostream>
using namespace std;

class State {
public:
	virtual ~State() = default;
	virtual void play() = 0;
	virtual void pause() = 0;
	virtual void stop() = 0;
};
	
class MusicPlayer {
private:
	State* currentState;
	State* playingState;
	State* stoppedState;
	State* pausedState;
public:
	/*MusicPlayer(State* stoppedState, State* playingState, State* pausedState) :
		stoppedState(stoppedState), playingState(playingState), pausedState(pausedState);*/
	MusicPlayer();

	~MusicPlayer() {
		delete stoppedState;
		delete pausedState;
		delete playingState;
	}

	void setState(State* state) {
		currentState = state;
	}

	void play() {
		currentState->play();
	}
	
	void stop() {
		currentState->stop();
	}

	void pause() {
		currentState->pause();
	}

	State* getStoppedState() {
		return stoppedState;
	}
	State* getPlayingState() {
		return playingState;
	}
	State* getPausedState() {
		return pausedState;
	}


};

class StoppedState : public State {
private:
	MusicPlayer* player;
public:
	StoppedState(MusicPlayer* player):player(player){}
	void play() {
		cout << "Starting playback" << endl;
		player->setState(player->getPlayingState());
	}
	void stop() {
		cout << "Alredy stopped" << endl;
	}
	void pause() {
		cout << "Alredy stopped" << endl;
	}
};
class PausedState : public State {
private:
	MusicPlayer* player;
public:
	PausedState(MusicPlayer* player) :player(player) {}
	void play() {
		cout << "Starting playback" << endl;
		player->setState(player->getPausedState());
	}
	void stop() {
		cout << "Stopped" << endl;
		player->setState(player->getPlayingState());
	}
	void pause() {
		cout << "pausing " << endl;
		
	}
};
class PlayingState : public State {
private:
	MusicPlayer* player;
public:
	PlayingState(MusicPlayer* player) :player(player) {}
	void play() {
		cout << "Alredy playing" << endl;
	}
	void stop() {
		cout << "Pausing playback" << endl;
		player->setState(player->getPlayingState());
	}
	void pause() {
		cout << "Stopped playback" << endl;
		player->setState(player->getPausedState());
	}
};
MusicPlayer::MusicPlayer() {
	this->stoppedState = new StoppedState(this);
	this->playingState = new PlayingState(this);
	this->pausedState = new PausedState(this);
	currentState = stoppedState;
}
int main()
{
	MusicPlayer player;
	player.play();
	player.play();

}

