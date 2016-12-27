#ifndef BOSONVARIATION_TYPES_H
#define BOSONVARIATION_TYPES_H

#include <QQmlComponent>
#include <QMetaType>

extern "C" {
#include "boson_sdk/ReturnCodes.h"
#include "boson_sdk/EnumTypes.h"
}

#define QML_ENUM(name, storageType, ...)\
      enum class name : storageType {\
            __VA_ARGS__\
      };\
      class QE_##name {\
            Q_GADGET\
            Q_ENUMS(E)\
      public:\
            enum class E : storageType {\
                  __VA_ARGS__\
            };\
      };

namespace FLR {

    QML_ENUM(COLORLUT_ID_E, int32_t, \
         FLR_COLORLUT_WHITEHOT, \
         FLR_COLORLUT_BLACKHOT, \
         FLR_COLORLUT_REDHOT, \
         FLR_COLORLUT_RAINBOW, \
         FLR_COLORLUT_IRONBOW, \
         FLR_COLORLUT_LAVA, \
         FLR_COLORLUT_ARCTIC, \
         FLR_COLORLUT_GLOBOW, \
         FLR_COLORLUT_GRADEDFIRE, \
         FLR_COLORLUT_INSTALERT, \
    )

}
void registerBosonVariationQmlTypes();

#endif // BOSONVARIATION_TYPES_H
