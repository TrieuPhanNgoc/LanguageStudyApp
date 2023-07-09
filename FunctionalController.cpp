#include "FunctionalController.h"

FunctionalCtrl::FunctionalCtrl() {
    m_dataSetPtr.reset(new KoreanDataSet);
}

FunctionalCtrl::~FunctionalCtrl() {}

void FunctionalCtrl::run() {
    bool is_close = false;
    int next_word = 0;
    std::unordered_map<std::string, bool> result_study_map;
    // do {
    //     system("clear");
    //     int randKey = rand() % m_dataSetPtr->getSize();
    //     std::string getKey = m_dataSetPtr->getKeyByIndex(randKey);
    //     printf("How to write '%s' in Korean, 5 seconds for writing down!\n", getKey.c_str ());
    //     sleep(5);
    //     std::string value = m_dataSetPtr->getValue(getKey);
    //     printf(" -----> Answer is: '%s'\n", value.c_str ());
        
    //     printf("Next word? (1/0)\n");
    //     scanf("%d", &next_word);
    //     if (!next_word) {
    //         is_close = true;
    //     }
    // } while (!is_close);
}