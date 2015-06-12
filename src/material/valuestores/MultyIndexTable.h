//
// Created by banamir on 11.06.15.
//

#ifndef THERMECH_FEM_MULTYINDEXTABLE_H
#define THERMECH_FEM_MULTYINDEXTABLE_H

#include "../material-init.h"

#include "AbstractValueStore.h"

#include<vector>
#include<stdexcept>

namespace material {

    using namespace std;

    class MultiIndexTable : AbstractValueStore {

    private:

        vector <vector<Value>> axis;

        vector<Value> table;

    public:

        MultiIndexTable(vector <int> indexes,vector<int>  axisSizes) : AbstractValueStore(indexes) {
            if (axisSizes.size() < this->dim)
                throw runtime_error("array size of max values must'be equal to Table dimention");

            this->axis = vetctor<vector<Value>>(dim);

            int table_size = 1;
            int axis_size;
            for(int i = 0; i<dim; i++) {
                axis_size = axisSizes[i]
                this->axsis[i] = vector<Value>(axis_size);
                table_size *= axis_size;
            }

            values = vector<Value>(table);

        }

        Value get(vector<int> raw_values) const {
            return table[tableIndex(raw_values)];
        }

        MultiIndexTable setAxis(int index, vector<Value> axis) {
            vector<Value> &axs = this->axis[getIndex(index)];

            if(axs.size() != axis.size())
                throw  runtime_error("axis size can't be changed");

            axs = vector<int>(axis);

            return this;
        }

        vector<Value> getAxis(int index) const {
            return vector<int>(this->axis[getIndex(index)]);
        }

        MultiIndexTable getAxisSize(int index) const {
            return this->axis[getIndex(index)].size();
        }


    protected:

        int tableIndex(vector<int> val){
            index = 0;
            for(int i=0; i<this->getDim()-1; i++) {
                index += val[i] * this->axis[i].size();
            }

            index += val[this.getDim()-1];
            return index;
        }



    };

}


#endif //THERMECH_FEM_MULTYINDEXTABLE_H
