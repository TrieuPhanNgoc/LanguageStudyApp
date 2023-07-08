#include "dataset.h"

KoreanDataSet::KoreanDataSet() {}

KoreanDataSet::~KoreanDataSet() {
    this->clear();
}

void KoreanDataSet::initialize(const KoreanDataSetType& type) {
    switch (type) {
        case KoreanDataSet::KoreanDataSetType::BeginnerDataSet01: {
            this->initializeSetBeginnerDataSet01();
            break;
        }
        case KoreanDataSet::KoreanDataSetType::TopikDay3: {
            this->initializeSetTopikDay3();
            break;
        }
        default: {
            break;
        }
    }
}

std::string KoreanDataSet::getValue(const KoreanDataSetType& type, const std::string& key) const {
    switch (type) {
        case KoreanDataSet::KoreanDataSetType::BeginnerDataSet01: {
            break; 
        }
        case KoreanDataSet::KoreanDataSetType::TopikDay3: {
            break;
        }
        default: {
            break;
        }
    }
}

std::string KoreanDataSet::getKeyByIndex(const KoreanDataSetType& type, const int& index) const {
    std::string key_result = "";
    switch (type) {
        case KoreanDataSetType::BeginnerDataSet01: {
            key_result = m_BeginnerDataSet01KeyValue.at(index);
            break;
        }

        case KoreanDataSetType::TopikDay3: {
            key_result = m_TopikDay3KeyValue.at(index);
            break;
        }

        default: {
            break;
        }
    }

    return key_result;
}

void KoreanDataSet::clear() {
    CLEAR_MAPPING(BeginnerDataSet01);
    CLEAR_MAPPING(TopikDay3);
}

void KoreanDataSet::initializeSetBeginnerDataSet01() {
    // English Set
    ADD_VOCABULARY_DATE_SET(BeginnerDataSet01, "Dog", "Con Chó", "개");
    ADD_VOCABULARY_DATE_SET(BeginnerDataSet01, "Bird", "Con Chim", "새");
    ADD_VOCABULARY_DATE_SET(BeginnerDataSet01, "Cat", "Con mèo", "고양이");
    ADD_VOCABULARY_DATE_SET(BeginnerDataSet01, "Milk", "Sữa","우유");
    ADD_VOCABULARY_DATE_SET(BeginnerDataSet01, "Cooking", "Nấu ăn", "요리");
    ADD_VOCABULARY_DATE_SET(BeginnerDataSet01, "Fox", "Con cáo", "여우");
    ADD_VOCABULARY_DATE_SET(BeginnerDataSet01, "Talk", "Nói chuyện", "얘기");
    ADD_VOCABULARY_DATE_SET(BeginnerDataSet01, "Hippo", "Hà mã", "하마");
    ADD_VOCABULARY_DATE_SET(BeginnerDataSet01, "Nose", "Mũi", "코");
    ADD_VOCABULARY_DATE_SET(BeginnerDataSet01, "Guitar", "Guitar", "기타");
    ADD_VOCABULARY_DATE_SET(BeginnerDataSet01, "Piano", "Piano", "피아노");
    ADD_VOCABULARY_DATE_SET(BeginnerDataSet01, "Train", "Tàu lửa", "기차");
    ADD_VOCABULARY_DATE_SET(BeginnerDataSet01, "Grape", "Nho", "포도");
    ADD_VOCABULARY_DATE_SET(BeginnerDataSet01, "Camera", "Camera", "감메라");
    ADD_VOCABULARY_DATE_SET(BeginnerDataSet01, "Tape", "Cuộc băng (băng rôn, băng keo)", "테이프");
}

void KoreanDataSet::initializeSetTopikDay3() {
    ADD_VOCABULARY_DATE_SET(TopikDay3, "Set/Adjust/Fix into/Pitch/Order", "Căng chỉnh/ phù hợp/ bộ", "맞추다");
    ADD_VOCABULARY_DATE_SET(TopikDay3, "Everyday", "Mỗi ngày", "매일");
    ADD_VOCABULARY_DATE_SET(TopikDay3, "Hair", "Tóc", "머리카락");
    ADD_VOCABULARY_DATE_SET(TopikDay3, "Eat", "Ăn", "먹다");
    ADD_VOCABULARY_DATE_SET(TopikDay3, "Interview", "Phỏng vấn","면접");
    ADD_VOCABULARY_DATE_SET(TopikDay3, "Don't know","Không biết", "모리다");
    ADD_VOCABULARY_DATE_SET(TopikDay3, "Gather/Meeting","Họp mặt, tụ họp","모이다/모임");
    ADD_VOCABULARY_DATE_SET(TopikDay3, "Hat","Nón","모자");
    ADD_VOCABULARY_DATE_SET(TopikDay3, "Put on a hat","Đội nón","모자를 쓰다");
    ADD_VOCABULARY_DATE_SET(TopikDay3, "Patterns", "Hoạ tiết / Khuôn / Gương", "무늬");
    ADD_VOCABULARY_DATE_SET(TopikDay3, "Laps", "Đầu gối", "므릎");
    ADD_VOCABULARY_DATE_SET(TopikDay3, "Scared", "Sợ hãi","무십다");
    ADD_VOCABULARY_DATE_SET(TopikDay3, "Stationery Store", "Văn phòng phẩm","문구점");
    ADD_VOCABULARY_DATE_SET(TopikDay3, "Grammar", "Ngữ pháp","문법");
    ADD_VOCABULARY_DATE_SET(TopikDay3, "Text message", "Tin nhắn","문자");
}