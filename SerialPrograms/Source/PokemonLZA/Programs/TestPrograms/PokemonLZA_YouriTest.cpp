/*  Braviary Height Glitch
 *
 *  From: https://github.com/PokemonAutomation/
 *
 */

#include "NintendoSwitch/Commands/NintendoSwitch_Commands_PushButtons.h"
#include "Pokemon/Pokemon_Strings.h"
#include "PokemonLZA_YouriTest.h"

namespace PokemonAutomation{
namespace NintendoSwitch{
namespace PokemonLZA{
    using namespace Pokemon;


YouriTest_Descriptor::YouriTest_Descriptor()
    : SingleSwitchProgramDescriptor(
        "PokemonLZA:YouriTest",
        STRING_POKEMON + " LZA", "Youri Test",
        "Programs/PokemonLZA/YouriTest.html",
        "Test program by Youri.",
        ProgramControllerClass::StandardController_NoRestrictions,
        FeedbackType::NONE,
        AllowCommandsWhenRunning::DISABLE_COMMANDS
    )
{}


YouriTest::YouriTest(){}


void YouriTest::program(SingleSwitchProgramEnvironment& env, ProControllerContext& context){
    while (true){
        pbf_move_left_joystick(context, 128, 255, 922ms, 0ms);
        pbf_wait(context, 802ms);
        pbf_press_button(context, BUTTON_A, 186ms, 0ms);
        pbf_wait(context, 2676ms);
        pbf_move_left_joystick(context, 128, 0, 838ms, 0ms);
        pbf_wait(context, 438ms);
        pbf_move_left_joystick(context, 128, 255, 1388ms, 0ms);
        pbf_wait(context, 444ms);
        pbf_press_button(context, BUTTON_A, 208ms, 0ms);

    }
}




}
}
}
