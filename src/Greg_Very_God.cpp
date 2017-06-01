//treeType = RandomTree

#include "AI.h"
#include "SimpleState.h"
#include "InputDirection.h"
#include "RelativeDirection.h"



//In AI.h: eAction::ActionEnum Greg_Very_God( SimpleState& mySimpleState ); 

eAction::ActionEnum AI::Greg_Very_God( SimpleState& mySimpleState ) {
 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
     if( mySimpleState.mySlices[15].targetDistance < 105.34f )      return eAction::parser.stringToEnum( "NoDirection" ); 
     else { 
         if( mySimpleState.mySlices[17].targetDistance < 240.29f ) { 
             if( mySimpleState.mySlices[1].targetDistance < 236.63f ) { 
                 if( mySimpleState.shipDirection < 2.81f ) { 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 else      return eAction::parser.stringToEnum( "Left" ); 
             }
             else { 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[5].targetDistance < 139.78f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
         }
         else { 
             if( mySimpleState.mySlices[3].targetDistance < 235.7f ) { 
                 if( mySimpleState.shipDirection < 3.19f ) { 
                     if( mySimpleState.shipSpeed < 0.74f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else { 
                         if( mySimpleState.invincible  ==  true )      return eAction::parser.stringToEnum( "Up" ); 
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                 }
                 else { 
                     if( mySimpleState.mySlices[15].targetDistance < 233.13f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.invincible  ==  true ) { 
                             if( mySimpleState.mySlices[3].targetDistance < 94.45f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                 }
             }
             else { 
                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.shipDirection < 3.39f ) { 
                         if( mySimpleState.goalDirection < 1.31f ) { 
                             if( mySimpleState.mySlices[7].targetDistance < 177.62f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                     else { 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                             if( mySimpleState.mySlices[4].targetDistance < 223.53f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                 }
                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                     if( mySimpleState.mySlices[14].targetDistance < 176.08f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                 }
                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
             }
         }
     }
 }
 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
     if( mySimpleState.mySlices[8].targetDistance < 185.87f )      return eAction::parser.stringToEnum( "Down" ); 
     else { 
         if( mySimpleState.shipSpeed < 0.02f )      return eAction::parser.stringToEnum( "NoDirection" ); 
         else { 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                     if( mySimpleState.mySlices[1].targetDistance < 244.38f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                 }
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[13].targetDistance < 237.36f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else { 
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.shipSpeed < 2.03f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                 }
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                     if( mySimpleState.mySlices[0].targetDistance < 171.36f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
             }
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Left" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
     }
 }
 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
         if( mySimpleState.mySlices[11].targetDistance < 229.31f ) { 
             if( mySimpleState.shipDirection < 4.94f )      return eAction::parser.stringToEnum( "Up-Left" ); 
             else      return eAction::parser.stringToEnum( "Right" ); 
         }
         else { 
             if( mySimpleState.mySlices[2].targetDistance < 214.94f )      return eAction::parser.stringToEnum( "Up" ); 
             else { 
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                     if( mySimpleState.goalDistance < 94.28f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.shipSpeed < 3.3f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else      return eAction::parser.stringToEnum( "Left" ); 
                     }
                 }
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.shipDirection < 0.21f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.mySlices[12].targetDistance < 251.76f ) { 
                             if( mySimpleState.mySlices[5].targetDistance < 226.45f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else { 
                                 if( mySimpleState.mySlices[1].targetDistance < 215.01f ) { 
                                     if( mySimpleState.mySlices[1].targetDistance < 173.74f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 }
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                         }
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                 }
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
         }
     }
     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
         if( mySimpleState.mySlices[14].targetDistance < 226 )      return eAction::parser.stringToEnum( "Up" ); 
         else { 
             if( mySimpleState.mySlices[18].targetDistance < 193.38f ) { 
                 if( mySimpleState.shipDirection < 0.12f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 else      return eAction::parser.stringToEnum( "Up" ); 
             }
             else      return eAction::parser.stringToEnum( "Up" ); 
         }
     }
     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
 }
 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
         if( mySimpleState.mySlices[13].targetDistance < 151.92f )      return eAction::parser.stringToEnum( "Up" ); 
         else      return eAction::parser.stringToEnum( "Left" ); 
     }
     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
 }
 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
     if( mySimpleState.goalDistance < 189.7f ) { 
         if( mySimpleState.goalDirection < 4.79f ) { 
             if( mySimpleState.mySlices[0].targetDistance < 148.6f )      return eAction::parser.stringToEnum( "Down" ); 
             else { 
                 if( mySimpleState.mySlices[8].targetDistance < 129.08f )      return eAction::parser.stringToEnum( "Right" ); 
                 else { 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                         if( mySimpleState.mySlices[6].targetDistance < 210.88f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Right" ); 
                     }
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
             }
         }
         else { 
             if( mySimpleState.mySlices[17].targetDistance < 255.94f ) { 
                 if( mySimpleState.goalDistance < 111.85f )      return eAction::parser.stringToEnum( "Down" ); 
                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
             }
             else { 
                 if( mySimpleState.goalDirection < 5.42f ) { 
                     if( mySimpleState.shipSpeed < 3.36f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                 }
                 else { 
                     if( mySimpleState.mySlices[3].targetDistance < 199.87f ) { 
                         if( mySimpleState.shipDirection < 2.46f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                     }
                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                 }
             }
         }
     }
     else { 
         if( mySimpleState.mySlices[0].targetDistance < 153.76f ) { 
             if( mySimpleState.mySlices[1].targetDistance < 145.56f )      return eAction::parser.stringToEnum( "Up" ); 
             else { 
                 if( mySimpleState.goalDirection < 4.8f )      return eAction::parser.stringToEnum( "Right" ); 
                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
             }
         }
         else { 
             if( mySimpleState.mySlices[8].targetDistance < 166.21f ) { 
                 if( mySimpleState.goalDistance < 240.89f )      return eAction::parser.stringToEnum( "Down-Left" ); 
                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
             }
             else { 
                 if( mySimpleState.mySlices[3].targetDistance < 220.3f )      return eAction::parser.stringToEnum( "Left" ); 
                 else { 
                     if( mySimpleState.mySlices[0].targetDistance < 226.64f ) { 
                         if( mySimpleState.mySlices[10].targetDistance < 183.74f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                 }
             }
         }
     }
 }
 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
     if( mySimpleState.shipDirection < 2.25f ) { 
         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
             if( mySimpleState.mySlices[7].targetDistance < 90.53f ) { 
                 if( mySimpleState.mySlices[8].targetDistance < 185.29f )      return eAction::parser.stringToEnum( "Up" ); 
                 else { 
                     if( mySimpleState.shipDirection < 0.47f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
             }
             else { 
                 if( mySimpleState.shipSpeed < 1.13f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
             }
         }
         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.invincible  ==  true )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                 }
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                     if( mySimpleState.mySlices[6].targetDistance < 223.44f ) { 
                         if( mySimpleState.shipDirection < 1.11f )      return eAction::parser.stringToEnum( "Up" ); 
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
             }
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
             if( mySimpleState.invincible  ==  true ) { 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[6].targetDistance < 242.99f ) { 
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     else { 
                         if( mySimpleState.goalDirection < 2.3f ) { 
                             if( mySimpleState.mySlices[2].targetDistance < 255.51f )      return eAction::parser.stringToEnum( "Left" ); 
                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                         }
                         else { 
                             if( mySimpleState.goalDistance < 186.38f )      return eAction::parser.stringToEnum( "Up" ); 
                             else { 
                                 if( mySimpleState.goalDirection < 2.78f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 else      return eAction::parser.stringToEnum( "Down" ); 
                             }
                         }
                     }
                 }
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
             }
             else { 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.shipSpeed < 1.84f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else { 
                         if( mySimpleState.mySlices[16].targetDistance < 59.11f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else { 
                             if( mySimpleState.goalDistance < 92.7f )      return eAction::parser.stringToEnum( "Up" ); 
                             else { 
                                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                         }
                     }
                 }
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
         }
         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.shipDirection < 0.49f ) { 
                     if( mySimpleState.goalDistance < 263.45f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.mySlices[4].targetDistance < 156.55f ) { 
                             if( mySimpleState.mySlices[7].targetDistance < 218 )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                 }
                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
             }
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.goalDirection < 0.18f ) { 
                     if( mySimpleState.mySlices[7].targetDistance < 159.73f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
             }
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[9].targetDistance < 169.23f ) { 
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                     if( mySimpleState.shipSpeed < 3.35f ) { 
                         if( mySimpleState.shipDirection < 0.1f )      return eAction::parser.stringToEnum( "Up" ); 
                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                     }
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                         if( mySimpleState.mySlices[14].targetDistance < 205.52f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                             if( mySimpleState.mySlices[0].targetDistance < 143.56f )      return eAction::parser.stringToEnum( "Right" ); 
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.goalDirection < 2.44f ) { 
                                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                     if( mySimpleState.goalDirection < 0.16f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     else { 
                                         if( mySimpleState.goalDirection < 0.55f )      return eAction::parser.stringToEnum( "Left" ); 
                                         else { 
                                             if( mySimpleState.shipSpeed < 2.38f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         }
                                     }
                                 }
                                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.shipSpeed < 2.72f ) { 
                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                             if( mySimpleState.goalDistance < 126.45f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             else      return eAction::parser.stringToEnum( "Left" ); 
                                         }
                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                             if( mySimpleState.shipDirection < 0.09f )      return eAction::parser.stringToEnum( "Left" ); 
                                             else { 
                                                 if( mySimpleState.mySlices[5].targetDistance < 177.64f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                 else      return eAction::parser.stringToEnum( "Left" ); 
                                             }
                                         }
                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                             if( mySimpleState.shipDirection < 1.46f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                     }
                                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 }
                                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             else { 
                                 if( mySimpleState.mySlices[9].targetDistance < 30.7f )      return eAction::parser.stringToEnum( "Right" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                             }
                         }
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 }
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
             }
             else { 
                 if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[7].targetDistance < 171.82f )      return eAction::parser.stringToEnum( "Up" ); 
                         else { 
                             if( mySimpleState.goalDistance < 272.9f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                     }
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                     if( mySimpleState.goalDirection < 1.26f ) { 
                         if( mySimpleState.mySlices[16].targetDistance < 253.13f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else { 
                             if( mySimpleState.shipSpeed < 0.25f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else { 
                                 if( mySimpleState.shipDirection < 1.57f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                             }
                         }
                     }
                     else { 
                         if( mySimpleState.mySlices[10].targetDistance < 114.41f ) { 
                             if( mySimpleState.mySlices[5].targetDistance < 216.11f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else      return eAction::parser.stringToEnum( "Left" ); 
                         }
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                 }
                 if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                     if( mySimpleState.goalDirection < 5.64f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else { 
                         if( mySimpleState.shipDirection < 0.41f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                 }
                 if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                         if( mySimpleState.goalDistance < 260.36f ) { 
                             if( mySimpleState.goalDirection < 4.2f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else { 
                                 if( mySimpleState.shipSpeed < 1.49f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                         }
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[5].targetDistance < 200 ) { 
                                 if( mySimpleState.mySlices[12].targetDistance < 242.12f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 else { 
                                     if( mySimpleState.mySlices[18].targetDistance < 244.89f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                             }
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                             if( mySimpleState.mySlices[18].targetDistance < 148.76f )      return eAction::parser.stringToEnum( "Up" ); 
                             else { 
                                 if( mySimpleState.mySlices[1].targetDistance < 164.7f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                             }
                         }
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.shipSpeed < 1.43f )      return eAction::parser.stringToEnum( "Right" ); 
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[8].targetDistance < 151.31f ) { 
                             if( mySimpleState.mySlices[6].targetDistance < 230.58f ) { 
                                 if( mySimpleState.goalDistance < 122.67f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                             }
                             else { 
                                 if( mySimpleState.canShoot  ==  true ) { 
                                     if( mySimpleState.goalDistance < 154.98f ) { 
                                         if( mySimpleState.mySlices[18].targetDistance < 195.94f ) { 
                                             if( mySimpleState.mySlices[12].targetDistance < 111.45f )      return eAction::parser.stringToEnum( "Up" ); 
                                             else { 
                                                 if( mySimpleState.shipDirection < 0.17f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                             }
                                         }
                                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     }
                                     else { 
                                         if( mySimpleState.mySlices[8].targetDistance < 92.88f ) { 
                                             if( mySimpleState.goalDistance < 211.89f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                         else { 
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                                 if( mySimpleState.mySlices[8].targetDistance < 132.83f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 else      return eAction::parser.stringToEnum( "Left" ); 
                                             }
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                 if( mySimpleState.mySlices[16].targetDistance < 188.08f )      return eAction::parser.stringToEnum( "Left" ); 
                                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             }
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         }
                                     }
                                 }
                                 else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                             }
                         }
                         else { 
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                     if( mySimpleState.mySlices[4].targetDistance < 140.24f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     else { 
                                         if( mySimpleState.goalDistance < 138.22f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                 }
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                 if( mySimpleState.mySlices[6].targetDistance < 239.07f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                             }
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                 if( mySimpleState.goalDistance < 118.96f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else { 
                                     if( mySimpleState.mySlices[13].targetDistance < 192.21f ) { 
                                         if( mySimpleState.goalDirection < 0.55f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                     else { 
                                         if( mySimpleState.shipSpeed < 2.45f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                 }
                             }
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[10].targetDistance < 180.95f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                     if( mySimpleState.shipDirection < 1.31f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 }
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                     if( mySimpleState.goalDistance < 134.57f )      return eAction::parser.stringToEnum( "Right" ); 
                                     else { 
                                         if( mySimpleState.goalDistance < 172.12f )      return eAction::parser.stringToEnum( "Up" ); 
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
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                         if( mySimpleState.mySlices[5].targetDistance < 58.58f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     }
                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                             if( mySimpleState.shipSpeed < 2.45f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                             if( mySimpleState.shipSpeed < 2.19f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                             else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                         }
                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                     if( mySimpleState.mySlices[19].targetDistance < 238.83f ) { 
                                         if( mySimpleState.mySlices[1].targetDistance < 241.21f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         else { 
                                             if( mySimpleState.shipDirection < 0.63f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                     }
                                     else { 
                                         if( mySimpleState.shipSpeed < 2.13f ) { 
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         }
                                         else { 
                                             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                                             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         }
                                     }
                                 }
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                         if( mySimpleState.shipSpeed < 1.76f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     }
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                             if( mySimpleState.shipSpeed < 0.94f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             else { 
                                                 if( mySimpleState.goalDirection < 0.91f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 else { 
                                                     if( mySimpleState.shipDirection < 0.26f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                 }
                                             }
                                         }
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                             if( mySimpleState.shipSpeed < 1.96f ) { 
                                                 if( mySimpleState.mySlices[17].targetDistance < 229.89f ) { 
                                                     if( mySimpleState.mySlices[10].targetDistance < 232.2f )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else { 
                                                         if( mySimpleState.mySlices[11].targetDistance < 141.61f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                         else      return eAction::parser.stringToEnum( "Right" ); 
                                                     }
                                                 }
                                                 else { 
                                                     if( mySimpleState.goalDirection < 6.27f ) { 
                                                         if( mySimpleState.mySlices[11].targetDistance < 220.35f )      return eAction::parser.stringToEnum( "Up" ); 
                                                         else { 
                                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                                                 if( mySimpleState.shipDirection < 0.55f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                                             }
                                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                 if( mySimpleState.mySlices[7].targetDistance < 180.77f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                 else { 
                                                                     if( mySimpleState.shipDirection < 0.75f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                     else { 
                                                                         if( mySimpleState.mySlices[5].targetDistance < 140.09f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                                     }
                                                                 }
                                                             }
                                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                         }
                                                     }
                                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                 }
                                             }
                                             else { 
                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                                     if( mySimpleState.shipDirection < 1.25f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                 }
                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     }
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 }
                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             }
                                         }
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                 if( mySimpleState.shipDirection < 1.24f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 else { 
                                                     if( mySimpleState.shipSpeed < 1.6f )      return eAction::parser.stringToEnum( "Right" ); 
                                                     else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                                 }
                                             }
                                             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         }
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                         if( mySimpleState.mySlices[12].targetDistance < 106.03f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 }
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 }
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                         if( mySimpleState.mySlices[2].targetDistance < 173.32f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 }
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                     if( mySimpleState.shipDirection < 0.77f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                             }
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                 if( mySimpleState.mySlices[18].targetDistance < 83.68f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                 if( mySimpleState.shipDirection < 0.76f ) { 
                                     if( mySimpleState.shipSpeed < 1.74f ) { 
                                         if( mySimpleState.mySlices[12].targetDistance < 248.74f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                                 else { 
                                     if( mySimpleState.goalDirection < 2.34f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 }
                             }
                         }
                     }
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                         if( mySimpleState.mySlices[16].targetDistance < 196.65f ) { 
                             if( mySimpleState.goalDirection < 0.45f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                         else { 
                             if( mySimpleState.mySlices[10].targetDistance < 198.55f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else { 
                                 if( mySimpleState.goalDirection < 0.45f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                             }
                         }
                     }
                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                         if( mySimpleState.mySlices[14].targetDistance < 238.6f ) { 
                             if( mySimpleState.goalDirection < 5.29f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                         else { 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.shipDirection < 0.45f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                     }
                 }
                 if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                     if( mySimpleState.shipSpeed < 0.02f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else { 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[15].targetDistance < 188.61f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else { 
                                 if( mySimpleState.mySlices[0].targetDistance < 148.6f )      return eAction::parser.stringToEnum( "Right" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                             }
                         }
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                 }
                 if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                     if( mySimpleState.mySlices[17].targetDistance < 139.76f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                 }
                 if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                     if( mySimpleState.shipSpeed < 0.02f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
             }
         }
         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
             if( mySimpleState.shipDirection < 0.43f )      return eAction::parser.stringToEnum( "Up" ); 
             else { 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
         }
         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
             if( mySimpleState.goalDirection < 0.63f ) { 
                 if( mySimpleState.shipSpeed < 0.62f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 else      return eAction::parser.stringToEnum( "Up" ); 
             }
             else { 
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                     if( mySimpleState.shipSpeed < 1.98f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[7].targetDistance < 190.46f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                 }
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                     if( mySimpleState.mySlices[13].targetDistance < 212.87f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
             }
         }
         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                 if( mySimpleState.goalDirection < 6.01f )      return eAction::parser.stringToEnum( "Up" ); 
                 else { 
                     if( mySimpleState.mySlices[6].targetDistance < 223.99f )      return eAction::parser.stringToEnum( "Right" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
             }
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.shipSpeed < 4.33f ) { 
                     if( mySimpleState.mySlices[10].targetDistance < 238.9f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.shipDirection < 0.52f ) { 
                             if( mySimpleState.mySlices[3].targetDistance < 179.99f ) { 
                                 if( mySimpleState.mySlices[5].targetDistance < 219.54f )      return eAction::parser.stringToEnum( "Left" ); 
                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                             }
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                 }
                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
             }
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
     }
     else { 
         if( mySimpleState.shipSpeed < 0.49f ) { 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                 if( mySimpleState.mySlices[5].targetDistance < 173.75f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 else { 
                     if( mySimpleState.mySlices[12].targetDistance < 214.66f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.shipSpeed < 0.06f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                 }
             }
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[2].targetDistance < 212.96f ) { 
                     if( mySimpleState.mySlices[5].targetDistance < 179.6f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                     else { 
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                 if( mySimpleState.shipDirection < 5.86f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[8].targetDistance < 207.6f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                         }
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                 }
                 else { 
                     if( mySimpleState.mySlices[5].targetDistance < 29.05f )      return eAction::parser.stringToEnum( "Down" ); 
                     else { 
                         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Left" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                             if( mySimpleState.shipDirection < 4.29f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.shipDirection < 5.44f ) { 
                                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                     if( mySimpleState.mySlices[5].targetDistance < 108.56f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     else      return eAction::parser.stringToEnum( "Left" ); 
                                 }
                                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Left" ); 
                                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.invincible  ==  true ) { 
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                 if( mySimpleState.mySlices[19].targetDistance < 104.14f )      return eAction::parser.stringToEnum( "Left" ); 
                                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                             }
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         }
                                         else { 
                                             if( mySimpleState.goalDirection < 4.55f )      return eAction::parser.stringToEnum( "Left" ); 
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                     }
                                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             else { 
                                 if( mySimpleState.mySlices[1].targetDistance < 185.97f ) { 
                                     if( mySimpleState.shipSpeed < 0.41f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     else      return eAction::parser.stringToEnum( "Right" ); 
                                 }
                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                         }
                         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                             if( mySimpleState.mySlices[1].targetDistance < 238.53f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else      return eAction::parser.stringToEnum( "Left" ); 
                         }
                         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                 }
             }
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                 if( mySimpleState.mySlices[4].targetDistance < 238.53f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 else { 
                     if( mySimpleState.mySlices[19].targetDistance < 114.1f ) { 
                         if( mySimpleState.goalDistance < 125.35f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     else { 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.goalDistance < 138.11f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else { 
                                 if( mySimpleState.mySlices[6].targetDistance < 147.92f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                             }
                         }
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                 }
             }
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
         }
         else { 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                 if( mySimpleState.invincible  ==  true )      return eAction::parser.stringToEnum( "Down-Right" ); 
                 else { 
                     if( mySimpleState.goalDirection < 3.5f )      return eAction::parser.stringToEnum( "Down" ); 
                     else { 
                         if( mySimpleState.shipDirection < 3.29f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Down" ); 
                     }
                 }
             }
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.canShoot  ==  true ) { 
                             if( mySimpleState.shipSpeed < 1.91f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else      return eAction::parser.stringToEnum( "Right" ); 
                         }
                         else      return eAction::parser.stringToEnum( "Right" ); 
                     }
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 }
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                     if( mySimpleState.goalDistance < 150.63f ) { 
                         if( mySimpleState.mySlices[9].targetDistance < 173.66f ) { 
                             if( mySimpleState.goalDistance < 146.62f ) { 
                                 if( mySimpleState.mySlices[18].targetDistance < 40.07f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                             }
                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                         }
                         else { 
                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[6].targetDistance < 134.68f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                             }
                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                     }
                     else { 
                         if( mySimpleState.mySlices[12].targetDistance < 182.33f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                 }
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                     if( mySimpleState.shipDirection < 5.66f ) { 
                         if( mySimpleState.goalDirection < 4.87f ) { 
                             if( mySimpleState.goalDistance < 194.19f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "Down-Left" ); 
                         }
                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                     }
                     else { 
                         if( mySimpleState.mySlices[5].targetDistance < 205.62f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                 }
                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                     if( mySimpleState.mySlices[8].targetDistance < 227.54f ) { 
                         if( mySimpleState.goalDistance < 227.61f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                     else { 
                         if( mySimpleState.mySlices[11].targetDistance < 196.25f )      return eAction::parser.stringToEnum( "Up" ); 
                         else { 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         }
                     }
                 }
                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                     if( mySimpleState.shipDirection < 2.97f ) { 
                         if( mySimpleState.goalDistance < 183.64f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     else { 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Left" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                 }
                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                     if( mySimpleState.mySlices[17].targetDistance < 231.11f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                 }
                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                     if( mySimpleState.mySlices[18].targetDistance < 110.76f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     else      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                         if( mySimpleState.mySlices[9].targetDistance < 186.92f )      return eAction::parser.stringToEnum( "Up" ); 
                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                     }
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                         if( mySimpleState.mySlices[8].targetDistance < 225.09f ) { 
                             if( mySimpleState.shipSpeed < 1.75f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else      return eAction::parser.stringToEnum( "Down" ); 
                         }
                         else { 
                             if( mySimpleState.shipSpeed < 1.36f ) { 
                                 if( mySimpleState.shipSpeed < 0.86f ) { 
                                     if( mySimpleState.mySlices[13].targetDistance < 187.67f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else { 
                                         if( mySimpleState.mySlices[3].targetDistance < 178.01f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                 }
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             else { 
                                 if( mySimpleState.mySlices[5].targetDistance < 226.31f ) { 
                                     if( mySimpleState.mySlices[1].targetDistance < 242.3f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 }
                                 else { 
                                     if( mySimpleState.mySlices[9].targetDistance < 228.91f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     else      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                             }
                         }
                     }
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                         if( mySimpleState.mySlices[16].targetDistance < 173.37f ) { 
                             if( mySimpleState.shipDirection < 6.27f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                         }
                         else { 
                             if( mySimpleState.goalDistance < 142.71f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                     }
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                         if( mySimpleState.mySlices[12].targetDistance < 154.94f ) { 
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                         else { 
                             if( mySimpleState.mySlices[7].targetDistance < 149.71f )      return eAction::parser.stringToEnum( "Up" ); 
                             else { 
                                 if( mySimpleState.mySlices[17].targetDistance < 177.01f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 else      return eAction::parser.stringToEnum( "Down" ); 
                             }
                         }
                     }
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                             if( mySimpleState.goalDirection < 2.12f ) { 
                                 if( mySimpleState.mySlices[11].targetDistance < 242.81f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                             if( mySimpleState.mySlices[2].targetDistance < 209.76f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.invincible  ==  true ) { 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.goalDirection < 3.43f )      return eAction::parser.stringToEnum( "Down" ); 
                                         else      return eAction::parser.stringToEnum( "Down-Right" ); 
                                     }
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                 if( mySimpleState.shipSpeed < 2.03f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                             }
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                             if( mySimpleState.mySlices[5].targetDistance < 181.9f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else { 
                                 if( mySimpleState.shipSpeed < 0.89f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 else { 
                                     if( mySimpleState.shipDirection < 6.16f ) { 
                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 }
                             }
                         }
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                             if( mySimpleState.goalDirection < 2.44f ) { 
                                 if( mySimpleState.goalDistance < 132.11f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else { 
                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                             }
                             else { 
                                 if( mySimpleState.mySlices[3].targetDistance < 178.65f )      return eAction::parser.stringToEnum( "Down" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                         }
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                 if( mySimpleState.goalDistance < 151.57f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                 if( mySimpleState.mySlices[12].targetDistance < 160.91f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                     if( mySimpleState.goalDirection < 3.7f )      return eAction::parser.stringToEnum( "Left" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 }
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[8].targetDistance < 192.65f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         else { 
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                 if( mySimpleState.shipSpeed < 2.14f ) { 
                                                     if( mySimpleState.goalDirection < 2.61f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                 }
                                                 else { 
                                                     if( mySimpleState.shipSpeed < 2.15f )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                 }
                                             }
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         }
                                     }
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[17].targetDistance < 169.8f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else { 
                                             if( mySimpleState.shipDirection < 5.85f ) { 
                                                 if( mySimpleState.shipDirection < 5.38f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                 else      return eAction::parser.stringToEnum( "Left" ); 
                                             }
                                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         }
                                     }
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                         if( mySimpleState.goalDistance < 139.93f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         else { 
                                             if( mySimpleState.shipSpeed < 2.6f )      return eAction::parser.stringToEnum( "Down" ); 
                                             else      return eAction::parser.stringToEnum( "Left" ); 
                                         }
                                     }
                                 }
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                         if( mySimpleState.mySlices[2].targetDistance < 155.52f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         else { 
                                             if( mySimpleState.goalDirection < 3.94f )      return eAction::parser.stringToEnum( "Up" ); 
                                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         }
                                     }
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                         if( mySimpleState.shipDirection < 5.81f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     }
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                         if( mySimpleState.shipDirection < 4.87f ) { 
                                             if( mySimpleState.mySlices[7].targetDistance < 50.89f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     }
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Right" ); 
                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                         if( mySimpleState.mySlices[2].targetDistance < 250.46f ) { 
                                             if( mySimpleState.shipDirection < 5.18f )      return eAction::parser.stringToEnum( "Left" ); 
                                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         }
                                         else { 
                                             if( mySimpleState.mySlices[19].targetDistance < 133.5f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                     }
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                             if( mySimpleState.shipDirection < 5.37f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                             if( mySimpleState.mySlices[8].targetDistance < 233.22f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             else { 
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                                     if( mySimpleState.goalDistance < 183.6f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                 }
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                                     if( mySimpleState.mySlices[5].targetDistance < 186.62f )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                 }
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                         if( mySimpleState.mySlices[11].targetDistance < 220.46f )      return eAction::parser.stringToEnum( "Up" ); 
                                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                     }
                                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                 }
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                                     if( mySimpleState.shipSpeed < 1.2f ) { 
                                                         if( mySimpleState.mySlices[6].targetDistance < 233.87f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                         else { 
                                                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         }
                                                     }
                                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                                 }
                                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                                     if( mySimpleState.mySlices[3].targetDistance < 222.17f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                     else { 
                                                         if( mySimpleState.goalDirection < 4.8f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                     }
                                                 }
                                             }
                                         }
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                     }
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                         if( mySimpleState.shipDirection < 3.89f ) { 
                                             if( mySimpleState.goalDistance < 126.18f )      return eAction::parser.stringToEnum( "Down" ); 
                                             else      return eAction::parser.stringToEnum( "Right" ); 
                                         }
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[1].targetDistance < 71.03f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     }
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                 if( mySimpleState.shipSpeed < 1.3f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                 if( mySimpleState.shipSpeed < 1.66f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                             if( mySimpleState.mySlices[1].targetDistance < 237.22f )      return eAction::parser.stringToEnum( "Up" ); 
                             else { 
                                 if( mySimpleState.mySlices[15].targetDistance < 169.81f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 else { 
                                     if( mySimpleState.shipSpeed < 2.08f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 }
                             }
                         }
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                             if( mySimpleState.mySlices[13].targetDistance < 127.82f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                             if( mySimpleState.goalDirection < 4.68f ) { 
                                 if( mySimpleState.mySlices[5].targetDistance < 130.82f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             else { 
                                 if( mySimpleState.goalDirection < 5 ) { 
                                     if( mySimpleState.mySlices[8].targetDistance < 206.04f )      return eAction::parser.stringToEnum( "Right" ); 
                                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 }
                                 else { 
                                     if( mySimpleState.shipSpeed < 1.19f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 }
                             }
                         }
                     }
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                         if( mySimpleState.goalDirection < 2.02f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                         if( mySimpleState.goalDirection < 5.23f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else { 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[14].targetDistance < 220.51f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 }
                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                     }
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[2].targetDistance < 247.79f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else { 
                                 if( mySimpleState.goalDirection < 4.26f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                         }
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                 }
                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down-Right" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                 }
                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                     if( mySimpleState.mySlices[5].targetDistance < 235.14f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     else { 
                         if( mySimpleState.shipSpeed < 1.77f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                 }
             }
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                 if( mySimpleState.mySlices[11].targetDistance < 196.36f )      return eAction::parser.stringToEnum( "Up" ); 
                 else { 
                     if( mySimpleState.mySlices[1].targetDistance < 248.01f ) { 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Left" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Right" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     else { 
                         if( mySimpleState.mySlices[2].targetDistance < 69.65f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                     }
                 }
             }
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                         if( mySimpleState.mySlices[2].targetDistance < 132.59f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[5].targetDistance < 221.6f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
         }
     }
 }
 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
     if( mySimpleState.mySlices[0].targetDistance < 139.31f ) { 
         if( mySimpleState.mySlices[0].targetDistance < 76.05f ) { 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         else      return eAction::parser.stringToEnum( "Up-Left" ); 
     }
     else { 
         if( mySimpleState.shipSpeed < 1.89f ) { 
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                 if( mySimpleState.mySlices[14].targetDistance < 210.91f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
             }
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[13].targetDistance < 230.05f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                 else { 
                     if( mySimpleState.shipSpeed < 1.63f ) { 
                         if( mySimpleState.goalDistance < 133.58f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                     }
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
             }
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         else { 
             if( mySimpleState.mySlices[3].targetDistance < 242.59f )      return eAction::parser.stringToEnum( "Up-Right" ); 
             else { 
                 if( mySimpleState.mySlices[11].targetDistance < 203.49f )      return eAction::parser.stringToEnum( "Up" ); 
                 else { 
                     if( mySimpleState.goalDistance < 58.07f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                 }
             }
         }
     }
 }
 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
     if( mySimpleState.mySlices[11].targetDistance < 229.46f ) { 
         if( mySimpleState.invincible  ==  true ) { 
             if( mySimpleState.goalDirection < 1.68f )      return eAction::parser.stringToEnum( "Down" ); 
             else      return eAction::parser.stringToEnum( "Down-Left" ); 
         }
         else      return eAction::parser.stringToEnum( "Up-Left" ); 
     }
     else { 
         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.shipDirection < 5.06f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                 if( mySimpleState.goalDirection < 6.01f )      return eAction::parser.stringToEnum( "Up" ); 
                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
             }
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     }
 }
 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
     if( mySimpleState.mySlices[14].targetDistance < 207.83f ) { 
         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Left" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     }
     else { 
         if( mySimpleState.mySlices[0].targetDistance < 130.31f ) { 
             if( mySimpleState.mySlices[7].targetDistance < 175.81f )      return eAction::parser.stringToEnum( "Up" ); 
             else { 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                     if( mySimpleState.shipDirection < 0.52f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
         }
         else { 
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down-Left" ); 
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.shipDirection < 1.53f ) { 
                     if( mySimpleState.shipSpeed < 0.54f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 else { 
                     if( mySimpleState.shipSpeed < 1.86f ) { 
                         if( mySimpleState.mySlices[9].targetDistance < 147.42f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else { 
                             if( mySimpleState.goalDistance < 193.76f ) { 
                                 if( mySimpleState.shipSpeed < 1.45f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                     }
                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                 }
             }
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
     }
 }


}
