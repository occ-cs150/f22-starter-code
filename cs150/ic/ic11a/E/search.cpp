#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <stdexcept>
#include <vector>
using namespace std;

#include "search.h"

string STUDENT = "WHO AM I?"; // Add your Canvas/occ-email ID


// ADD RECURSIVE BINARY SEARCH HERE
bool binarySearch(const vector<string>& dictionary,
            const string& word, int& compares)
{
    return false;
}

// ADD RECURSIVE BINARY SEARCH HELPER HERE
bool binaryHelper(const vector<string>& dictionary,
            const string& word, size_t begin, size_t end, int& compares)
{
    return false;
}

vector<WORD> spellCheck(istream& in,
        const vector<string>& dictionary, const vector<string>& ignore)
{
    vector<WORD> words;

    string word;
    while (in)
    {
        long pos = in.tellg();
        if (pos == -1)
            break;
        in >> word;

        cleanUp(word);
        // remove leading and trailing punctuation
        if (word.length() == 0 || word[0] == '\0')
            continue;

        bool done = false;
        // 1. look through misspelled words already encountered
        for (unsigned i = 0; i < words.size(); i++)
        {
            if (words[i].word == word)
            {
                words[i].pos.push_back(pos);
                done = true;
                break;
            }
        }

        if (done) continue;

        // 2. look through excluded words (shorter than dictionary)
        for (unsigned i = 0; i < ignore.size(); i++)
        {
            if (ignore[i] == word)
            {
                done = true;
                break;
            }
        }

        if (done) continue;

        // 3. See if the word is in the dictionary
        //// LINEAR SEARCH - REPLACE WITH RECURSIVE BINARY SEARCH
        int compares = 0;
        if (testNo == 1)
        {
            for (unsigned i = 0; i < dictionary.size(); i++)
            {
                compares++;
                if (word == dictionary[i])
                {
                    done = true;
                    break;
                }
            }
        }
        else if (testNo == 2)
        {
            done = binarySearch(dictionary, word, compares);
        }
        else if (testNo == 3)
        {
            done = binaryHelper(dictionary, word, 0, dictionary.size(), compares);
        }

        if (done) continue;


        // Got here so we have a new misspelled word
        WORD w;
        w.word = word;
        w.pos.push_back(pos);
        w.compares = compares;
        words.push_back(w);
    }

    return words;
}
