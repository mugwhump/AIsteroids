//treeType = RandomTree

#include "AI.h"
#include "SimpleState.h"
#include "InputDirection.h"
#include "RelativeDirection.h"



//In AI.h: eAction::ActionEnum Grayson_Long( SimpleState& mySimpleState ); 

eAction::ActionEnum AI::Grayson_Long( SimpleState& mySimpleState ) {
 if( mySimpleState.shipDirection < 3.24f ) { 
     if( mySimpleState.goalDistance < 227.39f ) { 
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
             if( mySimpleState.mySlices[12].targetDistance < 71.13f ) { 
                 if( mySimpleState.mySlices[5].targetDistance < 230.06f )      return eAction::parser.stringToEnum( "Up" ); 
                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
             }
             else { 
                 if( mySimpleState.goalDistance < 76.48f ) { 
                     if( mySimpleState.goalDirection < 0.26f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.mySlices[4].targetDistance < 188.16f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                     }
                 }
                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
             }
         }
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                 if( mySimpleState.mySlices[19].targetDistance < 221.48f ) { 
                     if( mySimpleState.goalDirection < 4.62f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                 }
                 else      return eAction::parser.stringToEnum( "Up" ); 
             }
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                 if( mySimpleState.mySlices[9].targetDistance < 180.56f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 else      return eAction::parser.stringToEnum( "Up" ); 
             }
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.goalDistance < 155.21f ) { 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 else { 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                         if( mySimpleState.mySlices[0].targetDistance < 24.91f )      return eAction::parser.stringToEnum( "Up" ); 
                         else { 
                             if( mySimpleState.goalDirection < 3.87f )      return eAction::parser.stringToEnum( "Up" ); 
                             else { 
                                 if( mySimpleState.shipDirection < 0.2f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                         }
                     }
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
             }
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
             if( mySimpleState.mySlices[17].targetDistance < 174.5f ) { 
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                     if( mySimpleState.mySlices[17].targetDistance < 165.75f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                 }
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[11].targetDistance < 221.91f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.mySlices[17].targetDistance < 132.7f ) { 
                             if( mySimpleState.mySlices[1].targetDistance < 193.33f )      return eAction::parser.stringToEnum( "Right" ); 
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                 }
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
             else { 
                 if( mySimpleState.shipSpeed < 0.14f ) { 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[3].targetDistance < 203.67f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else { 
                             if( mySimpleState.shipDirection < 0.97f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                         }
                     }
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 else { 
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.shipSpeed < 3.78f )      return eAction::parser.stringToEnum( "Up" ); 
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                 }
             }
         }
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
             if( mySimpleState.mySlices[19].targetDistance < 154.3f ) { 
                 if( mySimpleState.goalDistance < 131.4f ) { 
                     if( mySimpleState.goalDistance < 91.77f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
                 else      return eAction::parser.stringToEnum( "Up" ); 
             }
             else { 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                     if( mySimpleState.shipDirection < 0.09f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                 }
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.shipSpeed < 3.59f ) { 
                         if( mySimpleState.mySlices[10].targetDistance < 168.49f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else { 
                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.shipDirection < 0.65f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else { 
                                     if( mySimpleState.shipDirection < 1.47f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                             }
                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                     }
                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                 }
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
         }
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
             if( mySimpleState.shipSpeed < 1.7f ) { 
                 if( mySimpleState.shipSpeed < 0.02f )      return eAction::parser.stringToEnum( "Right" ); 
                 else { 
                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                         if( mySimpleState.goalDistance < 204.6f )      return eAction::parser.stringToEnum( "Up" ); 
                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                     }
                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
             }
             else { 
                 if( mySimpleState.mySlices[3].targetDistance < 210.55f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 else { 
                     if( mySimpleState.goalDistance < 204.05f ) { 
                         if( mySimpleState.mySlices[0].targetDistance < 172.48f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else { 
                             if( mySimpleState.goalDirection < 2.36f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else { 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                         }
                     }
                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                 }
             }
         }
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                 if( mySimpleState.shipDirection < 0.09f ) { 
                     if( mySimpleState.goalDirection < 5.31f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.mySlices[11].targetDistance < 251.65f ) { 
                             if( mySimpleState.mySlices[16].targetDistance < 67.51f )      return eAction::parser.stringToEnum( "Up" ); 
                             else { 
                                 if( mySimpleState.mySlices[8].targetDistance < 78.24f ) { 
                                     if( mySimpleState.mySlices[5].targetDistance < 59.1f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                             }
                         }
                         else { 
                             if( mySimpleState.goalDistance < 196.62f ) { 
                                 if( mySimpleState.mySlices[12].targetDistance < 86.55f ) { 
                                     if( mySimpleState.goalDistance < 195.72f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else { 
                                         if( mySimpleState.goalDistance < 195.96f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         else { 
                                             if( mySimpleState.goalDirection < 5.33f )      return eAction::parser.stringToEnum( "Up" ); 
                                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         }
                                     }
                                 }
                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                             }
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                     }
                 }
                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
             }
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                 if( mySimpleState.mySlices[18].targetDistance < 191.57f ) { 
                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                             if( mySimpleState.mySlices[13].targetDistance < 121.13f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                             if( mySimpleState.mySlices[13].targetDistance < 131.61f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                         }
                     }
                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 else { 
                     if( mySimpleState.invincible  ==  true ) { 
                         if( mySimpleState.mySlices[8].targetDistance < 86.24f ) { 
                             if( mySimpleState.goalDistance < 198.26f )      return eAction::parser.stringToEnum( "Up" ); 
                             else { 
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[1].targetDistance < 217.56f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     else { 
                                         if( mySimpleState.goalDirection < 5.35f ) { 
                                             if( mySimpleState.shipSpeed < 0.24f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                 }
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                         }
                         else { 
                             if( mySimpleState.mySlices[13].targetDistance < 190.62f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                     }
                     else { 
                         if( mySimpleState.goalDistance < 180.91f ) { 
                             if( mySimpleState.mySlices[13].targetDistance < 227.72f ) { 
                                 if( mySimpleState.goalDirection < 3.56f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                         else { 
                             if( mySimpleState.mySlices[16].targetDistance < 189.35f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                     }
                 }
             }
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.goalDirection < 5.89f ) { 
                         if( mySimpleState.mySlices[18].targetDistance < 132.85f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else { 
                             if( mySimpleState.goalDirection < 0.12f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else { 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[13].targetDistance < 178.66f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     else { 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                             if( mySimpleState.goalDistance < 45.89f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         }
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     }
                                 }
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             }
                         }
                     }
                     else { 
                         if( mySimpleState.canShoot  ==  true )      return eAction::parser.stringToEnum( "Up" ); 
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                 }
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
             }
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                 if( mySimpleState.mySlices[10].targetDistance < 152.08f ) { 
                     if( mySimpleState.goalDistance < 157.05f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 else { 
                     if( mySimpleState.mySlices[1].targetDistance < 233.65f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     else { 
                         if( mySimpleState.mySlices[13].targetDistance < 207.33f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                     }
                 }
             }
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                 if( mySimpleState.goalDirection < 5.44f ) { 
                     if( mySimpleState.goalDirection < 0.15f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.shipDirection < 0.05f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                     }
                 }
                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
             }
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                     if( mySimpleState.goalDirection < 0.06f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else { 
                         if( mySimpleState.shipSpeed < 0.99f ) { 
                             if( mySimpleState.goalDistance < 189.47f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else { 
                                 if( mySimpleState.mySlices[7].targetDistance < 65.82f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                             }
                         }
                         else { 
                             if( mySimpleState.shipDirection < 1.74f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                     }
                 }
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                     if( mySimpleState.mySlices[10].targetDistance < 145.93f ) { 
                         if( mySimpleState.mySlices[10].targetDistance < 143.01f )      return eAction::parser.stringToEnum( "Up" ); 
                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                     }
                     else { 
                         if( mySimpleState.mySlices[10].targetDistance < 202.79f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else { 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                 if( mySimpleState.shipDirection < 1.9f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else { 
                                     if( mySimpleState.shipDirection < 1.96f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                             }
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.shipSpeed < 2.75f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                             }
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                     }
                 }
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                     if( mySimpleState.mySlices[0].targetDistance < 255.85f ) { 
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[10].targetDistance < 121.49f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     else { 
                         if( mySimpleState.shipDirection < 0.89f ) { 
                             if( mySimpleState.mySlices[1].targetDistance < 86.68f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else { 
                                 if( mySimpleState.mySlices[1].targetDistance < 239.62f ) { 
                                     if( mySimpleState.goalDistance < 158.85f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                         }
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                 }
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                         if( mySimpleState.mySlices[9].targetDistance < 138.55f )      return eAction::parser.stringToEnum( "Up" ); 
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[4].targetDistance < 220.81f )      return eAction::parser.stringToEnum( "Up" ); 
                         else { 
                             if( mySimpleState.shipSpeed < 0.5f ) { 
                                 if( mySimpleState.shipDirection < 2.66f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                             }
                             else { 
                                 if( mySimpleState.shipDirection < 0.46f ) { 
                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.goalDirection < 1.07f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                         }
                     }
                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                     if( mySimpleState.shipSpeed < 2.59f ) { 
                         if( mySimpleState.goalDistance < 120.58f )      return eAction::parser.stringToEnum( "Right" ); 
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                     else { 
                         if( mySimpleState.canShoot  ==  true )      return eAction::parser.stringToEnum( "Up" ); 
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                 }
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                         if( mySimpleState.mySlices[19].targetDistance < 238.7f )      return eAction::parser.stringToEnum( "Up" ); 
                         else { 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[11].targetDistance < 145.73f ) { 
                                     if( mySimpleState.goalDirection < 4.73f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 }
                                 else { 
                                     if( mySimpleState.mySlices[18].targetDistance < 213.71f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     else { 
                                         if( mySimpleState.shipDirection < 0.59f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     }
                                 }
                             }
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                         }
                     }
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.shipDirection < 0.59f ) { 
                                 if( mySimpleState.shipDirection < 0.52f ) { 
                                     if( mySimpleState.shipDirection < 0.41f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                                 else { 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                             }
                             else { 
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                     if( mySimpleState.shipSpeed < 3.03f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 }
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[3].targetDistance < 142.77f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     else { 
                                         if( mySimpleState.mySlices[6].targetDistance < 62.85f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         else { 
                                             if( mySimpleState.goalDistance < 146.48f )      return eAction::parser.stringToEnum( "Up" ); 
                                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         }
                                     }
                                 }
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             }
                         }
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.goalDistance < 130.58f ) { 
                                 if( mySimpleState.goalDistance < 78.88f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 else      return eAction::parser.stringToEnum( "Right" ); 
                             }
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                             if( mySimpleState.mySlices[1].targetDistance < 55.95f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                         if( mySimpleState.mySlices[18].targetDistance < 233.66f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else { 
                             if( mySimpleState.shipSpeed < 1.48f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else { 
                                 if( mySimpleState.mySlices[3].targetDistance < 133.83f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 else { 
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.shipDirection < 1.31f ) { 
                                             if( mySimpleState.mySlices[0].targetDistance < 238.82f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     }
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                             }
                         }
                     }
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.shipSpeed < 0.64f ) { 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Right" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[1].targetDistance < 254.97f ) { 
                                         if( mySimpleState.shipDirection < 1.11f )      return eAction::parser.stringToEnum( "Right" ); 
                                         else { 
                                             if( mySimpleState.mySlices[11].targetDistance < 114.52f )      return eAction::parser.stringToEnum( "Right" ); 
                                             else { 
                                                 if( mySimpleState.mySlices[5].targetDistance < 172.98f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                 else      return eAction::parser.stringToEnum( "Right" ); 
                                             }
                                         }
                                     }
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.shipDirection < 0.23f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 }
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                     if( mySimpleState.mySlices[14].targetDistance < 45.86f ) { 
                                         if( mySimpleState.mySlices[5].targetDistance < 130.55f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                     if( mySimpleState.mySlices[18].targetDistance < 142.26f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 }
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Right" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                             if( mySimpleState.mySlices[2].targetDistance < 138.34f )      return eAction::parser.stringToEnum( "Up" ); 
                                             else      return eAction::parser.stringToEnum( "Right" ); 
                                         }
                                     }
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                     if( mySimpleState.goalDirection < 0.26f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                         if( mySimpleState.shipSpeed < 0.02f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                         if( mySimpleState.shipDirection < 0.83f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else { 
                                             if( mySimpleState.shipSpeed < 0.17f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         }
                                     }
                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Right" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.invincible  ==  true ) { 
                                             if( mySimpleState.mySlices[11].targetDistance < 199.66f ) { 
                                                 if( mySimpleState.shipSpeed < 0.02f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                             }
                                             else { 
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                                     if( mySimpleState.mySlices[7].targetDistance < 110.19f )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else { 
                                                         if( mySimpleState.shipDirection < 0 ) { 
                                                             if( mySimpleState.mySlices[7].targetDistance < 110.99f ) { 
                                                                 if( mySimpleState.mySlices[0].targetDistance < 117.76f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                             }
                                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                                         }
                                                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                     }
                                                 }
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                         if( mySimpleState.mySlices[5].targetDistance < 147.98f ) { 
                                                             if( mySimpleState.mySlices[3].targetDistance < 217.56f ) { 
                                                                 if( mySimpleState.shipSpeed < 0.02f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                                             }
                                                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                         }
                                                         else { 
                                                             if( mySimpleState.mySlices[12].targetDistance < 23.4f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                             else { 
                                                                 if( mySimpleState.mySlices[6].targetDistance < 252.02f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                 else { 
                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                                                         if( mySimpleState.mySlices[2].targetDistance < 125.44f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                                     }
                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 }
                                                             }
                                                         }
                                                     }
                                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                                         if( mySimpleState.shipDirection < 2.52f )      return eAction::parser.stringToEnum( "Up" ); 
                                                         else { 
                                                             if( mySimpleState.mySlices[10].targetDistance < 117.73f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                             else      return eAction::parser.stringToEnum( "Right" ); 
                                                         }
                                                     }
                                                 }
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             }
                                         }
                                         else { 
                                             if( mySimpleState.goalDistance < 157.07f ) { 
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                     if( mySimpleState.mySlices[5].targetDistance < 193.79f ) { 
                                                         if( mySimpleState.mySlices[16].targetDistance < 90.51f )      return eAction::parser.stringToEnum( "Up" ); 
                                                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                     }
                                                     else { 
                                                         if( mySimpleState.goalDirection < 4.36f ) { 
                                                             if( mySimpleState.mySlices[3].targetDistance < 188.77f )      return eAction::parser.stringToEnum( "Left" ); 
                                                             else { 
                                                                 if( mySimpleState.mySlices[13].targetDistance < 99.64f )      return eAction::parser.stringToEnum( "Left" ); 
                                                                 else { 
                                                                     if( mySimpleState.goalDistance < 154.64f )      return eAction::parser.stringToEnum( "Left" ); 
                                                                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                                 }
                                                             }
                                                         }
                                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                     }
                                                 }
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                             }
                                             else { 
                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                     if( mySimpleState.goalDistance < 159.17f )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                 }
                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             }
                                         }
                                     }
                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                         if( mySimpleState.mySlices[10].targetDistance < 201.08f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                 }
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                     if( mySimpleState.mySlices[15].targetDistance < 186.57f )      return eAction::parser.stringToEnum( "Right" ); 
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                             }
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                 if( mySimpleState.goalDirection < 3.68f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                 if( mySimpleState.mySlices[18].targetDistance < 220.07f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else { 
                                     if( mySimpleState.shipDirection < 2.53f )      return eAction::parser.stringToEnum( "Right" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 }
                             }
                         }
                         else { 
                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                 if( mySimpleState.mySlices[8].targetDistance < 48.32f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                 else { 
                                     if( mySimpleState.mySlices[0].targetDistance < 132.24f ) { 
                                         if( mySimpleState.shipDirection < 0.57f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else      return eAction::parser.stringToEnum( "Fire-Up-Right" ); 
                                     }
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                             }
                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                 if( mySimpleState.mySlices[2].targetDistance < 193.86f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 else { 
                                     if( mySimpleState.goalDirection < 2.66f ) { 
                                         if( mySimpleState.shipSpeed < 2.17f ) { 
                                             if( mySimpleState.goalDistance < 88.39f ) { 
                                                 if( mySimpleState.shipSpeed < 1.71f )      return eAction::parser.stringToEnum( "Up" ); 
                                                 else { 
                                                     if( mySimpleState.shipSpeed < 1.71f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                 }
                                             }
                                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         }
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 }
                             }
                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.goalDistance < 83.46f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     else { 
                                         if( mySimpleState.shipDirection < 2.09f ) { 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                                     if( mySimpleState.shipSpeed < 2.06f )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else { 
                                                         if( mySimpleState.shipSpeed < 2.21f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                     }
                                                 }
                                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                     if( mySimpleState.shipSpeed < 2.05f )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 }
                                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                             }
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         }
                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     }
                                 }
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                     if( mySimpleState.invincible  ==  true )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                             }
                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                 if( mySimpleState.mySlices[15].targetDistance < 65.08f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                 if( mySimpleState.goalDistance < 219.29f ) { 
                                     if( mySimpleState.goalDistance < 204.21f ) { 
                                         if( mySimpleState.goalDistance < 175.18f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else { 
                                             if( mySimpleState.mySlices[7].targetDistance < 181.21f )      return eAction::parser.stringToEnum( "Up" ); 
                                             else { 
                                                 if( mySimpleState.shipSpeed < 1.24f )      return eAction::parser.stringToEnum( "Up" ); 
                                                 else { 
                                                     if( mySimpleState.mySlices[19].targetDistance < 234.87f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                 }
                                             }
                                         }
                                     }
                                     else { 
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                             if( mySimpleState.mySlices[7].targetDistance < 109.97f )      return eAction::parser.stringToEnum( "Up" ); 
                                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         }
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                             if( mySimpleState.mySlices[2].targetDistance < 249.09f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             else { 
                                                 if( mySimpleState.mySlices[0].targetDistance < 167.4f )      return eAction::parser.stringToEnum( "Up" ); 
                                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             }
                                         }
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                 }
                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                             }
                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                     if( mySimpleState.shipSpeed < 3.72f ) { 
                                         if( mySimpleState.mySlices[1].targetDistance < 227.79f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else { 
                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                     }
                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 }
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                     if( mySimpleState.goalDirection < 0.46f ) { 
                                         if( mySimpleState.mySlices[9].targetDistance < 195.74f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     }
                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 }
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                     if( mySimpleState.mySlices[18].targetDistance < 251.36f ) { 
                                         if( mySimpleState.shipDirection < 0.42f ) { 
                                             if( mySimpleState.shipSpeed < 3.46f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                         else { 
                                             if( mySimpleState.mySlices[3].targetDistance < 157.17f )      return eAction::parser.stringToEnum( "Fire-Up-Left" ); 
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                     }
                                     else { 
                                         if( mySimpleState.mySlices[19].targetDistance < 138.27f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         else { 
                                             if( mySimpleState.goalDistance < 95.84f ) { 
                                                 if( mySimpleState.mySlices[1].targetDistance < 166.5f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 else { 
                                                     if( mySimpleState.mySlices[12].targetDistance < 178.82f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                 }
                                             }
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                     }
                                 }
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                     if( mySimpleState.shipSpeed < 0.83f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else { 
                                         if( mySimpleState.goalDirection < 2.04f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                 }
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                         if( mySimpleState.shipDirection < 0.47f ) { 
                                             if( mySimpleState.mySlices[3].targetDistance < 170.29f ) { 
                                                 if( mySimpleState.goalDistance < 219.95f )      return eAction::parser.stringToEnum( "Up" ); 
                                                 else { 
                                                     if( mySimpleState.shipDirection < 0 )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else { 
                                                         if( mySimpleState.mySlices[14].targetDistance < 215.17f )      return eAction::parser.stringToEnum( "Up" ); 
                                                         else { 
                                                             if( mySimpleState.mySlices[14].targetDistance < 231.97f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                                         }
                                                     }
                                                 }
                                             }
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     }
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                         if( mySimpleState.mySlices[6].targetDistance < 248.71f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                         if( mySimpleState.canShoot  ==  true ) { 
                                             if( mySimpleState.shipDirection < 1.27f ) { 
                                                 if( mySimpleState.mySlices[15].targetDistance < 212.56f )      return eAction::parser.stringToEnum( "Up" ); 
                                                 else { 
                                                     if( mySimpleState.mySlices[5].targetDistance < 178.94f )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else { 
                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     }
                                                 }
                                             }
                                             else { 
                                                 if( mySimpleState.mySlices[5].targetDistance < 101.12f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 else { 
                                                     if( mySimpleState.shipDirection < 1.29f )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 }
                                             }
                                         }
                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     }
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                         if( mySimpleState.shipDirection < 2.53f ) { 
                                             if( mySimpleState.mySlices[14].targetDistance < 183.61f ) { 
                                                 if( mySimpleState.shipSpeed < 3.06f ) { 
                                                     if( mySimpleState.shipDirection < 1.3f )      return eAction::parser.stringToEnum( "Fire-Up-Right" ); 
                                                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                 }
                                                 else { 
                                                     if( mySimpleState.shipSpeed < 3.76f )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                 }
                                             }
                                             else { 
                                                 if( mySimpleState.goalDistance < 142.94f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             }
                                         }
                                         else { 
                                             if( mySimpleState.mySlices[7].targetDistance < 90.13f )      return eAction::parser.stringToEnum( "Up" ); 
                                             else { 
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                                     if( mySimpleState.mySlices[13].targetDistance < 198.76f )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                 }
                                             }
                                         }
                                     }
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                         if( mySimpleState.mySlices[11].targetDistance < 223.89f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     }
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.goalDirection < 3.79f ) { 
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                                 if( mySimpleState.invincible  ==  true )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 else { 
                                                     if( mySimpleState.goalDirection < 0.29f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     else { 
                                                         if( mySimpleState.shipDirection < 0.25f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     }
                                                 }
                                             }
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                                 if( mySimpleState.mySlices[4].targetDistance < 219.97f ) { 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     }
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 }
                                                 else { 
                                                     if( mySimpleState.mySlices[6].targetDistance < 196.07f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     else { 
                                                         if( mySimpleState.goalDistance < 100.86f )      return eAction::parser.stringToEnum( "Up" ); 
                                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     }
                                                 }
                                             }
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                                 if( mySimpleState.shipSpeed < 1.58f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                             }
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                                     if( mySimpleState.shipDirection < 0.64f )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 }
                                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                                     if( mySimpleState.shipSpeed < 1.51f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                 }
                                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                                                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                                         if( mySimpleState.shipSpeed < 3.97f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                     }
                                                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                         if( mySimpleState.mySlices[2].targetDistance < 135.52f ) { 
                                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                 if( mySimpleState.goalDirection < 3.61f ) { 
                                                                     if( mySimpleState.mySlices[11].targetDistance < 195.22f ) { 
                                                                         if( mySimpleState.shipDirection < 0.63f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                     }
                                                                     else { 
                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Right" ); 
                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                                                                 if( mySimpleState.shipSpeed < 2.49f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                                                             }
                                                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                         }
                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     }
                                                                 }
                                                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                             }
                                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                         }
                                                         else { 
                                                             if( mySimpleState.goalDistance < 37.69f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                             else { 
                                                                 if( mySimpleState.canShoot  ==  true ) { 
                                                                     if( mySimpleState.mySlices[5].targetDistance < 227.64f ) { 
                                                                         if( mySimpleState.mySlices[18].targetDistance < 192.88f ) { 
                                                                             if( mySimpleState.goalDirection < 2.91f )      return eAction::parser.stringToEnum( "Right" ); 
                                                                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                                         }
                                                                         else { 
                                                                             if( mySimpleState.shipSpeed < 1.65f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                         }
                                                                     }
                                                                     else { 
                                                                         if( mySimpleState.goalDirection < 0.68f ) { 
                                                                             if( mySimpleState.goalDirection < 0.47f ) { 
                                                                                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                                     if( mySimpleState.goalDistance < 52.65f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                     else { 
                                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                                             if( mySimpleState.mySlices[7].targetDistance < 240.33f ) { 
                                                                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                             }
                                                                                             else { 
                                                                                                 if( mySimpleState.mySlices[16].targetDistance < 232.87f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                 else { 
                                                                                                     if( mySimpleState.mySlices[13].targetDistance < 176.36f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                                     else { 
                                                                                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                                                             if( mySimpleState.goalDirection < 0.14f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                                             else { 
                                                                                                                 if( mySimpleState.mySlices[14].targetDistance < 177.14f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                                                 else { 
                                                                                                                     if( mySimpleState.shipSpeed < 2.64f ) { 
                                                                                                                         if( mySimpleState.mySlices[3].targetDistance < 199.71f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                                         else { 
                                                                                                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                                                                                                                 if( mySimpleState.goalDirection < 0.25f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                                                             }
                                                                                                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                                         }
                                                                                                                     }
                                                                                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                                 }
                                                                                                             }
                                                                                                         }
                                                                                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                     }
                                                                                                 }
                                                                                             }
                                                                                         }
                                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                     }
                                                                                 }
                                                                                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                                             }
                                                                             else { 
                                                                                 if( mySimpleState.shipDirection < 0.31f ) { 
                                                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                 }
                                                                                 else { 
                                                                                     if( mySimpleState.mySlices[7].targetDistance < 236.55f ) { 
                                                                                         if( mySimpleState.mySlices[9].targetDistance < 194.1f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                     }
                                                                                     else { 
                                                                                         if( mySimpleState.shipDirection < 1.33f ) { 
                                                                                             if( mySimpleState.mySlices[16].targetDistance < 223.23f ) { 
                                                                                                 if( mySimpleState.goalDirection < 0.63f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                             }
                                                                                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                         }
                                                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                                                     }
                                                                                 }
                                                                             }
                                                                         }
                                                                         else { 
                                                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                                                                 if( mySimpleState.mySlices[3].targetDistance < 233.21f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                 else { 
                                                                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                                         if( mySimpleState.mySlices[2].targetDistance < 231.57f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                         else { 
                                                                                             if( mySimpleState.goalDirection < 2.01f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                         }
                                                                                     }
                                                                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                 }
                                                                             }
                                                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                                 if( mySimpleState.shipSpeed < 1.41f ) { 
                                                                                     if( mySimpleState.shipSpeed < 1.34f ) { 
                                                                                         if( mySimpleState.goalDirection < 3.03f ) { 
                                                                                             if( mySimpleState.goalDistance < 215.45f ) { 
                                                                                                 if( mySimpleState.invincible  ==  true )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                                 else { 
                                                                                                     if( mySimpleState.shipDirection < 1.76f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                     else { 
                                                                                                         if( mySimpleState.shipDirection < 1.79f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                     }
                                                                                                 }
                                                                                             }
                                                                                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                         }
                                                                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                     }
                                                                                     else { 
                                                                                         if( mySimpleState.goalDirection < 1.72f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                                                     }
                                                                                 }
                                                                                 else { 
                                                                                     if( mySimpleState.goalDirection < 2.22f ) { 
                                                                                         if( mySimpleState.mySlices[10].targetDistance < 196.86f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                         else { 
                                                                                             if( mySimpleState.mySlices[18].targetDistance < 183.64f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                                                                         }
                                                                                     }
                                                                                     else { 
                                                                                         if( mySimpleState.mySlices[1].targetDistance < 243.33f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                         else { 
                                                                                             if( mySimpleState.goalDirection < 2.74f ) { 
                                                                                                 if( mySimpleState.shipDirection < 1.21f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                                 else      return eAction::parser.stringToEnum( "Right" ); 
                                                                                             }
                                                                                             else { 
                                                                                                 if( mySimpleState.mySlices[18].targetDistance < 223.3f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                                 else { 
                                                                                                     if( mySimpleState.mySlices[10].targetDistance < 218.91f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                     else { 
                                                                                                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                                                                                             if( mySimpleState.goalDistance < 151.33f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                                         }
                                                                                                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                                                             if( mySimpleState.goalDistance < 160.39f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                         }
                                                                                                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                                                                                             if( mySimpleState.goalDirection < 3.74f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                         }
                                                                                                     }
                                                                                                 }
                                                                                             }
                                                                                         }
                                                                                     }
                                                                                 }
                                                                             }
                                                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                         }
                                                                     }
                                                                 }
                                                                 else { 
                                                                     if( mySimpleState.mySlices[8].targetDistance < 192.7f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                                     else { 
                                                                         if( mySimpleState.mySlices[7].targetDistance < 135.05f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                                         else { 
                                                                             if( mySimpleState.goalDirection < 3.61f ) { 
                                                                                 if( mySimpleState.mySlices[19].targetDistance < 225.35f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                 else { 
                                                                                     if( mySimpleState.mySlices[0].targetDistance < 134.52f ) { 
                                                                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                                             if( mySimpleState.mySlices[0].targetDistance < 115.04f ) { 
                                                                                                 if( mySimpleState.shipSpeed < 2.35f )      return eAction::parser.stringToEnum( "Right" ); 
                                                                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                                                                             }
                                                                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                                                                         }
                                                                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                     }
                                                                                     else { 
                                                                                         if( mySimpleState.mySlices[1].targetDistance < 197.03f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                                                                         else { 
                                                                                             if( mySimpleState.shipDirection < 1.62f ) { 
                                                                                                 if( mySimpleState.shipSpeed < 1.38f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                                 else { 
                                                                                                     if( mySimpleState.shipSpeed < 2.07f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                     else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                                                                                 }
                                                                                             }
                                                                                             else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                                                                         }
                                                                                     }
                                                                                 }
                                                                             }
                                                                             else { 
                                                                                 if( mySimpleState.mySlices[0].targetDistance < 217.35f ) { 
                                                                                     if( mySimpleState.goalDirection < 3.73f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                                                 }
                                                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                                                             }
                                                                         }
                                                                     }
                                                                 }
                                                             }
                                                         }
                                                     }
                                                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                                         if( mySimpleState.goalDistance < 177.87f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                         else { 
                                                             if( mySimpleState.shipDirection < 1.91f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                             else { 
                                                                 if( mySimpleState.shipDirection < 2.04f ) { 
                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 }
                                                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                             }
                                                         }
                                                     }
                                                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                                                 }
                                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                                     if( mySimpleState.canShoot  ==  true ) { 
                                                         if( mySimpleState.mySlices[0].targetDistance < 136.49f )      return eAction::parser.stringToEnum( "Up" ); 
                                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     }
                                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 }
                                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                             }
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                                 if( mySimpleState.goalDirection < 3.07f ) { 
                                                     if( mySimpleState.goalDirection < 3.05f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                 }
                                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                             }
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             }
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                         else { 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                     if( mySimpleState.mySlices[2].targetDistance < 172.95f ) { 
                                                         if( mySimpleState.shipSpeed < 1.47f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                     }
                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                 }
                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             }
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                                     if( mySimpleState.mySlices[18].targetDistance < 112.15f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                 }
                                                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                                     if( mySimpleState.shipSpeed < 1.79f )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 }
                                                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                                         if( mySimpleState.goalDistance < 61.05f ) { 
                                                             if( mySimpleState.mySlices[19].targetDistance < 33.62f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                                             else      return eAction::parser.stringToEnum( "Fire-Up-Left" ); 
                                                         }
                                                         else { 
                                                             if( mySimpleState.shipSpeed < 2.7f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                         }
                                                     }
                                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                         if( mySimpleState.canShoot  ==  true ) { 
                                                             if( mySimpleState.mySlices[9].targetDistance < 116.63f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                             else { 
                                                                 if( mySimpleState.shipDirection < 0.11f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                 else { 
                                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                         if( mySimpleState.mySlices[1].targetDistance < 161.86f ) { 
                                                                             if( mySimpleState.mySlices[1].targetDistance < 119.56f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                             else { 
                                                                                 if( mySimpleState.mySlices[0].targetDistance < 150.68f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                 else { 
                                                                                     if( mySimpleState.mySlices[19].targetDistance < 218.21f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                     else { 
                                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                                                                             if( mySimpleState.shipSpeed < 1.01f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                         }
                                                                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                     }
                                                                                 }
                                                                             }
                                                                         }
                                                                         else { 
                                                                             if( mySimpleState.goalDistance < 145.36f ) { 
                                                                                 if( mySimpleState.goalDistance < 130.64f ) { 
                                                                                     if( mySimpleState.mySlices[7].targetDistance < 238.79f ) { 
                                                                                         if( mySimpleState.shipSpeed < 3.39f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                                                     }
                                                                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                 }
                                                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                                                             }
                                                                             else { 
                                                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                                     if( mySimpleState.mySlices[13].targetDistance < 175.59f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                 }
                                                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                             }
                                                                         }
                                                                     }
                                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                 }
                                                             }
                                                         }
                                                         else { 
                                                             if( mySimpleState.mySlices[1].targetDistance < 201.37f ) { 
                                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Fire-Up-Left" ); 
                                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Fire-Up-Left" ); 
                                                                 }
                                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             }
                                                             else { 
                                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                     if( mySimpleState.goalDistance < 144.55f ) { 
                                                                         if( mySimpleState.shipDirection < 1.52f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                         else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                                                     }
                                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                                 }
                                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                             }
                                                         }
                                                     }
                                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 }
                                                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                                     if( mySimpleState.shipSpeed < 2.22f ) { 
                                                         if( mySimpleState.goalDirection < 5.95f ) { 
                                                             if( mySimpleState.shipDirection < 0.18f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                             else { 
                                                                 if( mySimpleState.mySlices[18].targetDistance < 180.42f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                             }
                                                         }
                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                     }
                                                     else { 
                                                         if( mySimpleState.goalDirection < 5.93f ) { 
                                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                 if( mySimpleState.shipDirection < 0.33f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                 else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                                             }
                                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         }
                                                         else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                                     }
                                                 }
                                             }
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         }
                                     }
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                         if( mySimpleState.shipDirection < 0.26f ) { 
                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         }
                                         else { 
                                             if( mySimpleState.mySlices[11].targetDistance < 180.44f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             else { 
                                                 if( mySimpleState.mySlices[18].targetDistance < 193.65f )      return eAction::parser.stringToEnum( "Up" ); 
                                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             }
                                         }
                                     }
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                         if( mySimpleState.shipDirection < 1.19f )      return eAction::parser.stringToEnum( "Right" ); 
                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     }
                                 }
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                     if( mySimpleState.shipDirection < 0.67f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                     else { 
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                             if( mySimpleState.goalDistance < 213.31f )      return eAction::parser.stringToEnum( "Up" ); 
                                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         }
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                 }
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[6].targetDistance < 159.63f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         else { 
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                 if( mySimpleState.mySlices[12].targetDistance < 204.98f ) { 
                                                     if( mySimpleState.invincible  ==  true )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     else { 
                                                         if( mySimpleState.shipDirection < 1.66f )      return eAction::parser.stringToEnum( "Up" ); 
                                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     }
                                                 }
                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                             }
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                     }
                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                         if( mySimpleState.mySlices[7].targetDistance < 109.43f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     }
                                 }
                             }
                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                 if( mySimpleState.mySlices[1].targetDistance < 255.09f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else { 
                                     if( mySimpleState.mySlices[12].targetDistance < 105.65f ) { 
                                         if( mySimpleState.shipDirection < 0.17f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                     else { 
                                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                             if( mySimpleState.mySlices[16].targetDistance < 229.06f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             else { 
                                                 if( mySimpleState.goalDirection < 0.41f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                             }
                                         }
                                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                 }
                             }
                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                 if( mySimpleState.shipSpeed < 2.9f ) { 
                                     if( mySimpleState.mySlices[2].targetDistance < 241.29f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                     else { 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                             if( mySimpleState.mySlices[9].targetDistance < 135.8f ) { 
                                                 if( mySimpleState.mySlices[6].targetDistance < 74.69f )      return eAction::parser.stringToEnum( "Up" ); 
                                                 else { 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 }
                                             }
                                             else { 
                                                 if( mySimpleState.mySlices[0].targetDistance < 247.46f ) { 
                                                     if( mySimpleState.shipSpeed < 2.39f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                 }
                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                             }
                                         }
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                             if( mySimpleState.goalDirection < 3.23f )      return eAction::parser.stringToEnum( "Up" ); 
                                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         }
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                 }
                                 else { 
                                     if( mySimpleState.shipDirection < 0.86f ) { 
                                         if( mySimpleState.shipSpeed < 3.1f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 }
                             }
                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                 if( mySimpleState.mySlices[2].targetDistance < 178.95f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else { 
                                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                         if( mySimpleState.mySlices[10].targetDistance < 113.11f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     }
                                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                             }
                         }
                     }
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                         if( mySimpleState.mySlices[8].targetDistance < 239.05f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else { 
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[10].targetDistance < 38 )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 else      return eAction::parser.stringToEnum( "Right" ); 
                             }
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                 if( mySimpleState.shipDirection < 1.82f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 else { 
                                     if( mySimpleState.goalDirection < 1.66f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 }
                             }
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                     }
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                         if( mySimpleState.goalDistance < 192.76f ) { 
                             if( mySimpleState.mySlices[2].targetDistance < 167.8f )      return eAction::parser.stringToEnum( "Up" ); 
                             else { 
                                 if( mySimpleState.mySlices[3].targetDistance < 218.62f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 else { 
                                     if( mySimpleState.shipDirection < 1.22f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     else { 
                                         if( mySimpleState.goalDirection < 2.69f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                 }
                             }
                         }
                         else { 
                             if( mySimpleState.shipDirection < 0.4f )      return eAction::parser.stringToEnum( "Up" ); 
                             else { 
                                 if( mySimpleState.mySlices[4].targetDistance < 101.46f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                 else { 
                                     if( mySimpleState.invincible  ==  true )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     else { 
                                         if( mySimpleState.mySlices[4].targetDistance < 178.78f )      return eAction::parser.stringToEnum( "Fire-Up-Left" ); 
                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     }
                                 }
                             }
                         }
                     }
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                         if( mySimpleState.mySlices[15].targetDistance < 249.4f ) { 
                             if( mySimpleState.mySlices[10].targetDistance < 168.95f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                         else { 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.canShoot  ==  true ) { 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                         if( mySimpleState.mySlices[9].targetDistance < 37.03f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         else      return eAction::parser.stringToEnum( "Right" ); 
                                     }
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                             if( mySimpleState.shipSpeed < 0.61f )      return eAction::parser.stringToEnum( "Right" ); 
                                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         }
                                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                             if( mySimpleState.shipDirection < 0.35f )      return eAction::parser.stringToEnum( "Right" ); 
                                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         }
                                     }
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                         }
                     }
                 }
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                     if( mySimpleState.goalDirection < 6.03f ) { 
                         if( mySimpleState.mySlices[2].targetDistance < 254.59f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else { 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.goalDistance < 206.3f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                             }
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                 if( mySimpleState.goalDistance < 161.7f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 else { 
                                     if( mySimpleState.invincible  ==  true )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 }
                             }
                         }
                     }
                     else { 
                         if( mySimpleState.mySlices[14].targetDistance < 157.51f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                 }
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.shipSpeed < 1.35f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                     if( mySimpleState.shipDirection < 0.82f ) { 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                             if( mySimpleState.mySlices[16].targetDistance < 127.09f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     else { 
                         if( mySimpleState.mySlices[15].targetDistance < 254.38f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else { 
                             if( mySimpleState.mySlices[3].targetDistance < 158.89f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else      return eAction::parser.stringToEnum( "Right" ); 
                         }
                     }
                 }
             }
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[13].targetDistance < 227.43f ) { 
                         if( mySimpleState.goalDirection < 1.06f )      return eAction::parser.stringToEnum( "Up" ); 
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                     else { 
                         if( mySimpleState.mySlices[13].targetDistance < 247.38f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else { 
                             if( mySimpleState.shipDirection < 0.06f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                     }
                 }
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                     if( mySimpleState.shipDirection < 0.09f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                 }
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.shipSpeed < 0.33f ) { 
                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                             if( mySimpleState.mySlices[6].targetDistance < 134.5f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.shipDirection < 0.48f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else      return eAction::parser.stringToEnum( "Right" ); 
                         }
                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     else { 
                         if( mySimpleState.mySlices[2].targetDistance < 149.44f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                 }
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[13].targetDistance < 149.34f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else { 
                         if( mySimpleState.mySlices[15].targetDistance < 251.98f )      return eAction::parser.stringToEnum( "Right" ); 
                         else { 
                             if( mySimpleState.mySlices[16].targetDistance < 253.81f ) { 
                                 if( mySimpleState.shipDirection < 0.95f )      return eAction::parser.stringToEnum( "Right" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                     }
                 }
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
         }
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
             if( mySimpleState.mySlices[13].targetDistance < 88.5f ) { 
                 if( mySimpleState.mySlices[3].targetDistance < 170.52f )      return eAction::parser.stringToEnum( "Up" ); 
                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
             }
             else { 
                 if( mySimpleState.shipDirection < 1.13f ) { 
                     if( mySimpleState.shipDirection < 0.6f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else { 
                         if( mySimpleState.canShoot  ==  true )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                 }
                 else { 
                     if( mySimpleState.shipDirection < 1.75f ) { 
                         if( mySimpleState.mySlices[1].targetDistance < 241.17f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else { 
                             if( mySimpleState.mySlices[12].targetDistance < 41.08f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else { 
                                 if( mySimpleState.shipSpeed < 0.85f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else { 
                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                             if( mySimpleState.shipSpeed < 4.09f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     }
                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                             }
                         }
                     }
                     else { 
                         if( mySimpleState.mySlices[1].targetDistance < 204.88f )      return eAction::parser.stringToEnum( "Up" ); 
                         else { 
                             if( mySimpleState.mySlices[9].targetDistance < 98.22f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                     }
                 }
             }
         }
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
             if( mySimpleState.shipSpeed < 2.13f ) { 
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
             else { 
                 if( mySimpleState.goalDirection < 1.04f ) { 
                     if( mySimpleState.mySlices[7].targetDistance < 232.71f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.mySlices[0].targetDistance < 170.17f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else { 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.goalDirection < 0.79f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                     }
                 }
                 else { 
                     if( mySimpleState.goalDistance < 161.47f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                 }
             }
         }
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.shipSpeed < 1.69f ) { 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 else { 
                     if( mySimpleState.canShoot  ==  true ) { 
                         if( mySimpleState.goalDirection < 2.77f )      return eAction::parser.stringToEnum( "Right" ); 
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                     else      return eAction::parser.stringToEnum( "Fire-Up-Right" ); 
                 }
             }
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                 if( mySimpleState.mySlices[18].targetDistance < 205.02f ) { 
                     if( mySimpleState.mySlices[4].targetDistance < 81.61f )      return eAction::parser.stringToEnum( "Fire-Up-Right" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 else { 
                     if( mySimpleState.mySlices[14].targetDistance < 179.24f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                 }
             }
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                 if( mySimpleState.mySlices[16].targetDistance < 98.61f ) { 
                     if( mySimpleState.mySlices[13].targetDistance < 224.96f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else { 
                         if( mySimpleState.shipDirection < 0.51f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                 }
                 else { 
                     if( mySimpleState.mySlices[4].targetDistance < 163 )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.mySlices[8].targetDistance < 201.87f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                         else { 
                             if( mySimpleState.mySlices[17].targetDistance < 118.41f ) { 
                                 if( mySimpleState.goalDistance < 200.94f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                     }
                 }
             }
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
     }
     else { 
         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                 if( mySimpleState.mySlices[1].targetDistance < 195.09f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 else      return eAction::parser.stringToEnum( "Right" ); 
             }
             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[5].targetDistance < 193.25f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                         }
                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                 }
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                     if( mySimpleState.canShoot  ==  true )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                 if( mySimpleState.shipSpeed < 1.02f )      return eAction::parser.stringToEnum( "Up" ); 
                 else { 
                     if( mySimpleState.goalDirection < 3.93f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                 }
             }
         }
         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
             if( mySimpleState.mySlices[3].targetDistance < 231.98f )      return eAction::parser.stringToEnum( "Up-Right" ); 
             else      return eAction::parser.stringToEnum( "Up-Left" ); 
         }
         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
             if( mySimpleState.shipSpeed < 0.02f ) { 
                 if( mySimpleState.shipDirection < 1.26f ) { 
                     if( mySimpleState.mySlices[0].targetDistance < 82.26f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
             }
             else { 
                 if( mySimpleState.mySlices[9].targetDistance < 204.39f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                 else { 
                     if( mySimpleState.mySlices[9].targetDistance < 244.66f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                             if( mySimpleState.mySlices[13].targetDistance < 119.48f )      return eAction::parser.stringToEnum( "Right" ); 
                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                         }
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.goalDirection < 4.02f )      return eAction::parser.stringToEnum( "Left" ); 
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Right" ); 
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                     }
                 }
             }
         }
         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.canShoot  ==  true )      return eAction::parser.stringToEnum( "Up" ); 
                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                     }
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                 if( mySimpleState.goalDistance < 290.17f )      return eAction::parser.stringToEnum( "Up" ); 
                 else { 
                     if( mySimpleState.mySlices[8].targetDistance < 203.57f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else { 
                         if( mySimpleState.goalDistance < 307.51f ) { 
                             if( mySimpleState.shipSpeed < 1.48f ) { 
                                 if( mySimpleState.shipSpeed < 1.3f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                             }
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                 }
             }
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
             if( mySimpleState.shipDirection < 0.29f )      return eAction::parser.stringToEnum( "NoDirection" ); 
             else { 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
             }
         }
         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                     if( mySimpleState.shipSpeed < 2.06f ) { 
                         if( mySimpleState.mySlices[1].targetDistance < 133.39f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else { 
                             if( mySimpleState.goalDirection < 1.16f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                         }
                     }
                     else { 
                         if( mySimpleState.mySlices[16].targetDistance < 126.88f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                         else { 
                             if( mySimpleState.mySlices[5].targetDistance < 226.59f ) { 
                                 if( mySimpleState.shipSpeed < 2.24f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                             }
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                     }
                 }
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                     if( mySimpleState.canShoot  ==  true )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[11].targetDistance < 137.79f ) { 
                         if( mySimpleState.mySlices[16].targetDistance < 185.84f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else { 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                 if( mySimpleState.mySlices[1].targetDistance < 108.64f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                             }
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                     }
                     else { 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.shipSpeed < 0.76f ) { 
                                 if( mySimpleState.mySlices[15].targetDistance < 64.64f )      return eAction::parser.stringToEnum( "Right" ); 
                                 else { 
                                     if( mySimpleState.mySlices[3].targetDistance < 138.54f )      return eAction::parser.stringToEnum( "Left" ); 
                                     else      return eAction::parser.stringToEnum( "Right" ); 
                                 }
                             }
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                     }
                 }
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                 if( mySimpleState.canShoot  ==  true ) { 
                     if( mySimpleState.shipSpeed < 3.2f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                 }
                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
             }
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.goalDistance < 295.04f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                 }
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                 if( mySimpleState.shipDirection < 0.17f ) { 
                     if( mySimpleState.mySlices[0].targetDistance < 157.02f ) { 
                         if( mySimpleState.mySlices[0].targetDistance < 60.63f )      return eAction::parser.stringToEnum( "Left" ); 
                         else      return eAction::parser.stringToEnum( "Right" ); 
                     }
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 else { 
                     if( mySimpleState.mySlices[11].targetDistance < 221.7f ) { 
                         if( mySimpleState.mySlices[10].targetDistance < 242.97f ) { 
                             if( mySimpleState.goalDistance < 256.4f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                         }
                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                     }
                     else { 
                         if( mySimpleState.goalDirection < 3.1f )      return eAction::parser.stringToEnum( "Left" ); 
                         else { 
                             if( mySimpleState.shipSpeed < 1.17f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                     }
                 }
             }
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                     if( mySimpleState.shipDirection < 1.28f ) { 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                 if( mySimpleState.mySlices[6].targetDistance < 110.95f ) { 
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[6].targetDistance < 108.41f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     }
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                         }
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     else { 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[0].targetDistance < 186.82f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else      return eAction::parser.stringToEnum( "Left" ); 
                         }
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                 }
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                     if( mySimpleState.goalDirection < 0.28f ) { 
                         if( mySimpleState.goalDirection < 0.25f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                     else { 
                         if( mySimpleState.mySlices[13].targetDistance < 118.38f )      return eAction::parser.stringToEnum( "Up" ); 
                         else { 
                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                 if( mySimpleState.mySlices[3].targetDistance < 161.71f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else { 
                                     if( mySimpleState.goalDistance < 271.41f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                 }
                             }
                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                     }
                 }
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                     if( mySimpleState.shipSpeed < 0.02f ) { 
                         if( mySimpleState.mySlices[13].targetDistance < 229.63f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else { 
                             if( mySimpleState.mySlices[9].targetDistance < 216.54f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                         }
                     }
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                         if( mySimpleState.mySlices[0].targetDistance < 103.92f )      return eAction::parser.stringToEnum( "Up" ); 
                         else { 
                             if( mySimpleState.canShoot  ==  true )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                         }
                     }
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[11].targetDistance < 62.07f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else { 
                             if( mySimpleState.mySlices[9].targetDistance < 237.15f )      return eAction::parser.stringToEnum( "Left" ); 
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                     }
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                 }
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.shipDirection < 1.36f ) { 
                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                             if( mySimpleState.mySlices[7].targetDistance < 157.52f ) { 
                                 if( mySimpleState.invincible  ==  true ) { 
                                     if( mySimpleState.shipSpeed < 0.1f )      return eAction::parser.stringToEnum( "Left" ); 
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                                 else { 
                                     if( mySimpleState.goalDirection < 4.93f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 }
                             }
                             else { 
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[19].targetDistance < 59.46f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         else { 
                                             if( mySimpleState.mySlices[19].targetDistance < 60.77f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         }
                                     }
                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                             }
                         }
                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                             if( mySimpleState.mySlices[15].targetDistance < 233.28f ) { 
                                 if( mySimpleState.mySlices[10].targetDistance < 224.95f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 else { 
                                     if( mySimpleState.shipSpeed < 1.3f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 }
                             }
                             else { 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[7].targetDistance < 180.75f ) { 
                                             if( mySimpleState.goalDistance < 246.55f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             else { 
                                                 if( mySimpleState.shipDirection < 0.61f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                             }
                                         }
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                         }
                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                             if( mySimpleState.mySlices[14].targetDistance < 172.13f )      return eAction::parser.stringToEnum( "Up" ); 
                             else { 
                                 if( mySimpleState.shipSpeed < 1.74f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 else { 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 }
                             }
                         }
                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[10].targetDistance < 251.39f ) { 
                                 if( mySimpleState.canShoot  ==  true ) { 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                             if( mySimpleState.mySlices[17].targetDistance < 186.4f )      return eAction::parser.stringToEnum( "Up" ); 
                                             else { 
                                                 if( mySimpleState.goalDistance < 262.17f )      return eAction::parser.stringToEnum( "Right" ); 
                                                 else      return eAction::parser.stringToEnum( "Left" ); 
                                             }
                                         }
                                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                             if( mySimpleState.mySlices[14].targetDistance < 209.83f ) { 
                                                 if( mySimpleState.shipSpeed < 0.02f )      return eAction::parser.stringToEnum( "Right" ); 
                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                             }
                                             else { 
                                                 if( mySimpleState.shipSpeed < 0.72f ) { 
                                                     if( mySimpleState.mySlices[15].targetDistance < 215.25f )      return eAction::parser.stringToEnum( "Left" ); 
                                                     else { 
                                                         if( mySimpleState.mySlices[12].targetDistance < 159.17f )      return eAction::parser.stringToEnum( "Left" ); 
                                                         else { 
                                                             if( mySimpleState.goalDistance < 256.09f )      return eAction::parser.stringToEnum( "Left" ); 
                                                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                         }
                                                     }
                                                 }
                                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             }
                                         }
                                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 else { 
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Right" ); 
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                         if( mySimpleState.mySlices[1].targetDistance < 35.09f )      return eAction::parser.stringToEnum( "Down" ); 
                                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     }
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                             }
                             else { 
                                 if( mySimpleState.shipSpeed < 1.49f ) { 
                                     if( mySimpleState.goalDirection < 3.84f ) { 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                             if( mySimpleState.shipSpeed < 0.06f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                             if( mySimpleState.goalDirection < 0.6f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                 if( mySimpleState.mySlices[5].targetDistance < 24.41f ) { 
                                                     if( mySimpleState.mySlices[5].targetDistance < 23.41f )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                 }
                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                             }
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         }
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                             if( mySimpleState.mySlices[19].targetDistance < 128.73f )      return eAction::parser.stringToEnum( "Up" ); 
                                             else { 
                                                 if( mySimpleState.shipDirection < 0.66f ) { 
                                                     if( mySimpleState.goalDirection < 2.07f )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else { 
                                                         if( mySimpleState.shipSpeed < 1.33f )      return eAction::parser.stringToEnum( "Fire-Up-Right" ); 
                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                     }
                                                 }
                                                 else { 
                                                     if( mySimpleState.mySlices[2].targetDistance < 219.02f )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else { 
                                                         if( mySimpleState.goalDistance < 259.72f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                         else      return eAction::parser.stringToEnum( "Right" ); 
                                                     }
                                                 }
                                             }
                                         }
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                             if( mySimpleState.mySlices[0].targetDistance < 39.8f ) { 
                                                 if( mySimpleState.mySlices[4].targetDistance < 234.33f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                 else { 
                                                     if( mySimpleState.mySlices[2].targetDistance < 103.97f )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                 }
                                             }
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                     }
                                     else { 
                                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                             if( mySimpleState.mySlices[6].targetDistance < 209.21f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         }
                                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                             if( mySimpleState.mySlices[9].targetDistance < 238.81f ) { 
                                                 if( mySimpleState.invincible  ==  true ) { 
                                                     if( mySimpleState.shipDirection < 0.42f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     else      return eAction::parser.stringToEnum( "Left" ); 
                                                 }
                                                 else      return eAction::parser.stringToEnum( "Right" ); 
                                             }
                                             else { 
                                                 if( mySimpleState.shipDirection < 0.13f )      return eAction::parser.stringToEnum( "Up" ); 
                                                 else { 
                                                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                                                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                                         if( mySimpleState.shipDirection < 0.66f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                     }
                                                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 }
                                             }
                                         }
                                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                 }
                                 else { 
                                     if( mySimpleState.goalDirection < 6.19f ) { 
                                         if( mySimpleState.goalDistance < 252.83f ) { 
                                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                                     if( mySimpleState.mySlices[0].targetDistance < 168.74f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                 }
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                     if( mySimpleState.goalDistance < 247.56f ) { 
                                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                                             if( mySimpleState.goalDirection < 4.16f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                             else { 
                                                                 if( mySimpleState.goalDirection < 4.25f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                             }
                                                         }
                                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                                                 if( mySimpleState.goalDistance < 238.99f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                                             }
                                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                                                 if( mySimpleState.mySlices[12].targetDistance < 196.14f ) { 
                                                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 }
                                                                 else { 
                                                                     if( mySimpleState.shipDirection < 0.49f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                 }
                                                             }
                                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                 if( mySimpleState.shipDirection < 0.47f ) { 
                                                                     if( mySimpleState.shipDirection < 0.29f ) { 
                                                                         if( mySimpleState.goalDistance < 238.71f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                     }
                                                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                 }
                                                                 else { 
                                                                     if( mySimpleState.goalDirection < 3.85f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                 }
                                                             }
                                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         }
                                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     }
                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                 }
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                                     if( mySimpleState.shipDirection < 1.28f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                 }
                                             }
                                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         }
                                         else { 
                                             if( mySimpleState.mySlices[0].targetDistance < 95.44f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                             else { 
                                                 if( mySimpleState.shipDirection < 0.23f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                 else { 
                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                         if( mySimpleState.shipDirection < 0.9f ) { 
                                                             if( mySimpleState.mySlices[19].targetDistance < 254.76f )      return eAction::parser.stringToEnum( "Up" ); 
                                                             else { 
                                                                 if( mySimpleState.goalDirection < 1.85f ) { 
                                                                     if( mySimpleState.mySlices[2].targetDistance < 216.59f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                     else { 
                                                                         if( mySimpleState.mySlices[18].targetDistance < 193.46f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                         else { 
                                                                             if( mySimpleState.shipDirection < 0.38f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                             else { 
                                                                                 if( mySimpleState.shipDirection < 0.52f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                                                             }
                                                                         }
                                                                     }
                                                                 }
                                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                                             }
                                                         }
                                                         else { 
                                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                                                 if( mySimpleState.mySlices[12].targetDistance < 2.62f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                                             }
                                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                 if( mySimpleState.invincible  ==  true )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                 else { 
                                                                     if( mySimpleState.canShoot  ==  true )      return eAction::parser.stringToEnum( "Up" ); 
                                                                     else { 
                                                                         if( mySimpleState.mySlices[19].targetDistance < 105.53f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                                     }
                                                                 }
                                                             }
                                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         }
                                                     }
                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 }
                                             }
                                         }
                                     }
                                     else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                 }
                             }
                         }
                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                             if( mySimpleState.shipSpeed < 1.52f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                             if( mySimpleState.mySlices[4].targetDistance < 188.67f )      return eAction::parser.stringToEnum( "Up" ); 
                             else { 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             }
                         }
                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                             if( mySimpleState.goalDistance < 266.61f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                         }
                     }
                     else { 
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                 if( mySimpleState.goalDistance < 232.95f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                             }
                         }
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                             if( mySimpleState.mySlices[3].targetDistance < 68.16f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else      return eAction::parser.stringToEnum( "Left" ); 
                         }
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Fire-Up-Right" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.goalDistance < 231.33f ) { 
                                         if( mySimpleState.mySlices[15].targetDistance < 252.23f ) { 
                                             if( mySimpleState.mySlices[0].targetDistance < 165.8f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                             else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                         }
                                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     }
                                     else { 
                                         if( mySimpleState.goalDistance < 238.04f )      return eAction::parser.stringToEnum( "Left" ); 
                                         else      return eAction::parser.stringToEnum( "Fire-Up-Right" ); 
                                     }
                                 }
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                 if( mySimpleState.goalDirection < 3.94f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                 if( mySimpleState.goalDistance < 269.12f ) { 
                                     if( mySimpleState.mySlices[2].targetDistance < 200.07f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     else      return eAction::parser.stringToEnum( "Right" ); 
                                 }
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[2].targetDistance < 155.02f ) { 
                                     if( mySimpleState.goalDirection < 1.8f ) { 
                                         if( mySimpleState.shipSpeed < 0.66f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                     }
                                     else { 
                                         if( mySimpleState.canShoot  ==  true ) { 
                                             if( mySimpleState.goalDirection < 5.12f ) { 
                                                 if( mySimpleState.shipDirection < 2.47f )      return eAction::parser.stringToEnum( "Right" ); 
                                                 else      return eAction::parser.stringToEnum( "Left" ); 
                                             }
                                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         }
                                         else { 
                                             if( mySimpleState.goalDistance < 269.44f )      return eAction::parser.stringToEnum( "Right" ); 
                                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         }
                                     }
                                 }
                                 else { 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                         if( mySimpleState.mySlices[2].targetDistance < 199.04f ) { 
                                             if( mySimpleState.goalDirection < 1.95f ) { 
                                                 if( mySimpleState.shipDirection < 1.84f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                             }
                                             else { 
                                                 if( mySimpleState.goalDirection < 2.63f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                                 else      return eAction::parser.stringToEnum( "Fire-Up-Right" ); 
                                             }
                                         }
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[18].targetDistance < 106.55f ) { 
                                             if( mySimpleState.shipDirection < 1.97f ) { 
                                                 if( mySimpleState.shipSpeed < 0.7f )      return eAction::parser.stringToEnum( "Right" ); 
                                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                             }
                                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         }
                                         else { 
                                             if( mySimpleState.canShoot  ==  true ) { 
                                                 if( mySimpleState.goalDistance < 256.85f ) { 
                                                     if( mySimpleState.mySlices[1].targetDistance < 157.14f ) { 
                                                         if( mySimpleState.shipSpeed < 2.28f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                     }
                                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 }
                                                 else { 
                                                     if( mySimpleState.mySlices[5].targetDistance < 201.9f )      return eAction::parser.stringToEnum( "Right" ); 
                                                     else { 
                                                         if( mySimpleState.goalDistance < 281.85f ) { 
                                                             if( mySimpleState.goalDistance < 279.75f ) { 
                                                                 if( mySimpleState.goalDistance < 268.25f ) { 
                                                                     if( mySimpleState.mySlices[1].targetDistance < 68.68f )      return eAction::parser.stringToEnum( "Left" ); 
                                                                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                                 }
                                                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                             }
                                                             else      return eAction::parser.stringToEnum( "Left" ); 
                                                         }
                                                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                     }
                                                 }
                                             }
                                             else { 
                                                 if( mySimpleState.mySlices[14].targetDistance < 198.37f )      return eAction::parser.stringToEnum( "Down" ); 
                                                 else { 
                                                     if( mySimpleState.mySlices[19].targetDistance < 143.31f ) { 
                                                         if( mySimpleState.shipSpeed < 0.87f ) { 
                                                             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                                                             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         }
                                                         else { 
                                                             if( mySimpleState.shipSpeed < 1.7f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                                         }
                                                     }
                                                     else { 
                                                         if( mySimpleState.shipDirection < 2.88f ) { 
                                                             if( mySimpleState.shipDirection < 1.57f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                             else { 
                                                                 if( mySimpleState.invincible  ==  true )      return eAction::parser.stringToEnum( "Fire-Up-Right" ); 
                                                                 else { 
                                                                     if( mySimpleState.mySlices[1].targetDistance < 102.12f )      return eAction::parser.stringToEnum( "Right" ); 
                                                                     else { 
                                                                         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Fire-Up-Right" ); 
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
                                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         }
                                                     }
                                                 }
                                             }
                                         }
                                     }
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                         if( mySimpleState.mySlices[2].targetDistance < 158.65f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     }
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                             }
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[5].targetDistance < 177.52f ) { 
                                         if( mySimpleState.mySlices[0].targetDistance < 107.92f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                     else { 
                                         if( mySimpleState.mySlices[18].targetDistance < 157.85f ) { 
                                             if( mySimpleState.shipDirection < 1.47f )      return eAction::parser.stringToEnum( "Up" ); 
                                             else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                         }
                                         else { 
                                             if( mySimpleState.goalDirection < 3.36f ) { 
                                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                                     if( mySimpleState.mySlices[5].targetDistance < 217.42f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                                 }
                                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             }
                                             else { 
                                                 if( mySimpleState.shipDirection < 1.45f ) { 
                                                     if( mySimpleState.mySlices[0].targetDistance < 116.26f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                     else      return eAction::parser.stringToEnum( "Right" ); 
                                                 }
                                                 else      return eAction::parser.stringToEnum( "Right" ); 
                                             }
                                         }
                                     }
                                 }
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                 if( mySimpleState.shipDirection < 1.87f ) { 
                                     if( mySimpleState.mySlices[0].targetDistance < 34.56f ) { 
                                         if( mySimpleState.mySlices[12].targetDistance < 176.68f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                         else { 
                                             if( mySimpleState.shipSpeed < 1.38f )      return eAction::parser.stringToEnum( "Up" ); 
                                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         }
                                     }
                                     else { 
                                         if( mySimpleState.goalDirection < 2.34f )      return eAction::parser.stringToEnum( "Left" ); 
                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     }
                                 }
                                 else { 
                                     if( mySimpleState.shipSpeed < 0.65f ) { 
                                         if( mySimpleState.goalDistance < 264.37f )      return eAction::parser.stringToEnum( "Right" ); 
                                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     }
                                     else { 
                                         if( mySimpleState.mySlices[2].targetDistance < 232.95f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else { 
                                             if( mySimpleState.mySlices[3].targetDistance < 227.85f )      return eAction::parser.stringToEnum( "Fire-Up-Right" ); 
                                             else      return eAction::parser.stringToEnum( "Right" ); 
                                         }
                                     }
                                 }
                             }
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.shipSpeed < 3.23f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 }
                                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                         }
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Left" ); 
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                     }
                 }
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                     if( mySimpleState.mySlices[4].targetDistance < 161.71f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.mySlices[19].targetDistance < 151.82f )      return eAction::parser.stringToEnum( "Up" ); 
                         else { 
                             if( mySimpleState.mySlices[13].targetDistance < 87.91f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                     }
                 }
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                     if( mySimpleState.mySlices[15].targetDistance < 242.23f ) { 
                         if( mySimpleState.goalDistance < 266.6f ) { 
                             if( mySimpleState.goalDirection < 0.55f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                     if( mySimpleState.mySlices[1].targetDistance < 62.08f ) { 
                         if( mySimpleState.goalDistance < 240.3f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                         else { 
                             if( mySimpleState.mySlices[1].targetDistance < 38.99f ) { 
                                 if( mySimpleState.goalDistance < 247.09f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                             }
                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                         }
                     }
                     else { 
                         if( mySimpleState.shipDirection < 0.16f )      return eAction::parser.stringToEnum( "Up" ); 
                         else { 
                             if( mySimpleState.mySlices[12].targetDistance < 251.19f ) { 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[3].targetDistance < 216.58f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     else      return eAction::parser.stringToEnum( "Right" ); 
                                 }
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             else { 
                                 if( mySimpleState.mySlices[8].targetDistance < 255.81f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 else { 
                                     if( mySimpleState.goalDistance < 254.14f ) { 
                                         if( mySimpleState.shipSpeed < 0.69f )      return eAction::parser.stringToEnum( "Left" ); 
                                         else { 
                                             if( mySimpleState.goalDirection < 3 )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                             else      return eAction::parser.stringToEnum( "Right" ); 
                                         }
                                     }
                                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 }
                             }
                         }
                     }
                 }
             }
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                     if( mySimpleState.mySlices[1].targetDistance < 201.34f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                 }
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                     if( mySimpleState.mySlices[1].targetDistance < 237.79f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.mySlices[1].targetDistance < 238.09f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else { 
                             if( mySimpleState.mySlices[5].targetDistance < 158.05f )      return eAction::parser.stringToEnum( "Up" ); 
                             else { 
                                 if( mySimpleState.goalDistance < 259.88f ) { 
                                     if( mySimpleState.shipDirection < 0.57f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 }
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                         }
                     }
                 }
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[19].targetDistance < 206.07f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else { 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                 }
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                 if( mySimpleState.mySlices[18].targetDistance < 250.78f )      return eAction::parser.stringToEnum( "Up" ); 
                 else { 
                     if( mySimpleState.mySlices[17].targetDistance < 95.12f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else { 
                         if( mySimpleState.mySlices[13].targetDistance < 254.57f ) { 
                             if( mySimpleState.shipDirection < 0.25f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                         else { 
                             if( mySimpleState.mySlices[0].targetDistance < 235.94f )      return eAction::parser.stringToEnum( "Up" ); 
                             else { 
                                 if( mySimpleState.shipSpeed < 1.73f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                             }
                         }
                     }
                 }
             }
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                 if( mySimpleState.invincible  ==  true ) { 
                     if( mySimpleState.mySlices[11].targetDistance < 117.42f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.shipDirection < 0.28f ) { 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                 }
                 else      return eAction::parser.stringToEnum( "Right" ); 
             }
         }
         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
             if( mySimpleState.mySlices[11].targetDistance < 251.19f )      return eAction::parser.stringToEnum( "Up-Right" ); 
             else { 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[13].targetDistance < 216.43f ) { 
                         if( mySimpleState.mySlices[13].targetDistance < 173.7f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                     }
                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                 }
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
         }
         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
             if( mySimpleState.mySlices[12].targetDistance < 220.01f )      return eAction::parser.stringToEnum( "Up" ); 
             else { 
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[0].targetDistance < 206.19f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.goalDistance < 296.31f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                     }
                 }
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
         }
         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
             if( mySimpleState.invincible  ==  true ) { 
                 if( mySimpleState.mySlices[16].targetDistance < 110.81f )      return eAction::parser.stringToEnum( "Up" ); 
                 else { 
                     if( mySimpleState.goalDirection < 0.11f ) { 
                         if( mySimpleState.mySlices[0].targetDistance < 172.07f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                     }
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
             }
             else { 
                 if( mySimpleState.canShoot  ==  true )      return eAction::parser.stringToEnum( "Up" ); 
                 else { 
                     if( mySimpleState.goalDirection < 3.16f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
             }
         }
     }
 }
 else { 
     if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
         if( mySimpleState.shipDirection < 4.99f ) { 
             if( mySimpleState.mySlices[9].targetDistance < 167.32f )      return eAction::parser.stringToEnum( "NoDirection" ); 
             else { 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.shipSpeed < 2.56f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                 }
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
         }
         else { 
             if( mySimpleState.shipSpeed < 0.12f )      return eAction::parser.stringToEnum( "Right" ); 
             else { 
                 if( mySimpleState.mySlices[14].targetDistance < 91.31f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 else { 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
             }
         }
     }
     if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                     if( mySimpleState.mySlices[2].targetDistance < 220.76f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                 }
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[19].targetDistance < 104.07f )      return eAction::parser.stringToEnum( "Up" ); 
                 else { 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
             }
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
         }
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
     }
     if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
         if( mySimpleState.shipSpeed < 0.13f ) { 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Right" ); 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "NoDirection" ); 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         else { 
             if( mySimpleState.invincible  ==  true ) { 
                 if( mySimpleState.mySlices[2].targetDistance < 145.89f ) { 
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.shipDirection < 4.95f ) { 
                             if( mySimpleState.goalDistance < 156.77f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                         else { 
                             if( mySimpleState.mySlices[18].targetDistance < 130.22f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                         }
                     }
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 else { 
                     if( mySimpleState.shipSpeed < 1.98f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                 }
             }
             else { 
                 if( mySimpleState.shipDirection < 5.91f ) { 
                     if( mySimpleState.mySlices[11].targetDistance < 121.12f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     else { 
                         if( mySimpleState.mySlices[12].targetDistance < 252.74f ) { 
                             if( mySimpleState.mySlices[12].targetDistance < 248.94f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                 }
                 else { 
                     if( mySimpleState.goalDirection < 3.79f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                 }
             }
         }
     }
     if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
         if( mySimpleState.goalDirection < 1 ) { 
             if( mySimpleState.mySlices[10].targetDistance < 241.97f ) { 
                 if( mySimpleState.goalDistance < 233.54f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 else      return eAction::parser.stringToEnum( "Right" ); 
             }
             else      return eAction::parser.stringToEnum( "Up" ); 
         }
         else { 
             if( mySimpleState.mySlices[7].targetDistance < 228.13f ) { 
                 if( mySimpleState.mySlices[15].targetDistance < 167.18f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
             }
             else { 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                     if( mySimpleState.mySlices[18].targetDistance < 207.07f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.goalDirection < 4.9f )      return eAction::parser.stringToEnum( "Up" ); 
                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                     }
                 }
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.goalDirection < 3.4f ) { 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.shipDirection < 5.3f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     else { 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                 if( mySimpleState.goalDistance < 114.34f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Right" ); 
                             }
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                     if( mySimpleState.shipSpeed < 1.5f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[18].targetDistance < 114.88f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else { 
                                         if( mySimpleState.shipDirection < 6.12f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                 }
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                 }
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
         }
     }
     if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
             if( mySimpleState.shipDirection < 6.08f ) { 
                 if( mySimpleState.goalDirection < 3.61f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
             }
             else      return eAction::parser.stringToEnum( "Up" ); 
         }
         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[19].targetDistance < 240.4f ) { 
                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[6].targetDistance < 183.65f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
             else { 
                 if( mySimpleState.goalDistance < 267.37f )      return eAction::parser.stringToEnum( "Up" ); 
                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
             }
         }
         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     }
     if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
             if( mySimpleState.mySlices[16].targetDistance < 124.79f ) { 
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                     if( mySimpleState.mySlices[11].targetDistance < 59.67f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[6].targetDistance < 161.18f ) { 
                         if( mySimpleState.mySlices[6].targetDistance < 151.71f ) { 
                             if( mySimpleState.canShoot  ==  true )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                         }
                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                     }
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
             else { 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                     if( mySimpleState.goalDirection < 3.18f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                 }
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.goalDirection < 5.51f ) { 
                             if( mySimpleState.mySlices[4].targetDistance < 238.43f )      return eAction::parser.stringToEnum( "Up" ); 
                             else { 
                                 if( mySimpleState.mySlices[18].targetDistance < 246 ) { 
                                     if( mySimpleState.mySlices[3].targetDistance < 208.6f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     else { 
                                         if( mySimpleState.mySlices[17].targetDistance < 98.89f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     }
                                 }
                                 else { 
                                     if( mySimpleState.shipDirection < 4.55f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     else { 
                                         if( mySimpleState.goalDirection < 0.2f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         else { 
                                             if( mySimpleState.mySlices[9].targetDistance < 221.9f )      return eAction::parser.stringToEnum( "Up" ); 
                                             else { 
                                                 if( mySimpleState.goalDirection < 5.32f ) { 
                                                     if( mySimpleState.goalDirection < 5.26f )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                 }
                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                             }
                                         }
                                     }
                                 }
                             }
                         }
                         else { 
                             if( mySimpleState.goalDirection < 5.88f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                     }
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
         }
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
             if( mySimpleState.mySlices[12].targetDistance < 144.75f ) { 
                 if( mySimpleState.goalDirection < 2.5f ) { 
                     if( mySimpleState.goalDistance < 183.13f )      return eAction::parser.stringToEnum( "Right" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 else { 
                     if( mySimpleState.mySlices[8].targetDistance < 140.29f )      return eAction::parser.stringToEnum( "Right" ); 
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
             }
             else { 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                     if( mySimpleState.shipSpeed < 1.36f ) { 
                         if( mySimpleState.mySlices[0].targetDistance < 143.97f )      return eAction::parser.stringToEnum( "Up" ); 
                         else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                     }
                     else { 
                         if( mySimpleState.goalDistance < 159.59f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                 }
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.goalDistance < 181.59f ) { 
                             if( mySimpleState.shipDirection < 5.93f ) { 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                         }
                         else { 
                             if( mySimpleState.mySlices[1].targetDistance < 191.24f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else { 
                                 if( mySimpleState.shipSpeed < 1.16f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 else { 
                                     if( mySimpleState.shipSpeed < 1.31f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 }
                             }
                         }
                     }
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                         if( mySimpleState.goalDistance < 248.14f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                         if( mySimpleState.shipSpeed < 3.33f )      return eAction::parser.stringToEnum( "Up" ); 
                         else { 
                             if( mySimpleState.goalDistance < 262.16f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else      return eAction::parser.stringToEnum( "Left" ); 
                         }
                     }
                 }
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
         }
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
             if( mySimpleState.mySlices[3].targetDistance < 221.08f )      return eAction::parser.stringToEnum( "Up" ); 
             else { 
                 if( mySimpleState.mySlices[13].targetDistance < 239.85f ) { 
                     if( mySimpleState.goalDistance < 73.58f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                     else { 
                         if( mySimpleState.mySlices[1].targetDistance < 246.99f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                 }
                 else { 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
             }
         }
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                 if( mySimpleState.shipSpeed < 0.58f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 else      return eAction::parser.stringToEnum( "Up" ); 
             }
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[15].targetDistance < 231.4f ) { 
                     if( mySimpleState.mySlices[17].targetDistance < 37.02f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                 }
                 else { 
                     if( mySimpleState.mySlices[8].targetDistance < 202.91f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     else { 
                         if( mySimpleState.goalDistance < 183.2f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                 }
             }
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Left" ); 
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                 if( mySimpleState.goalDistance < 231.86f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 else { 
                     if( mySimpleState.goalDirection < 5.01f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                 }
             }
         }
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                 if( mySimpleState.mySlices[6].targetDistance < 186.27f ) { 
                     if( mySimpleState.shipSpeed < 3.16f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                     else { 
                         if( mySimpleState.mySlices[7].targetDistance < 204.94f )      return eAction::parser.stringToEnum( "Left" ); 
                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                     }
                 }
                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
             }
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.shipSpeed < 3.43f ) { 
                     if( mySimpleState.shipSpeed < 3.03f ) { 
                         if( mySimpleState.shipDirection < 5.67f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                     else { 
                         if( mySimpleState.mySlices[5].targetDistance < 214.13f )      return eAction::parser.stringToEnum( "Right" ); 
                         else      return eAction::parser.stringToEnum( "Left" ); 
                     }
                 }
                 else      return eAction::parser.stringToEnum( "Up" ); 
             }
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.shipSpeed < 0.27f ) { 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Right" ); 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.shipDirection < 5.64f ) { 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.goalDistance < 258.74f )      return eAction::parser.stringToEnum( "Left" ); 
                                 else      return eAction::parser.stringToEnum( "Right" ); 
                             }
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.goalDistance < 273.96f ) { 
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.canShoot  ==  true ) { 
                                         if( mySimpleState.mySlices[5].targetDistance < 220.42f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         else      return eAction::parser.stringToEnum( "Left" ); 
                                     }
                                     else { 
                                         if( mySimpleState.goalDistance < 259.58f ) { 
                                             if( mySimpleState.goalDirection < 3.12f ) { 
                                                 if( mySimpleState.mySlices[5].targetDistance < 68.35f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                 else { 
                                                     if( mySimpleState.mySlices[15].targetDistance < 255.71f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                     else { 
                                                         if( mySimpleState.goalDistance < 259.02f )      return eAction::parser.stringToEnum( "Right" ); 
                                                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                     }
                                                 }
                                             }
                                             else      return eAction::parser.stringToEnum( "Right" ); 
                                         }
                                         else      return eAction::parser.stringToEnum( "Right" ); 
                                     }
                                 }
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Right" ); 
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     }
                     else { 
                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                             if( mySimpleState.mySlices[14].targetDistance < 211.33f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.goalDistance < 269.14f ) { 
                                 if( mySimpleState.mySlices[0].targetDistance < 78.62f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                             else      return eAction::parser.stringToEnum( "Left" ); 
                         }
                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                 if( mySimpleState.goalDirection < 2.63f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                 }
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                     if( mySimpleState.mySlices[15].targetDistance < 170.65f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else      return eAction::parser.stringToEnum( "Right" ); 
                 }
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
             }
             else { 
                 if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                     if( mySimpleState.mySlices[0].targetDistance < 212.54f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                     else { 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.goalDirection < 0.09f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[4].targetDistance < 59.56f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                 }
                 if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                     if( mySimpleState.invincible  ==  true ) { 
                         if( mySimpleState.mySlices[17].targetDistance < 200.45f ) { 
                             if( mySimpleState.shipDirection < 5.85f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                     }
                     else { 
                         if( mySimpleState.mySlices[10].targetDistance < 214.49f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else { 
                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[14].targetDistance < 247.48f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else { 
                                     if( mySimpleState.shipSpeed < 1.35f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     else { 
                                         if( mySimpleState.goalDistance < 103.34f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         else { 
                                             if( mySimpleState.shipSpeed < 2.39f )      return eAction::parser.stringToEnum( "Up" ); 
                                             else { 
                                                 if( mySimpleState.mySlices[7].targetDistance < 202.14f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                 else { 
                                                     if( mySimpleState.goalDirection < 5.49f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                 }
                                             }
                                         }
                                     }
                                 }
                             }
                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                     }
                 }
                 if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                     if( mySimpleState.shipSpeed < 1.15f ) { 
                         if( mySimpleState.mySlices[12].targetDistance < 238.56f ) { 
                             if( mySimpleState.goalDistance < 160.29f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                     }
                     else { 
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[9].targetDistance < 243.88f )      return eAction::parser.stringToEnum( "Right" ); 
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                             if( mySimpleState.mySlices[12].targetDistance < 248.83f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                 }
                 if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                     if( mySimpleState.mySlices[0].targetDistance < 223.13f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                 }
                 if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.shipSpeed < 0.73f )      return eAction::parser.stringToEnum( "Up" ); 
                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                     }
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.shipSpeed < 1.79f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else { 
                                 if( mySimpleState.goalDistance < 157.6f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                         }
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     }
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                 if( mySimpleState.mySlices[7].targetDistance < 225.99f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else { 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[13].targetDistance < 206.48f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     }
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                         if( mySimpleState.mySlices[6].targetDistance < 239.2f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         else { 
                                             if( mySimpleState.shipSpeed < 1.16f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         }
                                     }
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                             }
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.goalDistance < 142.59f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 }
                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Left" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                         if( mySimpleState.mySlices[13].targetDistance < 222.6f ) { 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.shipDirection < 4.9f )      return eAction::parser.stringToEnum( "Right" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                         if( mySimpleState.shipSpeed < 3.37f ) { 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.shipDirection < 5.95f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else { 
                                     if( mySimpleState.goalDirection < 1.06f )      return eAction::parser.stringToEnum( "Fire-Up-Right" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 }
                             }
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                         else { 
                             if( mySimpleState.mySlices[12].targetDistance < 244.24f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                     }
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.goalDistance < 141.37f ) { 
                                 if( mySimpleState.mySlices[18].targetDistance < 238.15f ) { 
                                     if( mySimpleState.shipDirection < 4.93f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 }
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             else { 
                                 if( mySimpleState.mySlices[13].targetDistance < 215.02f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                         }
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                     }
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                 if( mySimpleState.mySlices[14].targetDistance < 192.01f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.shipDirection < 4.75f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 }
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                 if( mySimpleState.mySlices[1].targetDistance < 200.08f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 else      return eAction::parser.stringToEnum( "Right" ); 
                             }
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[19].targetDistance < 205.33f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else { 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[19].targetDistance < 240.2f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         else { 
                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                 if( mySimpleState.shipDirection < 5.47f )      return eAction::parser.stringToEnum( "Up" ); 
                                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             }
                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         }
                                     }
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                             }
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                             if( mySimpleState.invincible  ==  true )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                             if( mySimpleState.shipDirection < 5.7f ) { 
                                 if( mySimpleState.mySlices[16].targetDistance < 230.39f )      return eAction::parser.stringToEnum( "Fire-Up-Right" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                             else { 
                                 if( mySimpleState.goalDirection < 2.65f )      return eAction::parser.stringToEnum( "Fire-Up-Right" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                         }
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                             if( mySimpleState.mySlices[14].targetDistance < 132.53f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else { 
                                 if( mySimpleState.mySlices[12].targetDistance < 99.38f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                             }
                         }
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[1].targetDistance < 240.77f ) { 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                         if( mySimpleState.mySlices[19].targetDistance < 37.09f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                     }
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                         if( mySimpleState.mySlices[1].targetDistance < 177.73f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     }
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                         if( mySimpleState.mySlices[0].targetDistance < 186.5f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         else { 
                                             if( mySimpleState.mySlices[2].targetDistance < 210.7f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                     }
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[1].targetDistance < 49.02f ) { 
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                     else { 
                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                             if( mySimpleState.mySlices[9].targetDistance < 234.65f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                                                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                     if( mySimpleState.mySlices[5].targetDistance < 220.36f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                 }
                                                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             }
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         }
                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         }
                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                             if( mySimpleState.mySlices[5].targetDistance < 222.7f )      return eAction::parser.stringToEnum( "Up" ); 
                                             else { 
                                                 if( mySimpleState.mySlices[5].targetDistance < 230.75f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                             }
                                         }
                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                             if( mySimpleState.mySlices[8].targetDistance < 181.07f ) { 
                                                 if( mySimpleState.shipDirection < 6.04f ) { 
                                                     if( mySimpleState.mySlices[0].targetDistance < 228.92f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                                     else { 
                                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                             if( mySimpleState.shipDirection < 5.59f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                                         }
                                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     }
                                                 }
                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                             }
                                             else { 
                                                 if( mySimpleState.mySlices[9].targetDistance < 144.67f ) { 
                                                     if( mySimpleState.goalDirection < 2.98f )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else      return eAction::parser.stringToEnum( "Right" ); 
                                                 }
                                                 else { 
                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                             if( mySimpleState.mySlices[9].targetDistance < 216.86f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                             else { 
                                                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                                                     if( mySimpleState.shipSpeed < 2.55f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                                 }
                                                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                     if( mySimpleState.canShoot  ==  true ) { 
                                                                         if( mySimpleState.goalDirection < 3.61f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                                     }
                                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                                 }
                                                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             }
                                                         }
                                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     }
                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                                         if( mySimpleState.mySlices[6].targetDistance < 215.95f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                         else { 
                                                             if( mySimpleState.goalDirection < 4.51f )      return eAction::parser.stringToEnum( "Up" ); 
                                                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                         }
                                                     }
                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                                         if( mySimpleState.mySlices[17].targetDistance < 242.02f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                     }
                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                                         if( mySimpleState.mySlices[2].targetDistance < 249.5f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                         else { 
                                                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                                                 if( mySimpleState.mySlices[19].targetDistance < 212.07f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                             }
                                                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                                                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         }
                                                     }
                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                         if( mySimpleState.shipSpeed < 1.62f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                         else { 
                                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                                                 if( mySimpleState.mySlices[4].targetDistance < 204.63f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                                             }
                                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                                                 if( mySimpleState.mySlices[1].targetDistance < 104.36f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                                             }
                                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                         }
                                                     }
                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                                         if( mySimpleState.mySlices[2].targetDistance < 123.55f )      return eAction::parser.stringToEnum( "Up" ); 
                                                         else { 
                                                             if( mySimpleState.canShoot  ==  true )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                                         }
                                                     }
                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                 }
                                             }
                                         }
                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     }
                                 }
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             else { 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.goalDistance < 146.89f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     }
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                         if( mySimpleState.mySlices[10].targetDistance < 136.81f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                     if( mySimpleState.goalDistance < 201.97f ) { 
                                         if( mySimpleState.mySlices[7].targetDistance < 196.69f )      return eAction::parser.stringToEnum( "Right" ); 
                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     }
                                     else { 
                                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                 }
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                     if( mySimpleState.mySlices[0].targetDistance < 202.4f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 }
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                     if( mySimpleState.goalDirection < 4.42f ) { 
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                             if( mySimpleState.mySlices[7].targetDistance < 199.01f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                     else { 
                                         if( mySimpleState.mySlices[7].targetDistance < 232.2f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         else { 
                                             if( mySimpleState.mySlices[10].targetDistance < 87.85f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         }
                                     }
                                 }
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.shipSpeed < 2.6f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     }
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                         if( mySimpleState.mySlices[12].targetDistance < 228.08f ) { 
                                             if( mySimpleState.shipDirection < 6.2f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         }
                                         else { 
                                             if( mySimpleState.mySlices[9].targetDistance < 224.43f )      return eAction::parser.stringToEnum( "Left" ); 
                                             else { 
                                                 if( mySimpleState.mySlices[0].targetDistance < 70.89f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                             }
                                         }
                                     }
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                         if( mySimpleState.shipDirection < 6.13f ) { 
                                             if( mySimpleState.shipSpeed < 1.74f ) { 
                                                 if( mySimpleState.shipSpeed < 1.2f )      return eAction::parser.stringToEnum( "Up" ); 
                                                 else { 
                                                     if( mySimpleState.mySlices[6].targetDistance < 197.38f )      return eAction::parser.stringToEnum( "Fire-Up-Left" ); 
                                                     else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                                 }
                                             }
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     }
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                         if( mySimpleState.shipSpeed < 1.94f ) { 
                                             if( mySimpleState.goalDistance < 162.45f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         }
                                         else { 
                                             if( mySimpleState.mySlices[0].targetDistance < 192.25f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                     }
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[10].targetDistance < 148.95f ) { 
                                             if( mySimpleState.shipSpeed < 4.63f ) { 
                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                         if( mySimpleState.mySlices[2].targetDistance < 166.84f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                     }
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                                                 }
                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                             }
                                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         }
                                         else { 
                                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                                 if( mySimpleState.shipDirection < 6.11f )      return eAction::parser.stringToEnum( "Up" ); 
                                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             }
                                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                                     if( mySimpleState.goalDirection < 2.55f )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else { 
                                                         if( mySimpleState.mySlices[18].targetDistance < 245.71f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     }
                                                 }
                                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                                     if( mySimpleState.mySlices[11].targetDistance < 245.13f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                     else { 
                                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                                             if( mySimpleState.shipDirection < 5.27f ) { 
                                                                 if( mySimpleState.mySlices[5].targetDistance < 156.11f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                 else { 
                                                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                                                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                 }
                                                             }
                                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                                         }
                                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                             if( mySimpleState.mySlices[10].targetDistance < 255.35f )      return eAction::parser.stringToEnum( "Up" ); 
                                                             else { 
                                                                 if( mySimpleState.mySlices[5].targetDistance < 91.3f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                 else { 
                                                                     if( mySimpleState.goalDirection < 4.49f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                     else { 
                                                                         if( mySimpleState.mySlices[5].targetDistance < 138.83f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                         else { 
                                                                             if( mySimpleState.goalDistance < 111.04f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                         }
                                                                     }
                                                                 }
                                                             }
                                                         }
                                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     }
                                                 }
                                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                                     if( mySimpleState.goalDistance < 251.23f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                     else      return eAction::parser.stringToEnum( "Left" ); 
                                                 }
                                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                                     if( mySimpleState.mySlices[2].targetDistance < 246.2f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                     else { 
                                                         if( mySimpleState.mySlices[5].targetDistance < 169.87f ) { 
                                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                 if( mySimpleState.mySlices[5].targetDistance < 136.11f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                 else { 
                                                                     if( mySimpleState.goalDirection < 4.21f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                                 }
                                                             }
                                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         }
                                                         else { 
                                                             if( mySimpleState.goalDistance < 264.88f )      return eAction::parser.stringToEnum( "Up" ); 
                                                             else { 
                                                                 if( mySimpleState.shipDirection < 5.6f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                                             }
                                                         }
                                                     }
                                                 }
                                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                                         if( mySimpleState.goalDistance < 207.2f )      return eAction::parser.stringToEnum( "Up" ); 
                                                         else      return eAction::parser.stringToEnum( "Left" ); 
                                                     }
                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                                         if( mySimpleState.canShoot  ==  true )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                         else { 
                                                             if( mySimpleState.shipDirection < 5.98f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                                         }
                                                     }
                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                                         if( mySimpleState.mySlices[14].targetDistance < 231.51f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                         else { 
                                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                                                 if( mySimpleState.shipSpeed < 2.91f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                             }
                                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                 if( mySimpleState.shipDirection < 5.45f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                                             }
                                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         }
                                                     }
                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                         if( mySimpleState.mySlices[18].targetDistance < 131.59f ) { 
                                                             if( mySimpleState.mySlices[6].targetDistance < 213.72f )      return eAction::parser.stringToEnum( "Up" ); 
                                                             else { 
                                                                 if( mySimpleState.shipSpeed < 2.81f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                             }
                                                         }
                                                         else { 
                                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                     if( mySimpleState.mySlices[9].targetDistance < 216.01f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                     else { 
                                                                         if( mySimpleState.shipDirection < 5.63f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                         else { 
                                                                             if( mySimpleState.mySlices[4].targetDistance < 239.81f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                             else { 
                                                                                 if( mySimpleState.shipDirection < 5.75f ) { 
                                                                                     if( mySimpleState.shipDirection < 5.74f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                 }
                                                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                                                             }
                                                                         }
                                                                     }
                                                                 }
                                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                             }
                                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                                                 if( mySimpleState.mySlices[7].targetDistance < 185.05f ) { 
                                                                     if( mySimpleState.shipDirection < 5.35f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                     else { 
                                                                         if( mySimpleState.goalDirection < 3.62f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                         else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                                                     }
                                                                 }
                                                                 else { 
                                                                     if( mySimpleState.mySlices[9].targetDistance < 238.16f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                     else { 
                                                                         if( mySimpleState.shipDirection < 3.94f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                     }
                                                                 }
                                                             }
                                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                                                     if( mySimpleState.mySlices[14].targetDistance < 209.51f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                                 }
                                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                                                     if( mySimpleState.mySlices[1].targetDistance < 248.88f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                 }
                                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                                                         if( mySimpleState.mySlices[4].targetDistance < 191.27f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                         else { 
                                                                             if( mySimpleState.shipDirection < 4.58f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                                                         }
                                                                     }
                                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                                                         if( mySimpleState.shipSpeed < 2.24f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                         else { 
                                                                             if( mySimpleState.mySlices[2].targetDistance < 245.03f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                             else { 
                                                                                 if( mySimpleState.goalDirection < 5.55f ) { 
                                                                                     if( mySimpleState.mySlices[4].targetDistance < 144.08f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                     else { 
                                                                                         if( mySimpleState.shipSpeed < 3.61f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                                                     }
                                                                                 }
                                                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                                                             }
                                                                         }
                                                                     }
                                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                                                             if( mySimpleState.goalDistance < 158.4f ) { 
                                                                                 if( mySimpleState.mySlices[13].targetDistance < 238.31f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                                                             }
                                                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                                                         }
                                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                             if( mySimpleState.mySlices[9].targetDistance < 223.95f ) { 
                                                                                 if( mySimpleState.invincible  ==  true ) { 
                                                                                     if( mySimpleState.mySlices[9].targetDistance < 79.43f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                 }
                                                                                 else { 
                                                                                     if( mySimpleState.goalDirection < 5.33f ) { 
                                                                                         if( mySimpleState.shipDirection < 4.09f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                         else { 
                                                                                             if( mySimpleState.shipSpeed < 0.68f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                             else { 
                                                                                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                                                     if( mySimpleState.goalDirection < 5.13f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                                 }
                                                                                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                             }
                                                                                         }
                                                                                     }
                                                                                     else { 
                                                                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                                             if( mySimpleState.shipSpeed < 3.56f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                                                                         }
                                                                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                                                                             if( mySimpleState.shipDirection < 5.84f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                                                         }
                                                                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                     }
                                                                                 }
                                                                             }
                                                                             else { 
                                                                                 if( mySimpleState.shipSpeed < 1.44f ) { 
                                                                                     if( mySimpleState.mySlices[2].targetDistance < 248.79f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                     else { 
                                                                                         if( mySimpleState.shipDirection < 4.58f ) { 
                                                                                             if( mySimpleState.shipDirection < 4.21f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                             else { 
                                                                                                 if( mySimpleState.canShoot  ==  true ) { 
                                                                                                     if( mySimpleState.mySlices[10].targetDistance < 207.99f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                 }
                                                                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                                                                             }
                                                                                         }
                                                                                         else { 
                                                                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                                                 if( mySimpleState.mySlices[19].targetDistance < 112.01f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                             }
                                                                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         }
                                                                                     }
                                                                                 }
                                                                                 else { 
                                                                                     if( mySimpleState.goalDirection < 5.73f ) { 
                                                                                         if( mySimpleState.mySlices[4].targetDistance < 170.62f ) { 
                                                                                             if( mySimpleState.shipDirection < 5.84f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                         }
                                                                                         else { 
                                                                                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                                                     if( mySimpleState.mySlices[7].targetDistance < 243.46f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                     else { 
                                                                                                         if( mySimpleState.goalDirection < 0.38f ) { 
                                                                                                             if( mySimpleState.shipDirection < 5.26f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                             else { 
                                                                                                                 if( mySimpleState.goalDistance < 275.23f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                             }
                                                                                                         }
                                                                                                         else { 
                                                                                                             if( mySimpleState.mySlices[2].targetDistance < 226.75f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                             else { 
                                                                                                                 if( mySimpleState.goalDistance < 260.93f ) { 
                                                                                                                     if( mySimpleState.invincible  ==  true )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                                     else { 
                                                                                                                         if( mySimpleState.goalDirection < 2.21f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                                         else { 
                                                                                                                             if( mySimpleState.shipDirection < 4.13f ) { 
                                                                                                                                 if( mySimpleState.goalDirection < 5.58f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                                             }
                                                                                                                             else { 
                                                                                                                                 if( mySimpleState.goalDistance < 245.39f ) { 
                                                                                                                                     if( mySimpleState.shipSpeed < 1.67f ) { 
                                                                                                                                         if( mySimpleState.shipDirection < 4.23f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                                                     }
                                                                                                                                     else { 
                                                                                                                                         if( mySimpleState.goalDistance < 245.23f ) { 
                                                                                                                                             if( mySimpleState.shipDirection < 4.76f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                                                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                                                         }
                                                                                                                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                                                     }
                                                                                                                                 }
                                                                                                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                                             }
                                                                                                                         }
                                                                                                                     }
                                                                                                                 }
                                                                                                                 else { 
                                                                                                                     if( mySimpleState.goalDirection < 1.7f ) { 
                                                                                                                         if( mySimpleState.goalDistance < 261.01f ) { 
                                                                                                                             if( mySimpleState.shipDirection < 5.15f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                                         }
                                                                                                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                                     }
                                                                                                                     else { 
                                                                                                                         if( mySimpleState.goalDirection < 2.64f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                                     }
                                                                                                                 }
                                                                                                             }
                                                                                                         }
                                                                                                     }
                                                                                                 }
                                                                                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                                                                                     if( mySimpleState.mySlices[17].targetDistance < 112.62f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                 }
                                                                                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                             }
                                                                                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                                                                                 if( mySimpleState.shipSpeed < 3.05f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                 else { 
                                                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 }
                                                                                             }
                                                                                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         }
                                                                                     }
                                                                                     else { 
                                                                                         if( mySimpleState.goalDirection < 6.07f ) { 
                                                                                             if( mySimpleState.mySlices[0].targetDistance < 136.62f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                             else { 
                                                                                                 if( mySimpleState.mySlices[14].targetDistance < 190.66f ) { 
                                                                                                     if( mySimpleState.mySlices[14].targetDistance < 114.66f ) { 
                                                                                                         if( mySimpleState.mySlices[9].targetDistance < 250.88f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                         else { 
                                                                                                             if( mySimpleState.goalDirection < 5.9f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                         }
                                                                                                     }
                                                                                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                                 }
                                                                                                 else { 
                                                                                                     if( mySimpleState.shipSpeed < 2.94f ) { 
                                                                                                         if( mySimpleState.mySlices[4].targetDistance < 241.7f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                         else { 
                                                                                                             if( mySimpleState.goalDirection < 5.75f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                                             else { 
                                                                                                                 if( mySimpleState.shipSpeed < 2.49f ) { 
                                                                                                                     if( mySimpleState.shipDirection < 5.78f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                                     else { 
                                                                                                                         if( mySimpleState.goalDistance < 112.97f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                                                     }
                                                                                                                 }
                                                                                                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                                             }
                                                                                                         }
                                                                                                     }
                                                                                                     else { 
                                                                                                         if( mySimpleState.shipDirection < 5.41f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                         else { 
                                                                                                             if( mySimpleState.goalDirection < 5.89f ) { 
                                                                                                                 if( mySimpleState.shipDirection < 5.55f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                             }
                                                                                                             else { 
                                                                                                                 if( mySimpleState.shipDirection < 5.85f ) { 
                                                                                                                     if( mySimpleState.shipDirection < 5.85f ) { 
                                                                                                                         if( mySimpleState.goalDirection < 6.01f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                                         else { 
                                                                                                                             if( mySimpleState.shipSpeed < 3.61f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                                         }
                                                                                                                     }
                                                                                                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                                 }
                                                                                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                             }
                                                                                                         }
                                                                                                     }
                                                                                                 }
                                                                                             }
                                                                                         }
                                                                                         else { 
                                                                                             if( mySimpleState.mySlices[4].targetDistance < 248.79f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                             else { 
                                                                                                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                                                         if( mySimpleState.goalDistance < 72.4f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                         else { 
                                                                                                             if( mySimpleState.shipDirection < 4.5f ) { 
                                                                                                                 if( mySimpleState.shipSpeed < 3.87f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                                 else { 
                                                                                                                     if( mySimpleState.shipDirection < 4.48f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                                 }
                                                                                                             }
                                                                                                             else { 
                                                                                                                 if( mySimpleState.goalDistance < 122.69f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                                 else { 
                                                                                                                     if( mySimpleState.goalDistance < 201.84f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                                     else { 
                                                                                                                         if( mySimpleState.shipSpeed < 3.97f ) { 
                                                                                                                             if( mySimpleState.shipDirection < 5.81f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                                         }
                                                                                                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                                     }
                                                                                                                 }
                                                                                                             }
                                                                                                         }
                                                                                                     }
                                                                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                                                                                         if( mySimpleState.shipSpeed < 3.66f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                                     }
                                                                                                 }
                                                                                                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                             }
                                                                                         }
                                                                                     }
                                                                                 }
                                                                             }
                                                                         }
                                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                                                             if( mySimpleState.mySlices[6].targetDistance < 248.79f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                             else { 
                                                                                 if( mySimpleState.goalDistance < 242.65f ) { 
                                                                                     if( mySimpleState.mySlices[10].targetDistance < 254.69f ) { 
                                                                                         if( mySimpleState.shipDirection < 5 )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                                     }
                                                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                                                 }
                                                                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                             }
                                                                         }
                                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                                                             if( mySimpleState.shipSpeed < 0.98f ) { 
                                                                                 if( mySimpleState.goalDirection < 0.65f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                                                             }
                                                                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                         }
                                                                     }
                                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                                                         if( mySimpleState.goalDirection < 2.35f ) { 
                                                                             if( mySimpleState.mySlices[9].targetDistance < 81.76f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                         }
                                                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                     }
                                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                                                         if( mySimpleState.mySlices[7].targetDistance < 215.66f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                     }
                                                                 }
                                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             }
                                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                                                 if( mySimpleState.mySlices[12].targetDistance < 232.98f ) { 
                                                                     if( mySimpleState.shipSpeed < 2.48f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                     else { 
                                                                         if( mySimpleState.mySlices[12].targetDistance < 32.46f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                                     }
                                                                 }
                                                                 else { 
                                                                     if( mySimpleState.mySlices[5].targetDistance < 186.69f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                                 }
                                                             }
                                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             }
                                                             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                                                 if( mySimpleState.mySlices[6].targetDistance < 214.13f ) { 
                                                                     if( mySimpleState.mySlices[6].targetDistance < 212.67f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                     else { 
                                                                         if( mySimpleState.shipSpeed < 1.58f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                                     }
                                                                 }
                                                                 else { 
                                                                     if( mySimpleState.goalDistance < 160.75f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                     else { 
                                                                         if( mySimpleState.goalDirection < 0.08f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                                     }
                                                                 }
                                                             }
                                                         }
                                                     }
                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                                         if( mySimpleState.shipDirection < 5.89f )      return eAction::parser.stringToEnum( "Up" ); 
                                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     }
                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                 }
                                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                                     if( mySimpleState.shipSpeed < 3.56f ) { 
                                                         if( mySimpleState.mySlices[14].targetDistance < 37.33f )      return eAction::parser.stringToEnum( "Up" ); 
                                                         else { 
                                                             if( mySimpleState.shipSpeed < 3.39f ) { 
                                                                 if( mySimpleState.canShoot  ==  true ) { 
                                                                     if( mySimpleState.shipDirection < 5.27f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                                 }
                                                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                             }
                                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                                         }
                                                     }
                                                     else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                                 }
                                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                                     if( mySimpleState.mySlices[6].targetDistance < 231.2f ) { 
                                                         if( mySimpleState.mySlices[14].targetDistance < 196.52f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                         else { 
                                                             if( mySimpleState.mySlices[7].targetDistance < 228.4f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                         }
                                                     }
                                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 }
                                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                                     if( mySimpleState.shipDirection < 5.04f ) { 
                                                         if( mySimpleState.goalDistance < 52.96f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                     }
                                                     else { 
                                                         if( mySimpleState.goalDistance < 241.7f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                     }
                                                 }
                                             }
                                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                                 if( mySimpleState.mySlices[19].targetDistance < 76.46f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                 else { 
                                                     if( mySimpleState.mySlices[19].targetDistance < 89.9f ) { 
                                                         if( mySimpleState.mySlices[19].targetDistance < 88.85f )      return eAction::parser.stringToEnum( "Up" ); 
                                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     }
                                                     else { 
                                                         if( mySimpleState.mySlices[16].targetDistance < 76.72f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                         else { 
                                                             if( mySimpleState.mySlices[2].targetDistance < 248.99f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                                         }
                                                     }
                                                 }
                                             }
                                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                                 if( mySimpleState.mySlices[16].targetDistance < 165.43f ) { 
                                                     if( mySimpleState.mySlices[2].targetDistance < 144.2f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                     else { 
                                                         if( mySimpleState.goalDirection < 2.94f )      return eAction::parser.stringToEnum( "Up" ); 
                                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     }
                                                 }
                                                 else { 
                                                     if( mySimpleState.mySlices[16].targetDistance < 172.35f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                                     else      return eAction::parser.stringToEnum( "Fire-Up-Left" ); 
                                                 }
                                             }
                                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                                 if( mySimpleState.shipDirection < 5.75f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             }
                                         }
                                     }
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                         if( mySimpleState.shipDirection < 6.14f ) { 
                                             if( mySimpleState.mySlices[4].targetDistance < 55.74f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             else { 
                                                 if( mySimpleState.shipSpeed < 0.66f )      return eAction::parser.stringToEnum( "Up" ); 
                                                 else { 
                                                     if( mySimpleState.shipDirection < 6.12f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                 }
                                             }
                                         }
                                         else { 
                                             if( mySimpleState.mySlices[0].targetDistance < 46.25f )      return eAction::parser.stringToEnum( "Up" ); 
                                             else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                         }
                                     }
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                     if( mySimpleState.goalDistance < 247.62f ) { 
                                         if( mySimpleState.goalDistance < 215.91f ) { 
                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Left" ); 
                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         }
                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     }
                                     else { 
                                         if( mySimpleState.mySlices[12].targetDistance < 236.49f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else { 
                                             if( mySimpleState.goalDirection < 3.04f )      return eAction::parser.stringToEnum( "Left" ); 
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                     }
                                 }
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                     if( mySimpleState.goalDistance < 202.72f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                     if( mySimpleState.shipDirection < 4.73f ) { 
                                         if( mySimpleState.shipDirection < 4.72f ) { 
                                             if( mySimpleState.shipDirection < 4.42f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             else { 
                                                 if( mySimpleState.shipSpeed < 0.98f )      return eAction::parser.stringToEnum( "Up" ); 
                                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             }
                                         }
                                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     }
                                     else { 
                                         if( mySimpleState.mySlices[3].targetDistance < 232.1f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else { 
                                             if( mySimpleState.mySlices[0].targetDistance < 212.34f )      return eAction::parser.stringToEnum( "Up" ); 
                                             else { 
                                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                                         if( mySimpleState.mySlices[7].targetDistance < 143.33f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                     }
                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 }
                                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                     if( mySimpleState.mySlices[2].targetDistance < 248.86f )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                 }
                                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             }
                                         }
                                     }
                                 }
                             }
                         }
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                             if( mySimpleState.goalDistance < 238.12f ) { 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Left" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.shipDirection < 5.04f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     else { 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                             if( mySimpleState.mySlices[13].targetDistance < 231.88f )      return eAction::parser.stringToEnum( "Up" ); 
                                             else { 
                                                 if( mySimpleState.shipSpeed < 1.66f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                             }
                                         }
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                 }
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             else { 
                                 if( mySimpleState.goalDistance < 243.72f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                 else { 
                                     if( mySimpleState.canShoot  ==  true ) { 
                                         if( mySimpleState.mySlices[13].targetDistance < 236.57f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                             }
                         }
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                             if( mySimpleState.invincible  ==  true )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                             if( mySimpleState.goalDirection < 0.88f ) { 
                                 if( mySimpleState.mySlices[12].targetDistance < 189.31f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                             else { 
                                 if( mySimpleState.mySlices[15].targetDistance < 253.75f ) { 
                                     if( mySimpleState.mySlices[19].targetDistance < 245.59f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     else { 
                                         if( mySimpleState.mySlices[14].targetDistance < 250.8f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     }
                                 }
                                 else { 
                                     if( mySimpleState.goalDirection < 4.15f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     else { 
                                         if( mySimpleState.shipSpeed < 2.94f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     }
                                 }
                             }
                         }
                     }
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                         if( mySimpleState.mySlices[7].targetDistance < 95.14f ) { 
                             if( mySimpleState.mySlices[7].targetDistance < 82.1f ) { 
                                 if( mySimpleState.invincible  ==  true )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                             else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                         }
                         else { 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                             if( mySimpleState.goalDirection < 5.73f ) { 
                                                 if( mySimpleState.mySlices[5].targetDistance < 156.21f )      return eAction::parser.stringToEnum( "Up" ); 
                                                 else { 
                                                     if( mySimpleState.canShoot  ==  true ) { 
                                                         if( mySimpleState.mySlices[16].targetDistance < 182.87f )      return eAction::parser.stringToEnum( "Up" ); 
                                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                     }
                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                 }
                                             }
                                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         }
                                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                     if( mySimpleState.mySlices[8].targetDistance < 87.83f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 }
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                 if( mySimpleState.canShoot  ==  true )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                 else { 
                                     if( mySimpleState.shipDirection < 6.01f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                             }
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                     }
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                         if( mySimpleState.mySlices[19].targetDistance < 171.07f )      return eAction::parser.stringToEnum( "Up" ); 
                         else { 
                             if( mySimpleState.shipDirection < 5.33f ) { 
                                 if( mySimpleState.mySlices[7].targetDistance < 250.36f ) { 
                                     if( mySimpleState.goalDirection < 5.58f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                                 else { 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                                         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                             }
                             else { 
                                 if( mySimpleState.mySlices[13].targetDistance < 109.23f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                         }
                     }
                 }
                 if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[3].targetDistance < 205.9f ) { 
                                 if( mySimpleState.goalDistance < 335.26f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                     if( mySimpleState.mySlices[3].targetDistance < 172.29f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                             if( mySimpleState.shipDirection < 5.57f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else { 
                                 if( mySimpleState.goalDirection < 3.49f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                         }
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                 }
                 if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                         if( mySimpleState.goalDirection < 4.78f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[0].targetDistance < 154.91f )      return eAction::parser.stringToEnum( "Up" ); 
                         else { 
                             if( mySimpleState.invincible  ==  true ) { 
                                 if( mySimpleState.shipSpeed < 1.63f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                     }
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
             }
         }
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                 if( mySimpleState.shipDirection < 5.91f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 else      return eAction::parser.stringToEnum( "Up" ); 
             }
             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                 if( mySimpleState.mySlices[15].targetDistance < 159.54f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 else { 
                     if( mySimpleState.shipSpeed < 0.64f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                 }
             }
             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[17].targetDistance < 235.39f ) { 
                     if( mySimpleState.mySlices[11].targetDistance < 220.22f ) { 
                         if( mySimpleState.goalDirection < 6.12f ) { 
                             if( mySimpleState.mySlices[9].targetDistance < 162.98f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else { 
                                 if( mySimpleState.shipSpeed < 2.64f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                             }
                         }
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                 }
                 else { 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[4].targetDistance < 221.76f )      return eAction::parser.stringToEnum( "Right" ); 
                         else { 
                             if( mySimpleState.mySlices[3].targetDistance < 251.83f )      return eAction::parser.stringToEnum( "Left" ); 
                             else { 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.invincible  ==  true ) { 
                                         if( mySimpleState.shipDirection < 5.01f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 }
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                         }
                     }
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
             }
             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                 if( mySimpleState.mySlices[12].targetDistance < 216.67f )      return eAction::parser.stringToEnum( "Up" ); 
                 else { 
                     if( mySimpleState.mySlices[12].targetDistance < 236.45f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
             }
             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                 if( mySimpleState.mySlices[11].targetDistance < 202.52f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 else { 
                     if( mySimpleState.mySlices[11].targetDistance < 203.97f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
             }
         }
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
             if( mySimpleState.mySlices[15].targetDistance < 205.83f )      return eAction::parser.stringToEnum( "Up-Left" ); 
             else { 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                     if( mySimpleState.shipSpeed < 0.6f ) { 
                         if( mySimpleState.mySlices[7].targetDistance < 75.05f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else { 
                             if( mySimpleState.goalDistance < 226.55f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                         }
                     }
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
             }
         }
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                 if( mySimpleState.goalDirection < 1.31f ) { 
                     if( mySimpleState.goalDistance < 262.41f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                 }
                 else { 
                     if( mySimpleState.shipSpeed < 1.53f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
             }
             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                 if( mySimpleState.shipSpeed < 0.36f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 else      return eAction::parser.stringToEnum( "Up" ); 
             }
             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[0].targetDistance < 237.37f ) { 
                     if( mySimpleState.shipSpeed < 0.4f )      return eAction::parser.stringToEnum( "Right" ); 
                     else { 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                     }
                 }
                 else { 
                     if( mySimpleState.mySlices[5].targetDistance < 184.63f )      return eAction::parser.stringToEnum( "Right" ); 
                     else { 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                 }
             }
             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
     }
     if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
         if( mySimpleState.mySlices[19].targetDistance < 168.82f ) { 
             if( mySimpleState.goalDistance < 228.74f )      return eAction::parser.stringToEnum( "Up" ); 
             else      return eAction::parser.stringToEnum( "Up-Right" ); 
         }
         else { 
             if( mySimpleState.shipDirection < 5.86f ) { 
                 if( mySimpleState.goalDistance < 141.39f )      return eAction::parser.stringToEnum( "Up" ); 
                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
             }
             else { 
                 if( mySimpleState.goalDistance < 221.55f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 else { 
                     if( mySimpleState.shipDirection < 6.05f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     else { 
                         if( mySimpleState.mySlices[1].targetDistance < 125.88f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                 }
             }
         }
     }
     if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.canShoot  ==  true ) { 
                     if( mySimpleState.shipSpeed < 1.41f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                 }
                 else { 
                     if( mySimpleState.shipSpeed < 1.39f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
             }
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[15].targetDistance < 128.48f )      return eAction::parser.stringToEnum( "Up" ); 
             else { 
                 if( mySimpleState.shipDirection < 5.81f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 else      return eAction::parser.stringToEnum( "Fire-Up" ); 
             }
         }
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     }
     if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Right" ); 
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
             if( mySimpleState.goalDirection < 5.73f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
             else      return eAction::parser.stringToEnum( "Fire-Up-Left" ); 
         }
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.shipDirection < 6.26f ) { 
                 if( mySimpleState.mySlices[1].targetDistance < 248.28f ) { 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[2].targetDistance < 91.91f )      return eAction::parser.stringToEnum( "Up" ); 
                         else { 
                             if( mySimpleState.mySlices[14].targetDistance < 182.44f )      return eAction::parser.stringToEnum( "Up" ); 
                             else { 
                                 if( mySimpleState.mySlices[0].targetDistance < 114.4f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                             }
                         }
                     }
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 else { 
                     if( mySimpleState.mySlices[4].targetDistance < 233.52f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                             if( mySimpleState.goalDistance < 210.09f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                         }
                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[15].targetDistance < 239.76f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else { 
                                 if( mySimpleState.shipDirection < 3.64f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                             }
                         }
                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                 }
             }
             else { 
                 if( mySimpleState.mySlices[12].targetDistance < 241.5f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 else { 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.invincible  ==  true ) { 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                 if( mySimpleState.goalDirection < 3.41f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 else { 
                                     if( mySimpleState.mySlices[2].targetDistance < 137.75f ) { 
                                         if( mySimpleState.mySlices[1].targetDistance < 202.07f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     }
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                             }
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[2].targetDistance < 126.55f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                             }
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
             }
         }
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     }
 }


}
