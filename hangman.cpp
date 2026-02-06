#include "E:\\Mini Mobile\header_files\hangman.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <windows.h>

using namespace std;


// https://chatgpt.com/gg/v/698643d5fd4081948e82a29033fd8425?token=kld_P4XAFSrKGbU3ehUBvA
int choice;
string user_input;
void guess();
void difficulty();
void easy();
void medium();
void difficult();

void guess(){
    cout<<"Guess: ";
    getline (cin, user_input);
}

void difficulty() {
    int choice;
    int try_ = 0; 
    while (true) { 
        
        cin >> choice;
        cin.ignore(); 
        if (choice == 1) {
            easy();
            break; } 
        else if (choice == 2) {
            medium();
            break;} 
        else if (choice == 3) {
            difficult();
            break;} 
        else {
            try_++;
            cout << "Invalid choice. Enter again." << endl;

            if (try_ >= 5) { 
                cout << "Too many invalid attempts. Exiting program." << endl;
                exit(0); 
}}}
}

void play_game(string& user_input, string winning_word){
    
    char ch = winning_word[3];
    cout<<"Hint (Cause you're dumb and foolish) : "<<ch<<endl;

    if(user_input == winning_word)
        cout<<"Correct!"<<endl;
    else{
        cout<<"WRONG! DIEEEE"<<endl;
        cout<<endl<<"=========\n|  😀   |\n|  /|\\  |\n|  /    |\n========="<<endl;
        guess();
        
        if(user_input == winning_word)
            cout<<"Correct!"<<endl;
        else{
            cout<<"WRONG! DIEEEE"<<endl;
            cout<<endl<<"=========\n|  😒   |\n|  /|\\  |\n|       |\n========="<<endl;
            char ch_1 = winning_word[0];
            cout<<"Hint (Cause you're a little tooooo foolish) : "<<ch_1<<","<<ch<<endl;
            guess();
        
            if(user_input == winning_word)
                cout<<"Correct!"<<endl;
            else{
                cout<<"WRONG! DIEEEE"<<endl;
                cout<<endl<<"=========\n|  🙂   |\n|  /|   |\n|       |\n========="<<endl;
                guess();
        
               if(user_input == winning_word)
                    cout<<"Correct!"<<endl;
                else{
                    cout<<"WRONG! DIEEEE"<<endl;
                    cout<<endl<<"=========\n|  😳   |\n|   |   |\n|       |\n========="<<endl;
                    char ch_2 = winning_word[2];
                    cout<<"Hint (Cause you're a little tooooo foolish) : "<<ch_1<<" ,"<<ch_2<<" ,"<<ch<<endl;
                    guess();
                    
                    if(user_input == winning_word)
                        cout<<"Correct!"<<endl;
                    else{
                        cout<<"WRONG! DIEEEE"<<endl;
                        cout<<endl<<"=========\n|  😱   |\n|       |\n|       |\n========="<<endl;
                        guess();
                    
                       if(user_input == winning_word)
                            cout<<"Correct!"<<endl;
                        else{
                            cout<<"WRONG! DIEEEE"<<endl;
                            cout<<endl<<"=========\n|  💀   |\n|       |\n|       |\n========="<<endl;
                            cout<<"You lost. Hangman died, because of your foolishness. Go overthink about it!"<<endl;
                            Sleep(2000);
                            cout<<"I'm not that cruel, the actual word is "<<winning_word<<endl;
                            //user will now be take to main()
    }}}}}}
}

void easy(){
    
    
    string words[] = {  "apple", "bread", "chair", "table", "water",
                        "happy", "smile", "laugh", "sleep", "dream",
                        "light", "sound", "music", "story", "beach",
                        "river", "cloud", "grass", "plant", 
                        "honey", "sugar", "sweet", "salty", "pizza",
                        "pasta", "price", "toast", "juice", 
                        "movie", "dance", "house", "paint", "clock",
                        "write", "snack", "black", "games", "hello",
                        "buddy",  "party", "funny", "silly",
                        "sunny", "rainy", "windy", "quiet"};
                        
    cout<<endl<<"Level EASY";
    Sleep(2000);
    cout<<endl<<"Word Chosen!"<<endl<<"Guess the 5 letter word.";
    cout<<endl<<"Instructions:\n Type a 5 letter word and hit enter. If you guess wrong, dear hangman DIES. Hehe."<<endl;
    
    int size = sizeof(words) / sizeof(words[0]);

    int randomIndex = rand() % size;
    string winning_word = words[randomIndex];
    
    cout<<endl<<"=========\n|   O   |\n|  /|\\  |\n|  / \\  |\n========="<<endl;
    
    
    guess();
    play_game(user_input, winning_word);
    
}    

void medium(){    
    
    string words[] = {  "balance","capture","digital","factory","journey","liberty","monitor","mystery",
                        "network","organic","package","quality","randoms","special","trouble","victory",
                        "welcome","zealots","blanket","explore","freedom","horizon","imagine","journal",
                        "kingdom","library","monster","natural","operate","passage","picture","railway",
                        "science","tangible","umbrella","venture","weather","zealous","outcome"};
                        
    cout<<endl<<"Level MEDIUM";
    Sleep(2000);
    cout<<endl<<"Word Chosen!"<<endl<<"Guess the 7 letter word.";
    cout<<endl<<"Instructions:\n Type a 7 letter word and hit enter. If you guess wrong, dear hangman DIES. Hehe."<<endl;
    
    int size = sizeof(words) / sizeof(words[0]);

    int randomIndex = rand() % size;
    string winning_word = words[randomIndex];
    
    cout<<endl<<"=========\n|  😎   |\n|  /|\\  |\n|  / \\  |\n========="<<endl;
    
    
    guess();
    
    
    play_game(user_input, winning_word);
    
}

void difficult(){
    string words[] = { "basketball", "depression", "earthquake", "journalism", "technology", 
                        "volunteer", "wilderness", "blacksmith", "breakfasts", "centimeter", 
                        "confidence", "foundation", "importance", "journalist", "lighthouse", 
                        "motivation", "particular", "pioneering", "preserving", "reflection", 
                        "reputation", "riverbanks", "scrapbooks", "schoolyard", "spaceships", 
                        "storyboard", "waterproof"};
                        
    cout<<endl<<"Level HARD";
    Sleep(2000);
    cout<<endl<<"Word Chosen!"<<endl<<"Guess the 10 letter word.";
    cout<<endl<<"Instructions:\n Type a 10 letter word and hit enter. If you guess wrong, dear hangman DIES. Hehe."<<endl;
    
    int size = sizeof(words) / sizeof(words[0]);

    int randomIndex = rand() % size;
    string winning_word = words[randomIndex];
    
    cout<<endl<<"=========\n|   O   |\n|  /|\\  |\n|  / \\  |\n========="<<endl;
    
    
    guess();
    
    
    play_game(user_input, winning_word);
    
}

void hangman_game() {
    srand(time(NULL));

    cout<<"Welcome to Hangman 101"<<endl;
    cout<<endl<<"Game Objective:\nYou have to guess the word. You have 6 tries to get it correct."<<endl;
    cout<<endl<<"Select difficulty:\n1.Easy\n2.Medium\n3.Hard"<<endl;

    difficulty();
}