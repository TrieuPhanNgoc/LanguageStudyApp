#ifndef _DATA_SET_H_
#define _DATA_SET_H_
#include <unordered_map>
#include <vector>
#include <iostream>

#define INIT_DATE_SET(M) \
    std::unordered_map<std::string, std::string> m_##M; \
    std::vector<std::string> m_##M##KeyValue; \
    KoreanDataSet::VocabularyHolder m_Vocabulary##M##Holder; \
    void initializeSet##M();\

#define ADD_DATE_SET(M, key, value) \
    M.insert(std::pair<std::string, std::string>(key, value));

#define ADD_VOCABULARY_DATE_SET(M, english, vietnamese, korean) \
    m_##M##KeyValue.push_back(korean); \
    m_Vocabulary##M##Holder.m_EngKor.insert(std::pair<std::string, std::string>(korean, english)); \
    m_Vocabulary##M##Holder.m_VietKor.insert(std::pair<std::string, std::string>(korean, vietnamese));

#define CLEAR_MAPPING(M) \
    m_##M##KeyValue.clear(); \
    m_Vocabulary##M##Holder.m_EngKor.clear(); \
    m_Vocabulary##M##Holder.m_VietKor.clear();

class KoreanDataSet {
    public:
        struct VocabularyHolder{ \
            std::unordered_map<std::string, std::string> m_VietKor;
            std::unordered_map<std::string, std::string> m_EngKor;
        };

    public:
        typedef enum {
            BeginnerDataSet01 = 0,
            BeginnerDataSet02,
            TopikDay1,
            TopikDay2,
            TopikDay3,
            TopikDay4,
            TopikDay5,
            TopikDay6,
        } KoreanDataSetType;

        typedef enum {
            VIETNAMESE = 0,
            ENGLISH,
            KOREAN
        } Language;
        
    public:
        KoreanDataSet();
        ~KoreanDataSet();
        void initialize(const KoreanDataSetType& type);
        std::string getValue(const KoreanDataSetType&, const std::string&) const;
        std::string getKeyByIndex(const KoreanDataSetType&, const int&) const;
        int getSize() const;
        void clear();

    private:
        INIT_DATE_SET(BeginnerDataSet01);
        // INIT_DATE_SET(beginnerDataSet02);
        // INIT_DATE_SET(topikDay1);
        // INIT_DATE_SET(topikDay2);
        INIT_DATE_SET(TopikDay3);
        // INIT_DATE_SET(topikDay4);
        // INIT_DATE_SET(topikDay5);
        // INIT_DATE_SET(topikDay6);
};

#endif