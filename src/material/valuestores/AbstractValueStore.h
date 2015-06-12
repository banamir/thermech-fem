//
// Created by banamir on 11.06.15.
//

#ifndef THERMECH_FEM_ABSTRACTVALUESTORE_H
#define THERMECH_FEM_ABSTRACTVALUESTORE_H

#include "../material-init.h"
#include <vector>

namespace material {

    using namespace std;


    class AbstractValueStore {
    private:

        int dim;
        vector <int> indexes;

    public:
        //Constructors
        AbstractValueStore(int dim) {
            this->dim = dim;
            this->indexes = vector<int>(dim);
        }

        AbstractValueStore(vector <int> indexes) {
            this->indexes = indexes;
            this->dim = indexes.size();
        }

        AbstractValueStore setIndex(int index, int value) {
            this->indexes[index] = value;
            return this;
        }

        //Methods

        int getDim() {
            return this->dim;
        }

        int getIndex(int index) const {
            return this->indexes[index];
        }

        virtual Value get(vector<int> raw_values) const;

        Value getByIndex(vector <int> values) const {
            vector <int> raw_values = vector<int>(this->dim);

            for (int i = 0; i < this->dim; i++) {
                raw_values[i] = values[this->indexes[i]];
            }

            return get(raw_values);
        }
    };

}


#endif //THERMECH_FEM_ABSTRACTVALUESTORE_H
