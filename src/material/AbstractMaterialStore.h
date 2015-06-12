//
// Created by banamir on 04.06.15.
//

#ifndef THERMECH_FEM_ABSTRACTMATERIALSTORE_H
#define THERMECH_FEM_ABSTRACTMATERIALSTORE_H

#include "AbstractMaterial.h"

namespace material {

    namespace material {

        class AbstractMaterialStore {
        public:
            virtual AbstractMaterialStore addMaterial(string name, AbstractMaterial material);

            virtual AbstractMaterial getMaterial(string name);
        };

    };
}

#endif //THERMECH_FEM_ABSTRACTMATERIALSTORE_H
