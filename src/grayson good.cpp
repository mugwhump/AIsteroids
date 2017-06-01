//treeType = RandomTree

#include "AI.h"
#include "SimpleState.h"
#include "InputDirection.h"
#include "RelativeDirection.h"



//In AI.h: eAction::ActionEnum Grayson_Good( SimpleState& mySimpleState ); 

eAction::ActionEnum AI::Grayson_Good( SimpleState& mySimpleState ) {
 if( mySimpleState.shipDirection < 3.47f ) { 
     if( mySimpleState.invincible  ==  true ) { 
         if( mySimpleState.shipDirection < 0 ) { 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                 if( mySimpleState.mySlices[0].targetDistance < 148.1f )      return eAction::parser.stringToEnum( "Up" ); 
                 else { 
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                         if( mySimpleState.mySlices[19].targetDistance < 136.6f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[9].targetDistance < 10.93f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else { 
                             if( mySimpleState.mySlices[17].targetDistance < 126.12f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else { 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.goalDirection < 0.19f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else { 
                                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                 }
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                         }
                     }
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
             }
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                 if( mySimpleState.shipDirection < 0 ) { 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[6].targetDistance < 145.87f ) { 
                             if( mySimpleState.goalDirection < 4.74f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else { 
                                 if( mySimpleState.goalDistance < 153.01f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                             }
                         }
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 else      return eAction::parser.stringToEnum( "Up" ); 
             }
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[18].targetDistance < 148.16f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else { 
                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                 if( mySimpleState.mySlices[7].targetDistance < 164.19f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                     }
                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                 if( mySimpleState.goalDirection < 5.98f )      return eAction::parser.stringToEnum( "Up" ); 
                 else { 
                     if( mySimpleState.goalDistance < 286.91f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
             }
         }
         else { 
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                 if( mySimpleState.mySlices[2].targetDistance < 216.48f )      return eAction::parser.stringToEnum( "Up" ); 
                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
             }
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                 if( mySimpleState.mySlices[12].targetDistance < 162.89f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
             }
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.shipDirection < 2.35f ) { 
                         if( mySimpleState.shipSpeed < 1.1f ) { 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Right" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
             }
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                 if( mySimpleState.mySlices[18].targetDistance < 197.48f ) { 
                     if( mySimpleState.mySlices[4].targetDistance < 198.45f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else { 
                         if( mySimpleState.goalDistance < 193.76f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Right" ); 
                     }
                 }
                 else { 
                     if( mySimpleState.shipSpeed < 0.31f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else { 
                         if( mySimpleState.mySlices[14].targetDistance < 84.7f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                     }
                 }
             }
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
         }
     }
     else { 
         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Right" ); 
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.goalDirection < 0.72f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
             }
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                     if( mySimpleState.mySlices[5].targetDistance < 225.61f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                 }
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                     if( mySimpleState.shipDirection < 1.36f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                 }
             }
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                 if( mySimpleState.mySlices[6].targetDistance < 226.46f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
             }
         }
         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
             if( mySimpleState.shipSpeed < 2.59f )      return eAction::parser.stringToEnum( "Up" ); 
             else      return eAction::parser.stringToEnum( "Up-Left" ); 
         }
         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
             if( mySimpleState.shipSpeed < 1.52f )      return eAction::parser.stringToEnum( "Right" ); 
             else      return eAction::parser.stringToEnum( "Up-Right" ); 
         }
         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[8].targetDistance < 230.43f )      return eAction::parser.stringToEnum( "Left" ); 
                     else { 
                         if( mySimpleState.mySlices[3].targetDistance < 251.04f )      return eAction::parser.stringToEnum( "Up" ); 
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                 }
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                 if( mySimpleState.shipDirection < 1.09f )      return eAction::parser.stringToEnum( "Up" ); 
                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
             }
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                 if( mySimpleState.shipSpeed < 3.65f ) { 
                     if( mySimpleState.goalDirection < 4.45f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
                 else      return eAction::parser.stringToEnum( "Up" ); 
             }
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                     if( mySimpleState.goalDistance < 178.05f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.mySlices[1].targetDistance < 198.44f )      return eAction::parser.stringToEnum( "Up" ); 
                         else { 
                             if( mySimpleState.mySlices[17].targetDistance < 159.25f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                     }
                 }
                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                     if( mySimpleState.goalDistance < 206.8f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else { 
                         if( mySimpleState.goalDistance < 243.27f )      return eAction::parser.stringToEnum( "Up" ); 
                         else { 
                             if( mySimpleState.goalDirection < 0.76f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else { 
                                 if( mySimpleState.shipDirection < 1.89f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                             }
                         }
                     }
                 }
                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                     if( mySimpleState.mySlices[6].targetDistance < 158.45f )      return eAction::parser.stringToEnum( "Right" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                         if( mySimpleState.goalDistance < 280.64f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else      return eAction::parser.stringToEnum( "Right" ); 
                     }
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                         if( mySimpleState.mySlices[1].targetDistance < 239.4f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else { 
                             if( mySimpleState.shipSpeed < 2.56f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                     }
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                         if( mySimpleState.shipSpeed < 3.2f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                         if( mySimpleState.mySlices[7].targetDistance < 118.63f )      return eAction::parser.stringToEnum( "Up" ); 
                         else      return eAction::parser.stringToEnum( "Right" ); 
                     }
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                 if( mySimpleState.shipSpeed < 1.51f )      return eAction::parser.stringToEnum( "Right" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                     if( mySimpleState.shipDirection < 0.43f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 }
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[10].targetDistance < 45.42f ) { 
                                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                             if( mySimpleState.shipDirection < 1.17f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     }
                                     else { 
                                         if( mySimpleState.mySlices[7].targetDistance < 219.58f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else { 
                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                                 if( mySimpleState.goalDirection < 4.84f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 else      return eAction::parser.stringToEnum( "Right" ); 
                                             }
                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                                     if( mySimpleState.shipDirection < 0.19f )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 }
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                     if( mySimpleState.shipSpeed < 1.68f )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else { 
                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                             if( mySimpleState.mySlices[4].targetDistance < 222.64f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                             else { 
                                                                 if( mySimpleState.mySlices[2].targetDistance < 180.21f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                 else { 
                                                                     if( mySimpleState.mySlices[9].targetDistance < 68.66f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                     else { 
                                                                         if( mySimpleState.mySlices[14].targetDistance < 212.99f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                         else { 
                                                                             if( mySimpleState.shipDirection < 1.74f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                         }
                                                                     }
                                                                 }
                                                             }
                                                         }
                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     }
                                                 }
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             }
                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                                 if( mySimpleState.goalDirection < 0.02f )      return eAction::parser.stringToEnum( "Up" ); 
                                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             }
                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                                 if( mySimpleState.mySlices[1].targetDistance < 213.47f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             }
                                         }
                                     }
                                 }
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             }
                             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                             if( mySimpleState.goalDistance < 241.52f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                     }
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                         if( mySimpleState.mySlices[4].targetDistance < 155.02f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                         if( mySimpleState.mySlices[7].targetDistance < 172.52f ) { 
                             if( mySimpleState.mySlices[1].targetDistance < 226.43f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                         else { 
                             if( mySimpleState.goalDirection < 0.23f ) { 
                                 if( mySimpleState.shipDirection < 0.43f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                             }
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                     }
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                             if( mySimpleState.mySlices[7].targetDistance < 175.64f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                     }
                 }
                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                     if( mySimpleState.mySlices[8].targetDistance < 181.15f ) { 
                         if( mySimpleState.goalDirection < 3.92f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else { 
                             if( mySimpleState.mySlices[6].targetDistance < 229.91f )      return eAction::parser.stringToEnum( "Left" ); 
                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                         }
                     }
                     else { 
                         if( mySimpleState.mySlices[4].targetDistance < 242.19f ) { 
                             if( mySimpleState.mySlices[4].targetDistance < 221.19f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                         else { 
                             if( mySimpleState.goalDistance < 183.16f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                     }
                 }
                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                     if( mySimpleState.shipDirection < 0.85f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
             }
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                     if( mySimpleState.mySlices[9].targetDistance < 187.62f )      return eAction::parser.stringToEnum( "Left" ); 
                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                 }
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                     if( mySimpleState.mySlices[12].targetDistance < 227.4f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.shipSpeed < 1.78f ) { 
                         if( mySimpleState.mySlices[4].targetDistance < 235.3f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else { 
                             if( mySimpleState.shipDirection < 1.72f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else      return eAction::parser.stringToEnum( "Left" ); 
                         }
                     }
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
             }
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                 if( mySimpleState.shipSpeed < 2.5f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 else      return eAction::parser.stringToEnum( "Up" ); 
             }
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                 if( mySimpleState.mySlices[6].targetDistance < 226.34f ) { 
                     if( mySimpleState.mySlices[11].targetDistance < 118.89f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else { 
                         if( mySimpleState.shipSpeed < 2.29f )      return eAction::parser.stringToEnum( "Up" ); 
                         else { 
                             if( mySimpleState.mySlices[10].targetDistance < 239.93f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else { 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                         }
                     }
                 }
                 else { 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
             }
         }
         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                 if( mySimpleState.mySlices[10].targetDistance < 152.25f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
             }
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
         }
     }
 }
 else { 
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
         if( mySimpleState.shipSpeed < 3.5f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
         else      return eAction::parser.stringToEnum( "Up" ); 
     }
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
         if( mySimpleState.shipSpeed < 1.13f ) { 
             if( mySimpleState.goalDistance < 210.23f ) { 
                 if( mySimpleState.mySlices[16].targetDistance < 158.71f )      return eAction::parser.stringToEnum( "Left" ); 
                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
             }
             else      return eAction::parser.stringToEnum( "Up-Left" ); 
         }
         else { 
             if( mySimpleState.mySlices[17].targetDistance < 196.77f )      return eAction::parser.stringToEnum( "Up-Right" ); 
             else { 
                 if( mySimpleState.mySlices[1].targetDistance < 219.09f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 else      return eAction::parser.stringToEnum( "Up" ); 
             }
         }
     }
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                 if( mySimpleState.mySlices[15].targetDistance < 86.4f )      return eAction::parser.stringToEnum( "Up" ); 
                 else { 
                     if( mySimpleState.mySlices[18].targetDistance < 235.54f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     else { 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                             if( mySimpleState.shipSpeed < 1.93f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                 }
             }
         }
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                 if( mySimpleState.mySlices[1].targetDistance < 175.98f )      return eAction::parser.stringToEnum( "Up" ); 
                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
             }
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Left" ); 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     }
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
             if( mySimpleState.mySlices[6].targetDistance < 158.99f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
             else      return eAction::parser.stringToEnum( "Up" ); 
         }
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[2].targetDistance < 200.58f )      return eAction::parser.stringToEnum( "Up" ); 
             else      return eAction::parser.stringToEnum( "Up-Left" ); 
         }
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Fire-Up" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     }
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[16].targetDistance < 241.97f )      return eAction::parser.stringToEnum( "Up-Left" ); 
             else      return eAction::parser.stringToEnum( "Up" ); 
         }
         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     }
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
             }
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
             if( mySimpleState.mySlices[1].targetDistance < 118.97f )      return eAction::parser.stringToEnum( "Up" ); 
             else      return eAction::parser.stringToEnum( "Up-Left" ); 
         }
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
             if( mySimpleState.goalDistance < 256.26f ) { 
                 if( mySimpleState.mySlices[12].targetDistance < 252.24f )      return eAction::parser.stringToEnum( "Up" ); 
                 else { 
                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.goalDistance < 102.95f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                     }
                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
             }
             else      return eAction::parser.stringToEnum( "NoDirection" ); 
         }
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "NoDirection" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                 if( mySimpleState.shipDirection < 5.84f )      return eAction::parser.stringToEnum( "Up" ); 
                 else { 
                     if( mySimpleState.mySlices[1].targetDistance < 241.67f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     else { 
                         if( mySimpleState.goalDirection < 0.41f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                 }
             }
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                     if( mySimpleState.mySlices[5].targetDistance < 106.62f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     else { 
                         if( mySimpleState.mySlices[6].targetDistance < 110.88f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                 }
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                     if( mySimpleState.mySlices[1].targetDistance < 197.87f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else { 
                         if( mySimpleState.shipDirection < 4.8f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                 }
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                         if( mySimpleState.mySlices[1].targetDistance < 89.1f )      return eAction::parser.stringToEnum( "Up" ); 
                         else { 
                             if( mySimpleState.mySlices[10].targetDistance < 238.62f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                     }
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                         if( mySimpleState.goalDirection < 2.96f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else { 
                             if( mySimpleState.mySlices[12].targetDistance < 255.97f )      return eAction::parser.stringToEnum( "Up" ); 
                             else { 
                                 if( mySimpleState.goalDirection < 5.8f ) { 
                                     if( mySimpleState.shipDirection < 6.19f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 }
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                         }
                     }
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                         if( mySimpleState.shipSpeed < 3.3f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                             if( mySimpleState.mySlices[16].targetDistance < 169.66f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                             else { 
                                 if( mySimpleState.shipSpeed < 2.9f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 else { 
                                     if( mySimpleState.goalDirection < 5.79f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 }
                             }
                         }
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                             if( mySimpleState.mySlices[14].targetDistance < 189.09f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                     if( mySimpleState.shipSpeed < 3.67f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                     if( mySimpleState.goalDistance < 193.39f ) { 
                                         if( mySimpleState.shipSpeed < 3.82f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     }
                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 }
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                                 if( mySimpleState.mySlices[10].targetDistance < 188.73f ) { 
                                                     if( mySimpleState.mySlices[0].targetDistance < 239.47f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                     else { 
                                                         if( mySimpleState.mySlices[10].targetDistance < 167.06f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                     }
                                                 }
                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                             }
                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                                 if( mySimpleState.shipSpeed < 2.85f )      return eAction::parser.stringToEnum( "Up" ); 
                                                 else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                             }
                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                 if( mySimpleState.mySlices[11].targetDistance < 200.03f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                 else { 
                                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                         if( mySimpleState.mySlices[16].targetDistance < 236.63f )      return eAction::parser.stringToEnum( "Up" ); 
                                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                     }
                                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 }
                                             }
                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         }
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                             if( mySimpleState.goalDistance < 82.05f )      return eAction::parser.stringToEnum( "Up" ); 
                                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         }
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                             if( mySimpleState.goalDistance < 148.12f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                         }
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                             if( mySimpleState.mySlices[8].targetDistance < 243.52f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                         if( mySimpleState.mySlices[0].targetDistance < 133.44f )      return eAction::parser.stringToEnum( "Up" ); 
                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                     }
                 }
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                     if( mySimpleState.mySlices[12].targetDistance < 194.57f ) { 
                         if( mySimpleState.shipSpeed < 2.34f )      return eAction::parser.stringToEnum( "Up" ); 
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                     else { 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                 }
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
             }
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Left" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                 if( mySimpleState.mySlices[6].targetDistance < 134.63f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 else      return eAction::parser.stringToEnum( "Up" ); 
             }
         }
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                 if( mySimpleState.mySlices[9].targetDistance < 234.95f ) { 
                     if( mySimpleState.mySlices[14].targetDistance < 218.51f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 else      return eAction::parser.stringToEnum( "Up" ); 
             }
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                 if( mySimpleState.mySlices[2].targetDistance < 214.75f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 else { 
                     if( mySimpleState.mySlices[14].targetDistance < 193.3f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                 }
             }
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[2].targetDistance < 247.97f ) { 
                     if( mySimpleState.mySlices[1].targetDistance < 209.2f ) { 
                         if( mySimpleState.shipDirection < 5.94f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 else      return eAction::parser.stringToEnum( "Up" ); 
             }
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
             if( mySimpleState.goalDistance < 154.68f ) { 
                 if( mySimpleState.mySlices[7].targetDistance < 189.7f ) { 
                     if( mySimpleState.shipSpeed < 3.83f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 else { 
                     if( mySimpleState.mySlices[5].targetDistance < 247.02f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
             }
             else { 
                 if( mySimpleState.mySlices[12].targetDistance < 157.77f )      return eAction::parser.stringToEnum( "Up" ); 
                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
             }
         }
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
     }
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
         if( mySimpleState.mySlices[3].targetDistance < 174.7f )      return eAction::parser.stringToEnum( "Up" ); 
         else { 
             if( mySimpleState.shipSpeed < 2.68f ) { 
                 if( mySimpleState.goalDistance < 236.87f )      return eAction::parser.stringToEnum( "Up" ); 
                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
             }
             else      return eAction::parser.stringToEnum( "Up-Left" ); 
         }
     }
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
             if( mySimpleState.shipDirection < 4.93f )      return eAction::parser.stringToEnum( "NoDirection" ); 
             else { 
                 if( mySimpleState.goalDistance < 283.79f )      return eAction::parser.stringToEnum( "Up" ); 
                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
             }
         }
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                 if( mySimpleState.goalDirection < 0.31f ) { 
                     if( mySimpleState.mySlices[0].targetDistance < 47.58f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.mySlices[1].targetDistance < 154.77f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                         else { 
                             if( mySimpleState.canShoot  ==  true ) { 
                                 if( mySimpleState.shipSpeed < 2.48f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                         }
                     }
                 }
                 else      return eAction::parser.stringToEnum( "Up" ); 
             }
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                 if( mySimpleState.mySlices[19].targetDistance < 148.52f )      return eAction::parser.stringToEnum( "Up" ); 
                 else { 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                         if( mySimpleState.goalDistance < 78.85f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                 }
             }
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[18].targetDistance < 155.84f ) { 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                         if( mySimpleState.shipSpeed < 3.5f ) { 
                             if( mySimpleState.shipDirection < 4.93f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                         else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                     }
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 else { 
                     if( mySimpleState.mySlices[11].targetDistance < 170.5f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
             }
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
         }
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     }
 }


}
