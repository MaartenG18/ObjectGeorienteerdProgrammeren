#include <string>
#include <iostream>

std::string translatedSentence{}; // initialize an empty sentence for the translation

void translate(std::string, int length); // initializer for the translate function

int main()
{
	std::string word{}; // initialize an empty word to be translated
	std::string sentence{}; // initialize an empty sentence
	
	std::cout << "Please enter a sentence to translate\n";

	std::getline(std::cin, sentence); // put the input inside the string called sentence

	for (int i = 0; i < sentence.length(); i++)
	{
		if (isspace(sentence[i])) // checking for a space in the sentence to select a full word
		{
			translate(sentence.substr(0, i), i - 1); // selecting the first word and passing it to the translate function.
			sentence = sentence.substr(i + 1); // removing the first word from the sentence
			i = 0; // starting again at the start of the sentence
		}
		else if (i == sentence.length() - 1)
		{
			translate(sentence.substr(0, i + 1), i); // selecting the first word and passing it to the translate function
			sentence = sentence.substr(i + 1); // removing the first word from the sentence
			i = 0; // starting again at the start of the sentence
		}
	}

	std::cout << translatedSentence; // output the translated sentence

	return 0;
}

void translate(std::string word, int length) // translate function, receiving a word to translate and the length of the word
{
	translatedSentence.append(word.substr(1, length)); // appending the full word except the first letter to the translated sentence
	translatedSentence.append(std::string(1, word.front())); // appending the first letter to the translated sentence
	translatedSentence.append("ay "); // appending the specific Pig Latin letters to the end of the translated sentence
}