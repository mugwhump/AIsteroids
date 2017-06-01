//treeType = RandomTree

#include "AI.h"
#include "SimpleState.h"
#include "InputDirection.h"
#include "RelativeDirection.h"



//In AI.h: eAction::ActionEnum Marco( SimpleState& mySimpleState ); 

eAction::ActionEnum AI::Marco( SimpleState& mySimpleState ) {
 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
     if( mySimpleState.shipDirection < 0.9f ) { 
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Right" ); 
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[17].targetDistance < 249.8f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 else { 
                     if( mySimpleState.mySlices[1].targetDistance < 246.81f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
             }
             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     }
     else { 
         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Right" ); 
         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[6].targetDistance < 241.16f ) { 
                 if( mySimpleState.mySlices[2].targetDistance < 201.02f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 else { 
                     if( mySimpleState.mySlices[0].targetDistance < 175.61f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
             }
             else { 
                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[10].targetDistance < 115.51f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.mySlices[7].targetDistance < 96.84f )      return eAction::parser.stringToEnum( "Up" ); 
                         else { 
                             if( mySimpleState.goalDirection < 0.22f ) { 
                                 if( mySimpleState.shipSpeed < 2.06f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 else      return eAction::parser.stringToEnum( "Right" ); 
                             }
                             else      return eAction::parser.stringToEnum( "Left" ); 
                         }
                     }
                 }
                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
         }
         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Right" ); 
         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
             if( mySimpleState.mySlices[18].targetDistance < 157.7f ) { 
                 if( mySimpleState.goalDistance < 123.17f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
             }
             else { 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[12].targetDistance < 70 )      return eAction::parser.stringToEnum( "Left" ); 
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Left" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
         }
     }
 }
 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Left" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     }
     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
         if( mySimpleState.mySlices[6].targetDistance < 139.29f ) { 
             if( mySimpleState.mySlices[4].targetDistance < 238.16f )      return eAction::parser.stringToEnum( "Up" ); 
             else { 
                 if( mySimpleState.mySlices[0].targetDistance < 198.92f )      return eAction::parser.stringToEnum( "Up" ); 
                 else { 
                     if( mySimpleState.shipSpeed < 0.58f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.mySlices[9].targetDistance < 176.76f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                         else { 
                             if( mySimpleState.goalDistance < 189.32f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                         }
                     }
                 }
             }
         }
         else { 
             if( mySimpleState.shipDirection < 5.89f ) { 
                 if( mySimpleState.shipSpeed < 0.4f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
             }
             else { 
                 if( mySimpleState.goalDistance < 206.53f )      return eAction::parser.stringToEnum( "Up" ); 
                 else      return eAction::parser.stringToEnum( "Fire-Up" ); 
             }
         }
     }
     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Left" ); 
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[2].targetDistance < 163.22f )      return eAction::parser.stringToEnum( "Right" ); 
                 else { 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                         if( mySimpleState.mySlices[8].targetDistance < 209.34f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
             }
             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down-Left" ); 
     }
     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down-Left" ); 
 }
 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
     if( mySimpleState.mySlices[12].targetDistance < 152.3f ) { 
         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.shipSpeed < 0.14f )      return eAction::parser.stringToEnum( "NoDirection" ); 
             else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
         }
         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
     }
     else { 
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Right" ); 
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[11].targetDistance < 240.88f ) { 
                 if( mySimpleState.mySlices[18].targetDistance < 239.57f )      return eAction::parser.stringToEnum( "Right" ); 
                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
             }
             else { 
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Left" ); 
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
             }
         }
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
     }
 }
 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
         if( mySimpleState.goalDirection < 3.09f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
         else { 
             if( mySimpleState.shipSpeed < 0.46f )      return eAction::parser.stringToEnum( "NoDirection" ); 
             else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
         }
     }
     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.shipSpeed < 0.65f ) { 
                 if( mySimpleState.mySlices[2].targetDistance < 254.53f ) { 
                     if( mySimpleState.goalDistance < 170.33f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else { 
                         if( mySimpleState.goalDistance < 172.5f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                         else { 
                             if( mySimpleState.goalDistance < 172.91f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                         }
                     }
                 }
                 else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
             }
             else      return eAction::parser.stringToEnum( "NoDirection" ); 
         }
         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     }
     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.canShoot  ==  true )      return eAction::parser.stringToEnum( "Left" ); 
             else      return eAction::parser.stringToEnum( "Right" ); 
         }
         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Right" ); 
         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     }
     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
         if( mySimpleState.mySlices[19].targetDistance < 146.58f ) { 
             if( mySimpleState.mySlices[12].targetDistance < 181.96f ) { 
                 if( mySimpleState.mySlices[4].targetDistance < 238.2f ) { 
                     if( mySimpleState.mySlices[4].targetDistance < 235.31f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else { 
                         if( mySimpleState.shipDirection < 0.04f )      return eAction::parser.stringToEnum( "Up" ); 
                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                     }
                 }
                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
             }
             else { 
                 if( mySimpleState.goalDistance < 119.29f )      return eAction::parser.stringToEnum( "Up" ); 
                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
             }
         }
         else { 
             if( mySimpleState.mySlices[4].targetDistance < 213.38f )      return eAction::parser.stringToEnum( "Right" ); 
             else      return eAction::parser.stringToEnum( "NoDirection" ); 
         }
     }
     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
 }
 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
     if( mySimpleState.shipDirection < 0.73f ) { 
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[1].targetDistance < 113.1f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
             else { 
                 if( mySimpleState.shipSpeed < 1.09f )      return eAction::parser.stringToEnum( "Up" ); 
                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
             }
         }
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                 if( mySimpleState.shipSpeed < 0.32f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                 else      return eAction::parser.stringToEnum( "Up" ); 
             }
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[9].targetDistance < 104.85f )      return eAction::parser.stringToEnum( "Up" ); 
                 else { 
                     if( mySimpleState.shipDirection < 0.09f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
             }
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
     }
     else { 
         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
             if( mySimpleState.shipSpeed < 1.5f )      return eAction::parser.stringToEnum( "Up-Right" ); 
             else      return eAction::parser.stringToEnum( "Right" ); 
         }
         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
             if( mySimpleState.mySlices[0].targetDistance < 237.3f ) { 
                 if( mySimpleState.shipSpeed < 2.07f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 else      return eAction::parser.stringToEnum( "Right" ); 
             }
             else { 
                 if( mySimpleState.shipDirection < 1.67f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 else      return eAction::parser.stringToEnum( "Up" ); 
             }
         }
         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[13].targetDistance < 124.83f ) { 
                 if( mySimpleState.canShoot  ==  true ) { 
                     if( mySimpleState.goalDistance < 183.06f )      return eAction::parser.stringToEnum( "Right" ); 
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
                 else { 
                     if( mySimpleState.mySlices[0].targetDistance < 166.91f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else { 
                         if( mySimpleState.mySlices[0].targetDistance < 169.39f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                         else { 
                             if( mySimpleState.mySlices[0].targetDistance < 171.36f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                         }
                     }
                 }
             }
             else { 
                 if( mySimpleState.shipDirection < 2.6f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 else { 
                     if( mySimpleState.mySlices[19].targetDistance < 200.25f ) { 
                         if( mySimpleState.goalDirection < 3.5f )      return eAction::parser.stringToEnum( "Left" ); 
                         else      return eAction::parser.stringToEnum( "Right" ); 
                     }
                     else      return eAction::parser.stringToEnum( "Left" ); 
                 }
             }
         }
         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     }
 }
 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
         if( mySimpleState.goalDistance < 106.17f ) { 
             if( mySimpleState.mySlices[19].targetDistance < 122.29f )      return eAction::parser.stringToEnum( "Up" ); 
             else { 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.shipDirection < 2.63f )      return eAction::parser.stringToEnum( "Right" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down-Left" ); 
             }
         }
         else { 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                 if( mySimpleState.mySlices[19].targetDistance < 217.07f ) { 
                     if( mySimpleState.mySlices[12].targetDistance < 78.8f ) { 
                         if( mySimpleState.mySlices[12].targetDistance < 76.48f ) { 
                             if( mySimpleState.mySlices[19].targetDistance < 214.25f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                         }
                         else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                     }
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
                 else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
             }
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[12].targetDistance < 91.99f ) { 
                     if( mySimpleState.mySlices[18].targetDistance < 144.78f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.mySlices[9].targetDistance < 143.39f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Left" ); 
                     }
                 }
                 else { 
                     if( mySimpleState.shipDirection < 1.73f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
             }
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
     }
     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
         if( mySimpleState.mySlices[9].targetDistance < 198.3f ) { 
             if( mySimpleState.goalDistance < 192.87f )      return eAction::parser.stringToEnum( "Left" ); 
             else      return eAction::parser.stringToEnum( "Fire-Up" ); 
         }
         else { 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[11].targetDistance < 194.31f ) { 
                     if( mySimpleState.canShoot  ==  true ) { 
                         if( mySimpleState.shipSpeed < 1.19f )      return eAction::parser.stringToEnum( "Right" ); 
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                     else      return eAction::parser.stringToEnum( "Left" ); 
                 }
                 else { 
                     if( mySimpleState.mySlices[7].targetDistance < 201.18f ) { 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     else      return eAction::parser.stringToEnum( "Down-Left" ); 
                 }
             }
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
     }
     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.goalDirection < 2.67f ) { 
                 if( mySimpleState.shipDirection < 5.28f )      return eAction::parser.stringToEnum( "Down-Left" ); 
                 else      return eAction::parser.stringToEnum( "Right" ); 
             }
             else      return eAction::parser.stringToEnum( "Up-Left" ); 
         }
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Right" ); 
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
             if( mySimpleState.goalDistance < 197.81f )      return eAction::parser.stringToEnum( "NoDirection" ); 
             else { 
                 if( mySimpleState.shipSpeed < 0.29f ) { 
                     if( mySimpleState.mySlices[1].targetDistance < 142.26f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else { 
                         if( mySimpleState.goalDistance < 199.98f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                         else { 
                             if( mySimpleState.shipSpeed < 0.19f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                         }
                     }
                 }
                 else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
             }
         }
     }
     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
             if( mySimpleState.shipDirection < 5.27f )      return eAction::parser.stringToEnum( "Up" ); 
             else      return eAction::parser.stringToEnum( "Left" ); 
         }
         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.shipDirection < 5.25f ) { 
                     if( mySimpleState.shipSpeed < 1.94f ) { 
                         if( mySimpleState.shipDirection < 5.11f )      return eAction::parser.stringToEnum( "Left" ); 
                         else { 
                             if( mySimpleState.mySlices[9].targetDistance < 170.48f ) { 
                                 if( mySimpleState.mySlices[5].targetDistance < 152.96f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                         }
                     }
                     else { 
                         if( mySimpleState.goalDirection < 6.13f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                         else { 
                             if( mySimpleState.goalDistance < 161.27f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else { 
                                 if( mySimpleState.goalDirection < 6.17f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                             }
                         }
                     }
                 }
                 else { 
                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Right" ); 
                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Left" ); 
                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
             }
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
         }
         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
     }
     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
         if( mySimpleState.shipDirection < 3.38f ) { 
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Right" ); 
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[1].targetDistance < 153.56f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 else      return eAction::parser.stringToEnum( "Right" ); 
             }
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         else { 
             if( mySimpleState.mySlices[12].targetDistance < 134.34f )      return eAction::parser.stringToEnum( "Left" ); 
             else { 
                 if( mySimpleState.goalDirection < 5.38f ) { 
                     if( mySimpleState.goalDirection < 3.41f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else      return eAction::parser.stringToEnum( "Left" ); 
                 }
                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
             }
         }
     }
     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
             if( mySimpleState.shipSpeed < 0.54f )      return eAction::parser.stringToEnum( "NoDirection" ); 
             else { 
                 if( mySimpleState.goalDirection < 2.11f ) { 
                     if( mySimpleState.goalDistance < 148.85f ) { 
                         if( mySimpleState.shipDirection < 5.61f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else { 
                             if( mySimpleState.shipSpeed < 2.58f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                             else { 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                     if( mySimpleState.mySlices[9].targetDistance < 254.93f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 }
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                         }
                     }
                     else { 
                         if( mySimpleState.goalDistance < 151.33f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Right" ); 
                     }
                 }
                 else      return eAction::parser.stringToEnum( "Left" ); 
             }
         }
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
             if( mySimpleState.goalDirection < 5.8f ) { 
                 if( mySimpleState.goalDistance < 80.01f )      return eAction::parser.stringToEnum( "Left" ); 
                 else { 
                     if( mySimpleState.goalDistance < 163.56f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else      return eAction::parser.stringToEnum( "Left" ); 
                 }
             }
             else { 
                 if( mySimpleState.shipSpeed < 2.06f )      return eAction::parser.stringToEnum( "Down" ); 
                 else      return eAction::parser.stringToEnum( "Left" ); 
             }
         }
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
             if( mySimpleState.goalDistance < 60.28f ) { 
                 if( mySimpleState.mySlices[9].targetDistance < 162.24f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 else      return eAction::parser.stringToEnum( "Up" ); 
             }
             else { 
                 if( mySimpleState.mySlices[8].targetDistance < 167.53f )      return eAction::parser.stringToEnum( "Right" ); 
                 else { 
                     if( mySimpleState.mySlices[17].targetDistance < 201.93f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else      return eAction::parser.stringToEnum( "Left" ); 
                 }
             }
         }
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.shipDirection < 5.11f ) { 
                         if( mySimpleState.mySlices[6].targetDistance < 197 )      return eAction::parser.stringToEnum( "Right" ); 
                         else { 
                             if( mySimpleState.mySlices[18].targetDistance < 212.65f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else { 
                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Right" ); 
                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                         }
                     }
                     else { 
                         if( mySimpleState.goalDirection < 2.08f )      return eAction::parser.stringToEnum( "Right" ); 
                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                     }
                 }
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
             }
             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                 if( mySimpleState.shipSpeed < 0.07f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 else { 
                     if( mySimpleState.mySlices[14].targetDistance < 115.17f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.shipSpeed < 1.44f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else { 
                             if( mySimpleState.mySlices[13].targetDistance < 199.46f ) { 
                                 if( mySimpleState.mySlices[10].targetDistance < 235.14f )      return eAction::parser.stringToEnum( "Right" ); 
                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                             }
                             else { 
                                 if( mySimpleState.goalDirection < 4.69f ) { 
                                     if( mySimpleState.mySlices[13].targetDistance < 233.41f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else      return eAction::parser.stringToEnum( "Right" ); 
                                 }
                                 else { 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                             }
                         }
                     }
                 }
             }
             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                 if( mySimpleState.mySlices[2].targetDistance < 233.9f ) { 
                     if( mySimpleState.shipSpeed < 2.46f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.goalDirection < 4.69f )      return eAction::parser.stringToEnum( "Up" ); 
                         else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                     }
                 }
                 else { 
                     if( mySimpleState.mySlices[19].targetDistance < 130.82f ) { 
                         if( mySimpleState.mySlices[10].targetDistance < 223.11f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                     else { 
                         if( mySimpleState.goalDirection < 5.48f ) { 
                             if( mySimpleState.shipSpeed < 1.79f )      return eAction::parser.stringToEnum( "Left" ); 
                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                         else { 
                             if( mySimpleState.mySlices[9].targetDistance < 215.3f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else { 
                                 if( mySimpleState.shipSpeed < 2.56f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                         }
                     }
                 }
             }
             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                 if( mySimpleState.mySlices[14].targetDistance < 127.83f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 else { 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Right" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Right" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
             }
             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Right" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                     if( mySimpleState.mySlices[14].targetDistance < 87.58f ) { 
                         if( mySimpleState.shipSpeed < 2.27f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Right" ); 
                     }
                     else { 
                         if( mySimpleState.mySlices[15].targetDistance < 89.08f ) { 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.shipSpeed < 2.27f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 else      return eAction::parser.stringToEnum( "Right" ); 
                             }
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                         else { 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.shipDirection < 3.77f )      return eAction::parser.stringToEnum( "Right" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                 if( mySimpleState.mySlices[7].targetDistance < 85.24f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 else { 
                                     if( mySimpleState.goalDirection < 5.71f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 }
                             }
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                     }
                 }
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Left" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                     if( mySimpleState.shipDirection < 4.91f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.shipDirection < 5.16f ) { 
                             if( mySimpleState.mySlices[9].targetDistance < 243.52f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                             else { 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                     if( mySimpleState.shipSpeed < 2.13f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                 }
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[16].targetDistance < 88.69f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                 }
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                         }
                         else { 
                             if( mySimpleState.goalDirection < 0.81f )      return eAction::parser.stringToEnum( "Right" ); 
                             else      return eAction::parser.stringToEnum( "Left" ); 
                         }
                     }
                 }
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                     if( mySimpleState.mySlices[10].targetDistance < 193.26f ) { 
                         if( mySimpleState.mySlices[9].targetDistance < 143.55f )      return eAction::parser.stringToEnum( "Right" ); 
                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                     }
                     else { 
                         if( mySimpleState.mySlices[13].targetDistance < 123.67f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                 }
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                         if( mySimpleState.mySlices[0].targetDistance < 100.16f )      return eAction::parser.stringToEnum( "Right" ); 
                         else { 
                             if( mySimpleState.shipDirection < 3.89f )      return eAction::parser.stringToEnum( "Left" ); 
                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                     }
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.goalDistance < 49.9f )      return eAction::parser.stringToEnum( "Left" ); 
                             else { 
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             }
                         }
                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                             if( mySimpleState.mySlices[9].targetDistance < 198.12f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                             else { 
                                 if( mySimpleState.mySlices[17].targetDistance < 84.86f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                 else { 
                                     if( mySimpleState.mySlices[17].targetDistance < 90 )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     else      return eAction::parser.stringToEnum( "Left" ); 
                                 }
                             }
                         }
                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                         if( mySimpleState.mySlices[0].targetDistance < 105.2f ) { 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[3].targetDistance < 148.22f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 else { 
                                     if( mySimpleState.shipSpeed < 0.7f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                     else { 
                                         if( mySimpleState.mySlices[6].targetDistance < 195.47f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     }
                                 }
                             }
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                         else { 
                             if( mySimpleState.shipDirection < 1.65f ) { 
                                 if( mySimpleState.mySlices[0].targetDistance < 110.04f ) { 
                                     if( mySimpleState.shipSpeed < 0.58f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                 }
                                 else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                             }
                             else { 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Right" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[3].targetDistance < 144.31f )      return eAction::parser.stringToEnum( "Right" ); 
                                     else { 
                                         if( mySimpleState.mySlices[5].targetDistance < 204.8f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     }
                                 }
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                         }
                     }
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                             if( mySimpleState.goalDirection < 6.08f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                         }
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.shipSpeed < 1.53f )      return eAction::parser.stringToEnum( "Left" ); 
                                 else { 
                                     if( mySimpleState.mySlices[0].targetDistance < 130.41f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     else      return eAction::parser.stringToEnum( "Left" ); 
                                 }
                             }
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Left" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                             if( mySimpleState.mySlices[14].targetDistance < 150.93f )      return eAction::parser.stringToEnum( "Right" ); 
                             else { 
                                 if( mySimpleState.shipSpeed < 1.72f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                         }
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                 if( mySimpleState.mySlices[12].targetDistance < 182.05f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else { 
                                     if( mySimpleState.shipDirection < 5.44f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     else      return eAction::parser.stringToEnum( "Left" ); 
                                 }
                             }
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                 if( mySimpleState.shipSpeed < 2.34f ) { 
                                     if( mySimpleState.canShoot  ==  true ) { 
                                         if( mySimpleState.goalDirection < 3.15f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         else      return eAction::parser.stringToEnum( "Left" ); 
                                     }
                                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 }
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.shipDirection < 0.09f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else      return eAction::parser.stringToEnum( "Right" ); 
                                 }
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                     if( mySimpleState.shipDirection < 0.89f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 }
                             }
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                 if( mySimpleState.goalDirection < 4.66f ) { 
                                     if( mySimpleState.goalDirection < 2.51f )      return eAction::parser.stringToEnum( "Right" ); 
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                                 else { 
                                     if( mySimpleState.shipDirection < 0.51f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     else { 
                                         if( mySimpleState.shipSpeed < 2.69f ) { 
                                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Left" ); 
                                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                                         }
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                 }
                             }
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                     if( mySimpleState.shipSpeed < 1.33f ) { 
                                         if( mySimpleState.shipSpeed < 1.15f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         else { 
                                             if( mySimpleState.mySlices[8].targetDistance < 90.25f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                             else { 
                                                 if( mySimpleState.mySlices[6].targetDistance < 75.23f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                 else      return eAction::parser.stringToEnum( "Left" ); 
                                             }
                                         }
                                     }
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                         if( mySimpleState.mySlices[10].targetDistance < 167.56f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     }
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.shipDirection < 5.46f ) { 
                                             if( mySimpleState.goalDistance < 86.02f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         }
                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     }
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                     if( mySimpleState.mySlices[16].targetDistance < 188.28f ) { 
                                         if( mySimpleState.goalDirection < 1.72f ) { 
                                             if( mySimpleState.shipSpeed < 2.48f )      return eAction::parser.stringToEnum( "Up" ); 
                                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         }
                                         else      return eAction::parser.stringToEnum( "Left" ); 
                                     }
                                     else { 
                                         if( mySimpleState.mySlices[9].targetDistance < 233.69f )      return eAction::parser.stringToEnum( "Right" ); 
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                 }
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                         if( mySimpleState.mySlices[9].targetDistance < 90.44f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else { 
                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                 if( mySimpleState.mySlices[5].targetDistance < 150.94f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                             }
                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         }
                                     }
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                                 if( mySimpleState.goalDirection < 1.91f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             }
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                 if( mySimpleState.goalDirection < 0.91f )      return eAction::parser.stringToEnum( "Left" ); 
                                                 else      return eAction::parser.stringToEnum( "Right" ); 
                                             }
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         }
                                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                             if( mySimpleState.mySlices[13].targetDistance < 222.96f )      return eAction::parser.stringToEnum( "Up" ); 
                                             else { 
                                                 if( mySimpleState.mySlices[6].targetDistance < 145.62f )      return eAction::parser.stringToEnum( "Right" ); 
                                                 else { 
                                                     if( mySimpleState.mySlices[3].targetDistance < 254.97f )      return eAction::parser.stringToEnum( "Right" ); 
                                                     else { 
                                                         if( mySimpleState.mySlices[18].targetDistance < 219.74f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                         else      return eAction::parser.stringToEnum( "Right" ); 
                                                     }
                                                 }
                                             }
                                         }
                                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                             if( mySimpleState.shipSpeed < 1.79f )      return eAction::parser.stringToEnum( "Left" ); 
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                             if( mySimpleState.mySlices[3].targetDistance < 148.12f ) { 
                                                 if( mySimpleState.mySlices[8].targetDistance < 223.56f )      return eAction::parser.stringToEnum( "Left" ); 
                                                 else { 
                                                     if( mySimpleState.goalDistance < 136.85f )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                 }
                                             }
                                             else { 
                                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                                     if( mySimpleState.shipDirection < 0.73f ) { 
                                                         if( mySimpleState.mySlices[12].targetDistance < 192.25f )      return eAction::parser.stringToEnum( "Up" ); 
                                                         else      return eAction::parser.stringToEnum( "Left" ); 
                                                     }
                                                     else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                                 }
                                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                     if( mySimpleState.mySlices[5].targetDistance < 131.84f )      return eAction::parser.stringToEnum( "Right" ); 
                                                     else { 
                                                         if( mySimpleState.mySlices[17].targetDistance < 224.91f ) { 
                                                             if( mySimpleState.shipDirection < 0.41f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                                         }
                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                     }
                                                 }
                                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                                             }
                                         }
                                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                         if( mySimpleState.shipDirection < 5.47f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         else      return eAction::parser.stringToEnum( "Left" ); 
                                     }
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                 if( mySimpleState.mySlices[6].targetDistance < 229.82f ) { 
                                     if( mySimpleState.shipSpeed < 0.56f ) { 
                                         if( mySimpleState.shipDirection < 0.89f ) { 
                                             if( mySimpleState.mySlices[3].targetDistance < 134.27f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     }
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                                 else { 
                                     if( mySimpleState.shipSpeed < 0.02f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     else { 
                                         if( mySimpleState.mySlices[16].targetDistance < 31.87f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     }
                                 }
                             }
                         }
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                             if( mySimpleState.shipSpeed < 1.09f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else { 
                                 if( mySimpleState.mySlices[5].targetDistance < 165.6f ) { 
                                     if( mySimpleState.shipSpeed < 2.46f )      return eAction::parser.stringToEnum( "Left" ); 
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                                 else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                             }
                         }
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                 if( mySimpleState.mySlices[14].targetDistance < 189.05f ) { 
                                     if( mySimpleState.shipSpeed < 2.24f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                     else { 
                                         if( mySimpleState.shipSpeed < 2.25f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                         else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                     }
                                 }
                                 else { 
                                     if( mySimpleState.mySlices[9].targetDistance < 206.49f )      return eAction::parser.stringToEnum( "Left" ); 
                                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 }
                             }
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[5].targetDistance < 160.63f ) { 
                                     if( mySimpleState.goalDistance < 152.36f )      return eAction::parser.stringToEnum( "Left" ); 
                                     else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                                 }
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                         if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                             if( mySimpleState.shipSpeed < 1.58f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else      return eAction::parser.stringToEnum( "Down" ); 
                         }
                     }
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                         if( mySimpleState.goalDirection < 0.91f )      return eAction::parser.stringToEnum( "Left" ); 
                         else      return eAction::parser.stringToEnum( "Right" ); 
                     }
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                         if( mySimpleState.shipSpeed < 1.03f )      return eAction::parser.stringToEnum( "Left" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                         if( mySimpleState.goalDirection < 0.63f ) { 
                             if( mySimpleState.mySlices[5].targetDistance < 220.92f )      return eAction::parser.stringToEnum( "Up" ); 
                             else { 
                                 if( mySimpleState.shipDirection < 6 )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                             }
                         }
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                 }
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                     if( mySimpleState.mySlices[8].targetDistance < 115.83f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Right" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                 }
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                     if( mySimpleState.mySlices[13].targetDistance < 173.78f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else { 
                         if( mySimpleState.goalDistance < 218.4f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                     }
                 }
                 if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                     if( mySimpleState.mySlices[12].targetDistance < 160.74f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else { 
                         if( mySimpleState.mySlices[10].targetDistance < 228.96f ) { 
                             if( mySimpleState.mySlices[0].targetDistance < 194.79f )      return eAction::parser.stringToEnum( "Down-Left" ); 
                             else      return eAction::parser.stringToEnum( "Right" ); 
                         }
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                 }
             }
             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                 if( mySimpleState.canShoot  ==  true ) { 
                     if( mySimpleState.mySlices[1].targetDistance < 186.96f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else { 
                         if( mySimpleState.mySlices[3].targetDistance < 230.37f ) { 
                             if( mySimpleState.shipSpeed < 1.71f )      return eAction::parser.stringToEnum( "Right" ); 
                             else      return eAction::parser.stringToEnum( "Left" ); 
                         }
                         else      return eAction::parser.stringToEnum( "Right" ); 
                     }
                 }
                 else { 
                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                         if( mySimpleState.mySlices[6].targetDistance < 136.95f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else { 
                             if( mySimpleState.shipSpeed < 0.72f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                             else { 
                                 if( mySimpleState.mySlices[14].targetDistance < 136.51f ) { 
                                     if( mySimpleState.mySlices[0].targetDistance < 212.89f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                     else { 
                                         if( mySimpleState.mySlices[0].targetDistance < 213.59f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                     }
                                 }
                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                             }
                         }
                     }
                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
             }
             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                 if( mySimpleState.mySlices[5].targetDistance < 192.7f ) { 
                     if( mySimpleState.mySlices[7].targetDistance < 186.79f )      return eAction::parser.stringToEnum( "Right" ); 
                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                 }
                 else { 
                     if( mySimpleState.mySlices[12].targetDistance < 230.15f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     else { 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                             if( mySimpleState.mySlices[19].targetDistance < 252.03f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                         }
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                 }
             }
             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                 if( mySimpleState.goalDistance < 53.21f )      return eAction::parser.stringToEnum( "Down-Left" ); 
                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
             }
         }
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                     if( mySimpleState.mySlices[18].targetDistance < 226.02f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.canShoot  ==  true ) { 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Right" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     else      return eAction::parser.stringToEnum( "Left" ); 
                 }
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Right" ); 
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Left" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Right" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[7].targetDistance < 250.94f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Right" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                 if( mySimpleState.mySlices[14].targetDistance < 167.63f )      return eAction::parser.stringToEnum( "Left" ); 
                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
             }
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                 if( mySimpleState.goalDistance < 157.64f )      return eAction::parser.stringToEnum( "Up" ); 
                 else { 
                     if( mySimpleState.mySlices[17].targetDistance < 83.64f )      return eAction::parser.stringToEnum( "Left" ); 
                     else { 
                         if( mySimpleState.mySlices[13].targetDistance < 235.48f )      return eAction::parser.stringToEnum( "Right" ); 
                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                     }
                 }
             }
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.invincible  ==  true ) { 
                         if( mySimpleState.goalDistance < 94.08f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Right" ); 
                     }
                     else { 
                         if( mySimpleState.shipSpeed < 0.02f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else { 
                             if( mySimpleState.mySlices[17].targetDistance < 168.95f ) { 
                                 if( mySimpleState.mySlices[17].targetDistance < 45 )      return eAction::parser.stringToEnum( "Up" ); 
                                 else { 
                                     if( mySimpleState.goalDirection < 0.65f )      return eAction::parser.stringToEnum( "Right" ); 
                                     else      return eAction::parser.stringToEnum( "Left" ); 
                                 }
                             }
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                     }
                 }
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
     }
     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Left" ); 
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
             if( mySimpleState.mySlices[1].targetDistance < 57.25f ) { 
                 if( mySimpleState.canShoot  ==  true )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
             }
             else      return eAction::parser.stringToEnum( "NoDirection" ); 
         }
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     }
     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
         if( mySimpleState.mySlices[17].targetDistance < 145.04f )      return eAction::parser.stringToEnum( "NoDirection" ); 
         else { 
             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                 if( mySimpleState.goalDirection < 4.14f ) { 
                     if( mySimpleState.goalDirection < 4.04f ) { 
                         if( mySimpleState.shipSpeed < 1.13f ) { 
                             if( mySimpleState.goalDirection < 3.99f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                         }
                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                     }
                     else { 
                         if( mySimpleState.mySlices[1].targetDistance < 186.18f ) { 
                             if( mySimpleState.mySlices[18].targetDistance < 161.41f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                         else      return eAction::parser.stringToEnum( "Fire-Up" ); 
                     }
                 }
                 else { 
                     if( mySimpleState.goalDistance < 112.85f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.mySlices[1].targetDistance < 215.29f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Left" ); 
                     }
                 }
             }
             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                     if( mySimpleState.mySlices[8].targetDistance < 127.25f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                     else { 
                         if( mySimpleState.canShoot  ==  true )      return eAction::parser.stringToEnum( "Up" ); 
                         else { 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                     }
                 }
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                     if( mySimpleState.mySlices[15].targetDistance < 158.4f ) { 
                         if( mySimpleState.goalDirection < 3.97f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                     }
                     else { 
                         if( mySimpleState.shipSpeed < 1.24f )      return eAction::parser.stringToEnum( "Fire-Up" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                 }
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                             if( mySimpleState.mySlices[6].targetDistance < 68.98f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else      return eAction::parser.stringToEnum( "Up" ); 
                         }
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Left" ); 
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
     }
     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Left" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.goalDistance < 56.13f )      return eAction::parser.stringToEnum( "Left" ); 
                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
             }
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                 if( mySimpleState.mySlices[17].targetDistance < 24.89f ) { 
                     if( mySimpleState.shipSpeed < 1.76f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
                 else      return eAction::parser.stringToEnum( "Up" ); 
             }
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.shipSpeed < 0.8f )      return eAction::parser.stringToEnum( "Up" ); 
                 else { 
                     if( mySimpleState.mySlices[6].targetDistance < 171.6f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else { 
                         if( mySimpleState.mySlices[10].targetDistance < 157.56f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else { 
                             if( mySimpleState.shipSpeed < 1.96f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                     }
                 }
             }
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                     if( mySimpleState.shipDirection < 2.34f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Right" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[1].targetDistance < 141.89f )      return eAction::parser.stringToEnum( "Up" ); 
                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
             }
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                 if( mySimpleState.mySlices[5].targetDistance < 175.1f ) { 
                     if( mySimpleState.mySlices[1].targetDistance < 67.11f )      return eAction::parser.stringToEnum( "Left" ); 
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
                 else      return eAction::parser.stringToEnum( "Up" ); 
             }
         }
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     }
 }
 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
     if( mySimpleState.shipDirection < 1.22f ) { 
         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
             if( mySimpleState.canShoot  ==  true ) { 
                 if( mySimpleState.goalDirection < 3.94f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 else      return eAction::parser.stringToEnum( "Right" ); 
             }
             else { 
                 if( mySimpleState.mySlices[8].targetDistance < 206.75f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                 else { 
                     if( mySimpleState.mySlices[16].targetDistance < 220.98f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                 }
             }
         }
         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                 if( mySimpleState.mySlices[5].targetDistance < 199.76f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 else { 
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                         if( mySimpleState.goalDirection < 4.39f ) { 
                             if( mySimpleState.mySlices[16].targetDistance < 45.65f ) { 
                                 if( mySimpleState.mySlices[2].targetDistance < 187.31f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                             }
                             else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                         }
                         else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                     }
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[12].targetDistance < 115.64f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else { 
                             if( mySimpleState.mySlices[2].targetDistance < 171.4f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                             else { 
                                 if( mySimpleState.mySlices[6].targetDistance < 223.96f ) { 
                                     if( mySimpleState.mySlices[4].targetDistance < 203.99f ) { 
                                         if( mySimpleState.mySlices[2].targetDistance < 176.37f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         else { 
                                             if( mySimpleState.mySlices[4].targetDistance < 202.61f ) { 
                                                 if( mySimpleState.mySlices[11].targetDistance < 129.32f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                 else { 
                                                     if( mySimpleState.mySlices[16].targetDistance < 48.9f ) { 
                                                         if( mySimpleState.mySlices[2].targetDistance < 183.83f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                         else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                                     }
                                                     else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                                 }
                                             }
                                             else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                         }
                                     }
                                     else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                 }
                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                             }
                         }
                     }
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
             }
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
         }
         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     }
     else { 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                 if( mySimpleState.mySlices[6].targetDistance < 227.7f )      return eAction::parser.stringToEnum( "Down" ); 
                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
             }
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[6].targetDistance < 185.87f )      return eAction::parser.stringToEnum( "Right" ); 
                 else { 
                     if( mySimpleState.mySlices[9].targetDistance < 198.14f )      return eAction::parser.stringToEnum( "Right" ); 
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
             }
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
             if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
     }
 }
 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
     if( mySimpleState.goalDirection < 5.25f ) { 
         if( mySimpleState.mySlices[6].targetDistance < 232.96f )      return eAction::parser.stringToEnum( "NoDirection" ); 
         else { 
             if( mySimpleState.mySlices[2].targetDistance < 108.44f )      return eAction::parser.stringToEnum( "Right" ); 
             else      return eAction::parser.stringToEnum( "Left" ); 
         }
     }
     else { 
         if( mySimpleState.mySlices[13].targetDistance < 96.66f ) { 
             if( mySimpleState.mySlices[11].targetDistance < 209.4f )      return eAction::parser.stringToEnum( "NoDirection" ); 
             else { 
                 if( mySimpleState.mySlices[16].targetDistance < 180.04f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                 else { 
                     if( mySimpleState.mySlices[11].targetDistance < 212.97f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                     else { 
                         if( mySimpleState.mySlices[15].targetDistance < 102.59f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else { 
                             if( mySimpleState.mySlices[15].targetDistance < 103.21f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                             else { 
                                 if( mySimpleState.mySlices[19].targetDistance < 132.96f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                             }
                         }
                     }
                 }
             }
         }
         else { 
             if( mySimpleState.shipSpeed < 1.06f )      return eAction::parser.stringToEnum( "NoDirection" ); 
             else      return eAction::parser.stringToEnum( "Left" ); 
         }
     }
 }
 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
     if( mySimpleState.mySlices[19].targetDistance < 191.85f )      return eAction::parser.stringToEnum( "Up" ); 
     else { 
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[14].targetDistance < 153.52f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
             }
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
             if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                 if( mySimpleState.mySlices[8].targetDistance < 195.39f ) { 
                     if( mySimpleState.mySlices[11].targetDistance < 145.72f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
             }
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[10].targetDistance < 147.62f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
             }
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     }
 }


}
