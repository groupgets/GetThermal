#ifndef LEPTONVARIATION_TYPES_H
#define LEPTONVARIATION_TYPES_H

#include <QQmlComponent>
#include <QMetaType>

#include "LEPTON_ErrorCodes.h"
#include "LEPTON_AGC.h"
#include "LEPTON_VID.h"
#include "LEPTON_RAD.h"
#include "LEPTON_SYS.h"

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

namespace LEP {

    QML_ENUM(PCOLOR_LUT_E, char, \
        LEP_VID_WHEEL6_LUT, \
        LEP_VID_FUSION_LUT, \
        LEP_VID_RAINBOW_LUT, \
        LEP_VID_GLOBOW_LUT, \
        LEP_VID_SEPIA_LUT, \
        LEP_VID_COLOR_LUT, \
        LEP_VID_ICE_FIRE_LUT, \
        LEP_VID_RAIN_LUT, \
        LEP_VID_USER_LUT \
    )

    QML_ENUM(POLARITY_E, char, \
        LEP_VID_WHITE_HOT, \
        LEP_VID_BLACK_HOT, \
    )

    QML_ENUM(VID_SBNUC_ENABLE_E, char, \
        LEP_VID_SBNUC_DISABLE, \
        LEP_VID_SBNUC_ENABLE, \
    )

    QML_ENUM(AGC_ENABLE_E, char, \
        LEP_AGC_DISABLE, \
        LEP_AGC_ENABLE, \
    )

    QML_ENUM(AGC_POLICY_E, char, \
        LEP_AGC_LINEAR, \
        LEP_AGC_HEQ, \
    )

    QML_ENUM(AGC_HEQ_SCALE_FACTOR_E, char, \
        LEP_AGC_SCALE_TO_8_BITS, \
        LEP_AGC_SCALE_TO_14_BITS, \
    )

    QML_ENUM(RAD_TLINEAR_RESOLUTION_E, char, \
        LEP_RAD_RESOLUTION_0_1, \
        LEP_RAD_RESOLUTION_0_01, \
    )

    QML_ENUM(SYS_GAIN_MODE_E, char, \
        LEP_SYS_GAIN_MODE_HIGH, \
        LEP_SYS_GAIN_MODE_LOW, \
        LEP_SYS_GAIN_MODE_AUTO, \
    )

}
void registerLeptonVariationQmlTypes();

#endif // LEPTONVARIATION_TYPES_H
