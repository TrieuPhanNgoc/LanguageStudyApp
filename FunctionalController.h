#ifndef _FUNCTIONAL_CTRL_H_
#define _FUNCTIONAL_CTRL_H_

#include "dataset.h"
#include <cstdlib>
#include <unistd.h>

class FunctionalCtrl {
    public:
        FunctionalCtrl();
        ~FunctionalCtrl();
        void run();
    private:
        std::shared_ptr<KoreanDataSet> m_dataSetPtr;
};

#endif /* _FUNCTIONAL_CTRL_H_ */