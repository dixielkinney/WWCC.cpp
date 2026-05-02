// Coding Assignment 2: Personal Playlist Manager

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

struct Artist {
    string artistName;
    string artistHometown;
};

struct Song {
    string songTitle;
    Artist songArtist;
    string songGenre;
    int durationSeconds;
};

string songDuration(int seconds) {
    int minutes = seconds / 60;
    int secs = seconds % 60;

    string secondsString = (secs < 10) ? "0" + to_string(secs) : to_string(secs);
    return to_string(minutes) + ":" + secondsString;
}

string comparisionString(string str) {
    for(int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

void displaySong(const Song& s) {
    cout << "Title: " << s.songTitle << endl;
    cout << "Artist: " << s.songArtist.artistName << endl;
    cout << "Genre: " << s.songGenre << endl;
    cout << "Duration: " << songDuration(s.durationSeconds) << endl;
}

int main() {
    const int size = 5;
    Song playlist[size];

    int totalSeconds = 0;
    int longestSong = 0;
    
    cout << "PERSONAL PLAYLIST MANAGER" << endl;
    cout << "-------------------------" << endl;

    for(int i =0; i < size; i++) {
        cout << "Enter Information for Song " << i + 1 << endl;
        
        cout << "Title: ";
        getline(cin, playlist[i].songTitle);

        cout << "Artist Name: ";
        getline(cin, playlist[i].songArtist.artistName);

        cout << "Artist Hometown: ";
        getline(cin, playlist[i].songArtist.artistHometown);

        cout << "Genre: ";
        getline(cin, playlist[i].songGenre);

        cout << "Duration (in seconds): ";
        cin >> playlist[i].durationSeconds;
        cin.ignore();

        totalSeconds += playlist[i].durationSeconds;
        
        if(playlist[i].durationSeconds >playlist[longestSong].durationSeconds) {
            longestSong = i;
        }
    }

    cout << "YOUR PLAYLIST" << endl;
    cout << "-------------" << endl;

    for(int i = 0; i < size; i++) {
        displaySong(playlist[i]);
    }

    cout << "Playlist Statistics: " << endl;
    cout << "Total Runtime: " << songDuration(totalSeconds) << endl;
    cout << "Longest Song ";
    displaySong(playlist[longestSong]);

    string searchArtist;
    cout << "ARTIST SEARCH" << endl;
    cout << "-------------" << endl;
    cout << "Enter an artist name to search: ";
    getline(cin, searchArtist);
    searchArtist = comparisionString(searchArtist);
    bool foundArtist = false;

    cout << "Songs by " << searchArtist << ":" << endl;
    for(int i = 0; i < size; i++) {
        if(comparisionString(playlist[i].songArtist.artistName) == searchArtist) {
            displaySong(playlist[i]);
            foundArtist = true;
        }
    }
    if(!foundArtist) {
        cout << "Not song founds for that artist.";
    }

    string searchGenre;
    cout << "Enter genre type to search: ";
    getline(cin, searchGenre);
    searchGenre = comparisionString(searchGenre);
    bool foundGenre = false;

    cout << "Songs in the "" << searchGenre << "" genre: ";
    for(int i = 0; i < size; i++) {
        if(comparisionString(playlist[i].songGenre) == searchGenre) {
            displaySong(playlist[i]);
            foundGenre = true;
        }
    }
    if(!foundGenre) {
        cout << "No songs found in this genre.";
    }

    return 0;
}