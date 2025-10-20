/*  Youri Test Script
 *
 *  From: https://github.com/PokemonAutomation/
 *
 */

#ifndef PokemonAutomation_PokemonLZA_YouriTest_H
#define PokemonAutomation_PokemonLZA_YouriTest_H

#include "NintendoSwitch/NintendoSwitch_SingleSwitchProgram.h"

namespace PokemonAutomation{
namespace NintendoSwitch{
namespace PokemonLZA{


class YouriTest_Descriptor : public SingleSwitchProgramDescriptor{
public:
    YouriTest_Descriptor();
};


class YouriTest : public SingleSwitchProgramInstance{
public:
    YouriTest();

    virtual void program(SingleSwitchProgramEnvironment& env, ProControllerContext& context) override;
};





}
}
}
#endif
