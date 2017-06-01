//treeType = RandomTree

#include "AI.h"
#include "SimpleState.h"
#include "InputDirection.h"
#include "RelativeDirection.h"



//In AI.h: eAction::ActionEnum Andrew( SimpleState& mySimpleState ); 

eAction::ActionEnum AI::Andrew( SimpleState& mySimpleState ) {
 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
         if( mySimpleState.mySlices[14].targetDistance < 221.16f )      return eAction::parser.stringToEnum( "NoDirection" ); 
         else { 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.goalDirection < 2.29f )      return eAction::parser.stringToEnum( "Up" ); 
                 else { 
                     if( mySimpleState.shipSpeed < 1.18f )      return eAction::parser.stringToEnum( "Left" ); 
                     else { 
                         if( mySimpleState.shipSpeed < 2.52f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                 }
             }
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
         }
     }
     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
 }
 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
     if( mySimpleState.goalDirection < 3.46f ) { 
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[4].targetDistance < 233.37f )      return eAction::parser.stringToEnum( "Up" ); 
             else { 
                 if( mySimpleState.mySlices[16].targetDistance < 227.43f )      return eAction::parser.stringToEnum( "Left" ); 
                 else { 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
             }
         }
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
             if( mySimpleState.mySlices[13].targetDistance < 120.76f ) { 
                 if( mySimpleState.shipDirection < 6.25f )      return eAction::parser.stringToEnum( "Down" ); 
                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
             }
             else      return eAction::parser.stringToEnum( "NoDirection" ); 
         }
     }
     else { 
         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[11].targetDistance < 189.14f ) { 
                 if( mySimpleState.mySlices[1].targetDistance < 162.83f )      return eAction::parser.stringToEnum( "Up" ); 
                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
             }
             else      return eAction::parser.stringToEnum( "Up" ); 
         }
         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     }
 }
 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
         if( mySimpleState.mySlices[4].targetDistance < 202.15f ) { 
             if( mySimpleState.mySlices[14].targetDistance < 255.74f )      return eAction::parser.stringToEnum( "NoDirection" ); 
             else { 
                 if( mySimpleState.mySlices[19].targetDistance < 204.91f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 else      return eAction::parser.stringToEnum( "Right" ); 
             }
         }
         else { 
             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                 if( mySimpleState.goalDistance < 243.49f )      return eAction::parser.stringToEnum( "Left" ); 
                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
             }
             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                 if( mySimpleState.shipDirection < 1.89f ) { 
                     if( mySimpleState.mySlices[3].targetDistance < 229.38f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.mySlices[5].targetDistance < 239.61f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                 }
                 else { 
                     if( mySimpleState.goalDistance < 103.87f ) { 
                         if( mySimpleState.goalDistance < 95.88f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
             }
             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.shipSpeed < 1.55f ) { 
                     if( mySimpleState.shipSpeed < 0 ) { 
                         if( mySimpleState.goalDistance < 87.6f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Left" ); 
                     }
                     else      return eAction::parser.stringToEnum( "Left" ); 
                 }
                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
             }
             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
     }
     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
         if( mySimpleState.mySlices[10].targetDistance < 158.45f )      return eAction::parser.stringToEnum( "Up" ); 
         else { 
             if( mySimpleState.canShoot  ==  true )      return eAction::parser.stringToEnum( "NoDirection" ); 
             else { 
                 if( mySimpleState.mySlices[12].targetDistance < 73.54f ) { 
                     if( mySimpleState.mySlices[6].targetDistance < 178.11f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else { 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                             if( mySimpleState.mySlices[6].targetDistance < 186.12f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                             else { 
                                 if( mySimpleState.mySlices[0].targetDistance < 92.96f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 else { 
                                     if( mySimpleState.mySlices[6].targetDistance < 205.25f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                     else { 
                                         if( mySimpleState.mySlices[0].targetDistance < 103.66f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                     }
                                 }
                             }
                         }
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                 }
                 else { 
                     if( mySimpleState.mySlices[0].targetDistance < 115.98f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else      return eAction::parser.stringToEnum( "Right" ); 
                 }
             }
         }
     }
     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
 }
 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
     if( mySimpleState.mySlices[8].targetDistance < 247.53f ) { 
         if( mySimpleState.shipDirection < 3.36f )      return eAction::parser.stringToEnum( "Up-Left" ); 
         else      return eAction::parser.stringToEnum( "Left" ); 
     }
     else { 
         if( mySimpleState.mySlices[9].targetDistance < 155.9f )      return eAction::parser.stringToEnum( "Up-Left" ); 
         else      return eAction::parser.stringToEnum( "NoDirection" ); 
     }
 }
 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
         if( mySimpleState.shipSpeed < 0.11f ) { 
             if( mySimpleState.canShoot  ==  true ) { 
                 if( mySimpleState.mySlices[14].targetDistance < 230.88f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 else      return eAction::parser.stringToEnum( "Right" ); 
             }
             else { 
                 if( mySimpleState.mySlices[8].targetDistance < 183.03f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
             }
         }
         else { 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.shipSpeed < 1.06f )      return eAction::parser.stringToEnum( "Left" ); 
                 else { 
                     if( mySimpleState.shipSpeed < 2.66f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                 }
             }
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
     }
     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
         if( mySimpleState.mySlices[10].targetDistance < 251.28f )      return eAction::parser.stringToEnum( "NoDirection" ); 
         else      return eAction::parser.stringToEnum( "Right" ); 
     }
     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
         if( mySimpleState.mySlices[17].targetDistance < 159.28f )      return eAction::parser.stringToEnum( "Up" ); 
         else      return eAction::parser.stringToEnum( "Up-Left" ); 
     }
 }
 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
         if( mySimpleState.goalDirection < 1.84f ) { 
             if( mySimpleState.goalDistance < 92.97f )      return eAction::parser.stringToEnum( "Left" ); 
             else { 
                 if( mySimpleState.mySlices[15].targetDistance < 187.18f )      return eAction::parser.stringToEnum( "Right" ); 
                 else      return eAction::parser.stringToEnum( "Left" ); 
             }
         }
         else { 
             if( mySimpleState.shipDirection < 4.73f ) { 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.goalDirection < 2.18f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                 }
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
             }
             else      return eAction::parser.stringToEnum( "Up-Left" ); 
         }
     }
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
         if( mySimpleState.shipSpeed < 2.75f ) { 
             if( mySimpleState.mySlices[7].targetDistance < 206.07f )      return eAction::parser.stringToEnum( "Up" ); 
             else      return eAction::parser.stringToEnum( "Left" ); 
         }
         else { 
             if( mySimpleState.goalDistance < 240 )      return eAction::parser.stringToEnum( "Up-Left" ); 
             else      return eAction::parser.stringToEnum( "Up-Right" ); 
         }
     }
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
         if( mySimpleState.shipSpeed < 0.17f ) { 
             if( mySimpleState.mySlices[1].targetDistance < 155.54f )      return eAction::parser.stringToEnum( "Left" ); 
             else      return eAction::parser.stringToEnum( "NoDirection" ); 
         }
         else { 
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
     }
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
         if( mySimpleState.canShoot  ==  true ) { 
             if( mySimpleState.goalDirection < 2.37f )      return eAction::parser.stringToEnum( "Left" ); 
             else { 
                 if( mySimpleState.shipDirection < 1.09f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
             }
         }
         else      return eAction::parser.stringToEnum( "Right" ); 
     }
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
         if( mySimpleState.mySlices[10].targetDistance < 191.89f ) { 
             if( mySimpleState.mySlices[12].targetDistance < 102.64f )      return eAction::parser.stringToEnum( "NoDirection" ); 
             else { 
                 if( mySimpleState.goalDistance < 81.08f ) { 
                     if( mySimpleState.goalDistance < 81 )      return eAction::parser.stringToEnum( "Left" ); 
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
                 else { 
                     if( mySimpleState.mySlices[10].targetDistance < 135.47f )      return eAction::parser.stringToEnum( "Left" ); 
                     else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                 }
             }
         }
         else { 
             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[9].targetDistance < 176.94f ) { 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                         if( mySimpleState.mySlices[0].targetDistance < 179.44f )      return eAction::parser.stringToEnum( "Left" ); 
                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                     }
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[15].targetDistance < 97.69f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Left" ); 
                     }
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 else { 
                     if( mySimpleState.mySlices[13].targetDistance < 146.93f ) { 
                         if( mySimpleState.mySlices[12].targetDistance < 222.26f ) { 
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                 if( mySimpleState.mySlices[16].targetDistance < 177.85f )      return eAction::parser.stringToEnum( "Left" ); 
                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                             }
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                         else { 
                             if( mySimpleState.shipSpeed < 2.24f ) { 
                                 if( mySimpleState.shipDirection < 5.27f ) { 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                                         if( mySimpleState.goalDirection < 5.74f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                         }
                     }
                     else { 
                         if( mySimpleState.mySlices[14].targetDistance < 74.52f )      return eAction::parser.stringToEnum( "Left" ); 
                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                     }
                 }
             }
             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                 if( mySimpleState.mySlices[8].targetDistance < 210.92f )      return eAction::parser.stringToEnum( "Up" ); 
                 else { 
                     if( mySimpleState.shipSpeed < 2.3f )      return eAction::parser.stringToEnum( "Up" ); 
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
             }
             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
     }
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
             if( mySimpleState.mySlices[9].targetDistance < 231.31f ) { 
                 if( mySimpleState.mySlices[15].targetDistance < 162.65f )      return eAction::parser.stringToEnum( "Up" ); 
                 else { 
                     if( mySimpleState.mySlices[10].targetDistance < 136.16f )      return eAction::parser.stringToEnum( "Left" ); 
                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                 }
             }
             else { 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[17].targetDistance < 223.82f ) { 
                         if( mySimpleState.shipSpeed < 0.21f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else { 
                             if( mySimpleState.mySlices[18].targetDistance < 185.65f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else      return eAction::parser.stringToEnum( "Left" ); 
                         }
                     }
                     else { 
                         if( mySimpleState.mySlices[12].targetDistance < 224.32f ) { 
                             if( mySimpleState.goalDirection < 1.42f )      return eAction::parser.stringToEnum( "Left" ); 
                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                         else      return eAction::parser.stringToEnum( "Right" ); 
                     }
                 }
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
         }
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
             if( mySimpleState.mySlices[4].targetDistance < 121.75f )      return eAction::parser.stringToEnum( "Up-Right" ); 
             else      return eAction::parser.stringToEnum( "Up-Left" ); 
         }
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
             if( mySimpleState.mySlices[12].targetDistance < 174.24f ) { 
                 if( mySimpleState.mySlices[1].targetDistance < 208.46f )      return eAction::parser.stringToEnum( "Down" ); 
                 else { 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.goalDistance < 121.96f ) { 
                             if( mySimpleState.mySlices[7].targetDistance < 160.89f )      return eAction::parser.stringToEnum( "Left" ); 
                             else { 
                                 if( mySimpleState.mySlices[6].targetDistance < 145.85f )      return eAction::parser.stringToEnum( "Left" ); 
                                 else { 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                             }
                         }
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
             }
             else { 
                 if( mySimpleState.shipSpeed < 0.88f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 else { 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                 }
             }
         }
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[3].targetDistance < 237.65f ) { 
                     if( mySimpleState.goalDistance < 93.9f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else { 
                         if( mySimpleState.mySlices[4].targetDistance < 221.99f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else      return eAction::parser.stringToEnum( "Left" ); 
                     }
                 }
                 else      return eAction::parser.stringToEnum( "Right" ); 
             }
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
             if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
             if( mySimpleState.mySlices[14].targetDistance < 239.12f ) { 
                 if( mySimpleState.shipDirection < 5.23f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 else { 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.goalDirection < 5.61f ) { 
                             if( mySimpleState.shipSpeed < 3.62f )      return eAction::parser.stringToEnum( "Up" ); 
                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                         }
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                 }
             }
             else { 
                 if( mySimpleState.mySlices[12].targetDistance < 99.05f ) { 
                     if( mySimpleState.mySlices[9].targetDistance < 110.71f )      return eAction::parser.stringToEnum( "Left" ); 
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
                 else { 
                     if( mySimpleState.mySlices[11].targetDistance < 176.06f )      return eAction::parser.stringToEnum( "Left" ); 
                     else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                 }
             }
         }
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[4].targetDistance < 178.83f ) { 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Left" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                     if( mySimpleState.mySlices[8].targetDistance < 169.24f ) { 
                         if( mySimpleState.shipSpeed < 1.84f )      return eAction::parser.stringToEnum( "Up" ); 
                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                     }
                     else { 
                         if( mySimpleState.mySlices[8].targetDistance < 178.51f ) { 
                             if( mySimpleState.mySlices[14].targetDistance < 165.35f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else { 
                                 if( mySimpleState.mySlices[9].targetDistance < 92.71f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                         }
                         else      return eAction::parser.stringToEnum( "Left" ); 
                     }
                 }
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.shipDirection < 0.85f ) { 
                         if( mySimpleState.mySlices[4].targetDistance < 114.38f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else { 
                             if( mySimpleState.mySlices[4].targetDistance < 173.14f )      return eAction::parser.stringToEnum( "Up" ); 
                             else { 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Right" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                         }
                     }
                     else { 
                         if( mySimpleState.shipDirection < 0.85f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else { 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.shipDirection < 6.22f ) { 
                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Left" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         }
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.goalDistance < 84.27f ) { 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Left" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         }
                                         else { 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Left" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Left" ); 
                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             }
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Left" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         }
                                     }
                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                 }
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                     }
                 }
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                     if( mySimpleState.mySlices[6].targetDistance < 164.96f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else      return eAction::parser.stringToEnum( "Right" ); 
                 }
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
             }
             else { 
                 if( mySimpleState.shipSpeed < 0 ) { 
                     if( mySimpleState.mySlices[16].targetDistance < 106.95f )      return eAction::parser.stringToEnum( "Left" ); 
                     else { 
                         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                             if( mySimpleState.mySlices[19].targetDistance < 166.5f ) { 
                                 if( mySimpleState.mySlices[0].targetDistance < 94.73f )      return eAction::parser.stringToEnum( "Left" ); 
                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                             }
                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                         }
                         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                             if( mySimpleState.shipDirection < 2.29f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else      return eAction::parser.stringToEnum( "Left" ); 
                         }
                         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                             if( mySimpleState.goalDirection < 4.5f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else { 
                                 if( mySimpleState.shipDirection < 3.16f )      return eAction::parser.stringToEnum( "Left" ); 
                                 else { 
                                     if( mySimpleState.mySlices[10].targetDistance < 185.9f )      return eAction::parser.stringToEnum( "Right" ); 
                                     else { 
                                         if( mySimpleState.mySlices[10].targetDistance < 241.35f )      return eAction::parser.stringToEnum( "Left" ); 
                                         else { 
                                             if( mySimpleState.mySlices[3].targetDistance < 192.69f )      return eAction::parser.stringToEnum( "Left" ); 
                                             else      return eAction::parser.stringToEnum( "Right" ); 
                                         }
                                     }
                                 }
                             }
                         }
                         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                     if( mySimpleState.mySlices[1].targetDistance < 112.85f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     else { 
                                         if( mySimpleState.canShoot  ==  true )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                     }
                                 }
                             }
                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                 if( mySimpleState.mySlices[3].targetDistance < 226.48f )      return eAction::parser.stringToEnum( "Left" ); 
                                 else { 
                                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[2].targetDistance < 186.38f ) { 
                                             if( mySimpleState.canShoot  ==  true ) { 
                                                 if( mySimpleState.mySlices[2].targetDistance < 183.56f )      return eAction::parser.stringToEnum( "Left" ); 
                                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                             }
                                             else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                         }
                                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     }
                                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                             }
                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                 if( mySimpleState.mySlices[6].targetDistance < 97.77f ) { 
                                     if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                     if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                         if( mySimpleState.canShoot  ==  true )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                     }
                                     if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 else { 
                                     if( mySimpleState.mySlices[2].targetDistance < 172.33f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     else      return eAction::parser.stringToEnum( "Left" ); 
                                 }
                             }
                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                         if( mySimpleState.mySlices[15].targetDistance < 115.26f )      return eAction::parser.stringToEnum( "Left" ); 
                                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     }
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[15].targetDistance < 89.91f ) { 
                                             if( mySimpleState.mySlices[6].targetDistance < 175.59f )      return eAction::parser.stringToEnum( "Left" ); 
                                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         }
                                         else { 
                                             if( mySimpleState.goalDirection < 1.75f )      return eAction::parser.stringToEnum( "Left" ); 
                                             else { 
                                                 if( mySimpleState.shipDirection < 5.74f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                 else { 
                                                     if( mySimpleState.mySlices[3].targetDistance < 226.27f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                     else { 
                                                         if( mySimpleState.mySlices[4].targetDistance < 185.7f )      return eAction::parser.stringToEnum( "Right" ); 
                                                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                     }
                                                 }
                                             }
                                         }
                                     }
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Left" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                             if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         }
                         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Left" ); 
                         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     }
                 }
                 else { 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                         if( mySimpleState.goalDirection < 0.58f ) { 
                             if( mySimpleState.shipSpeed < 3.27f ) { 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                         }
                         else { 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                 if( mySimpleState.shipSpeed < 2.44f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                     if( mySimpleState.shipDirection < 5.12f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[16].targetDistance < 162.4f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else { 
                                         if( mySimpleState.goalDirection < 2.09f )      return eAction::parser.stringToEnum( "Right" ); 
                                         else { 
                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Left" ); 
                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                 if( mySimpleState.goalDirection < 2.26f )      return eAction::parser.stringToEnum( "Right" ); 
                                                 else      return eAction::parser.stringToEnum( "Left" ); 
                                             }
                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         }
                                     }
                                 }
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                     }
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                         if( mySimpleState.goalDirection < 2.6f ) { 
                             if( mySimpleState.goalDistance < 246.34f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else      return eAction::parser.stringToEnum( "Left" ); 
                         }
                         else { 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                 if( mySimpleState.mySlices[15].targetDistance < 228.46f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.goalDirection < 5.01f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Right" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                     }
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.shipDirection < 3.4f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Right" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[5].targetDistance < 164.55f ) { 
                                 if( mySimpleState.mySlices[15].targetDistance < 205.92f )      return eAction::parser.stringToEnum( "Left" ); 
                                 else      return eAction::parser.stringToEnum( "Down-Left" ); 
                             }
                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                             if( mySimpleState.mySlices[10].targetDistance < 137.57f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else { 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                     if( mySimpleState.shipSpeed < 0.26f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 }
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                         }
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                 if( mySimpleState.goalDistance < 245.88f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
                             }
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[0].targetDistance < 129.64f )      return eAction::parser.stringToEnum( "Right" ); 
                                 else { 
                                     if( mySimpleState.shipSpeed < 1.36f )      return eAction::parser.stringToEnum( "Left" ); 
                                     else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 }
                             }
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                 if( mySimpleState.shipSpeed < 2.85f ) { 
                                     if( mySimpleState.goalDistance < 224.15f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                             if( mySimpleState.mySlices[11].targetDistance < 235.57f ) { 
                                 if( mySimpleState.mySlices[0].targetDistance < 202.56f )      return eAction::parser.stringToEnum( "Right" ); 
                                 else { 
                                     if( mySimpleState.mySlices[19].targetDistance < 202.73f )      return eAction::parser.stringToEnum( "Right" ); 
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                             }
                             else { 
                                 if( mySimpleState.goalDirection < 3.35f ) { 
                                     if( mySimpleState.mySlices[16].targetDistance < 255.51f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                 }
                                 else { 
                                     if( mySimpleState.shipDirection < 5.48f ) { 
                                         if( mySimpleState.mySlices[18].targetDistance < 255.47f )      return eAction::parser.stringToEnum( "Right" ); 
                                         else { 
                                             if( mySimpleState.mySlices[2].targetDistance < 168.46f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                             else      return eAction::parser.stringToEnum( "Left" ); 
                                         }
                                     }
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                             }
                         }
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                             if( mySimpleState.shipSpeed < 0.85f )      return eAction::parser.stringToEnum( "Left" ); 
                             else { 
                                 if( mySimpleState.goalDistance < 176.28f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                             }
                         }
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                             if( mySimpleState.mySlices[19].targetDistance < 166.07f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else { 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[2].targetDistance < 180.55f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     else      return eAction::parser.stringToEnum( "Right" ); 
                                 }
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                             }
                         }
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                             if( mySimpleState.shipSpeed < 0.98f ) { 
                                 if( mySimpleState.mySlices[5].targetDistance < 198.81f ) { 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.goalDistance < 84.5f )      return eAction::parser.stringToEnum( "Left" ); 
                                         else      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     }
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                         if( mySimpleState.shipSpeed < 0.41f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         else      return eAction::parser.stringToEnum( "Right" ); 
                                     }
                                 }
                                 else { 
                                     if( mySimpleState.mySlices[19].targetDistance < 196.17f ) { 
                                         if( mySimpleState.mySlices[8].targetDistance < 92.72f )      return eAction::parser.stringToEnum( "Left" ); 
                                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     }
                                     else { 
                                         if( mySimpleState.shipDirection < 0 ) { 
                                             if( mySimpleState.goalDirection < 2.8f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                             else      return eAction::parser.stringToEnum( "Down" ); 
                                         }
                                         else      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                 }
                             }
                             else { 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[3].targetDistance < 218.71f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else      return eAction::parser.stringToEnum( "Down-Left" ); 
                                 }
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                         }
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.shipSpeed < 1.95f ) { 
                                 if( mySimpleState.shipDirection < 6.12f ) { 
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                         if( mySimpleState.mySlices[19].targetDistance < 200.44f )      return eAction::parser.stringToEnum( "Left" ); 
                                         else      return eAction::parser.stringToEnum( "Right" ); 
                                     }
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                         if( mySimpleState.goalDistance < 282.52f )      return eAction::parser.stringToEnum( "Right" ); 
                                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                     }
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                         if( mySimpleState.shipSpeed < 0.02f )      return eAction::parser.stringToEnum( "Right" ); 
                                         else { 
                                             if( mySimpleState.mySlices[10].targetDistance < 240.15f )      return eAction::parser.stringToEnum( "Up" ); 
                                             else { 
                                                 if( mySimpleState.goalDirection < 3.19f )      return eAction::parser.stringToEnum( "Right" ); 
                                                 else      return eAction::parser.stringToEnum( "Up" ); 
                                             }
                                         }
                                     }
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                         if( mySimpleState.mySlices[14].targetDistance < 184.96f )      return eAction::parser.stringToEnum( "Down-Left" ); 
                                         else      return eAction::parser.stringToEnum( "Left" ); 
                                     }
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[10].targetDistance < 72.03f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else { 
                                             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Left" ); 
                                             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                                 if( mySimpleState.mySlices[5].targetDistance < 237.24f )      return eAction::parser.stringToEnum( "Left" ); 
                                                 else { 
                                                     if( mySimpleState.goalDistance < 185.98f )      return eAction::parser.stringToEnum( "Up" ); 
                                                     else { 
                                                         if( mySimpleState.mySlices[4].targetDistance < 238.16f )      return eAction::parser.stringToEnum( "Right" ); 
                                                         else { 
                                                             if( mySimpleState.shipDirection < 5.73f )      return eAction::parser.stringToEnum( "Right" ); 
                                                             else { 
                                                                 if( mySimpleState.goalDirection < 6.01f )      return eAction::parser.stringToEnum( "Left" ); 
                                                                 else      return eAction::parser.stringToEnum( "Right" ); 
                                                             }
                                                         }
                                                     }
                                                 }
                                             }
                                             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                                                 if( mySimpleState.mySlices[12].targetDistance < 240.21f )      return eAction::parser.stringToEnum( "Left" ); 
                                                 else { 
                                                     if( mySimpleState.shipSpeed < 1.8f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                     else      return eAction::parser.stringToEnum( "Left" ); 
                                                 }
                                             }
                                             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                                 if( mySimpleState.canShoot  ==  true )      return eAction::parser.stringToEnum( "Up" ); 
                                                 else      return eAction::parser.stringToEnum( "Left" ); 
                                             }
                                             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                 if( mySimpleState.invincible  ==  true ) { 
                                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                                         if( mySimpleState.mySlices[16].targetDistance < 215.32f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                     }
                                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 }
                                                 else { 
                                                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                                         if( mySimpleState.mySlices[0].targetDistance < 129.76f )      return eAction::parser.stringToEnum( "Right" ); 
                                                         else      return eAction::parser.stringToEnum( "Left" ); 
                                                     }
                                                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                                         if( mySimpleState.mySlices[14].targetDistance < 73.17f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                         else { 
                                                             if( mySimpleState.shipDirection < 2.02f )      return eAction::parser.stringToEnum( "Up" ); 
                                                             else      return eAction::parser.stringToEnum( "Left" ); 
                                                         }
                                                     }
                                                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                                         if( mySimpleState.goalDirection < 1.42f ) { 
                                                             if( mySimpleState.mySlices[14].targetDistance < 219.61f )      return eAction::parser.stringToEnum( "Down-Left" ); 
                                                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                         }
                                                         else      return eAction::parser.stringToEnum( "Down" ); 
                                                     }
                                                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down-Left" ); 
                                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
                                                             if( mySimpleState.goalDirection < 3.46f )      return eAction::parser.stringToEnum( "Right" ); 
                                                             else      return eAction::parser.stringToEnum( "Left" ); 
                                                         }
                                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                         if( mySimpleState.shipSpeed < 0.9f ) { 
                                                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                                                                 if( mySimpleState.mySlices[19].targetDistance < 206.93f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                                                 else { 
                                                                                     if( mySimpleState.shipDirection < 3 )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                                                     else      return eAction::parser.stringToEnum( "Right" ); 
                                                                                 }
                                                                             }
                                                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                                                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                                                                 if( mySimpleState.canShoot  ==  true ) { 
                                                                                     if( mySimpleState.shipSpeed < 0.8f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                                                     else { 
                                                                                         if( mySimpleState.shipSpeed < 0.8f )      return eAction::parser.stringToEnum( "Right" ); 
                                                                                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                                                     }
                                                                                 }
                                                                                 else { 
                                                                                     if( mySimpleState.mySlices[3].targetDistance < 255.93f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                                                     else { 
                                                                                         if( mySimpleState.goalDirection < 2.58f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                                                                         else { 
                                                                                             if( mySimpleState.shipSpeed < 0.71f ) { 
                                                                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                                                                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                             }
                                                                                             else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                                                                         }
                                                                                     }
                                                                                 }
                                                                             }
                                                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                             if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                                                                 if( mySimpleState.mySlices[1].targetDistance < 147.89f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                                                 else      return eAction::parser.stringToEnum( "Right" ); 
                                                                             }
                                                                         }
                                                                         else { 
                                                                             if( mySimpleState.mySlices[1].targetDistance < 169.1f )      return eAction::parser.stringToEnum( "Left" ); 
                                                                             else { 
                                                                                 if( mySimpleState.shipSpeed < 0.93f )      return eAction::parser.stringToEnum( "Left" ); 
                                                                                 else { 
                                                                                     if( mySimpleState.canShoot  ==  true )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                                                     else { 
                                                                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                                                                             if( mySimpleState.mySlices[5].targetDistance < 166.46f ) { 
                                                                                                 if( mySimpleState.goalDistance < 256.3f )      return eAction::parser.stringToEnum( "Up" ); 
                                                                                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                                                             }
                                                                                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                                                         }
                                                                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                         if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                                     }
                                                                                 }
                                                                             }
                                                                         }
                                                                     }
                                                                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down-Left" ); 
                                                                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                                                                 }
                                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                                             }
                                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Right" ); 
                                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                                                         }
                                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Right" ); 
                                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     }
                                                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                                         if( mySimpleState.mySlices[17].targetDistance < 92.73f )      return eAction::parser.stringToEnum( "Left" ); 
                                                         else      return eAction::parser.stringToEnum( "Right" ); 
                                                     }
                                                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down-Left" ); 
                                                     if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                                         if( mySimpleState.mySlices[8].targetDistance < 214.12f ) { 
                                                             if( mySimpleState.goalDirection < 0.32f )      return eAction::parser.stringToEnum( "Right" ); 
                                                             else      return eAction::parser.stringToEnum( "Left" ); 
                                                         }
                                                         else { 
                                                             if( mySimpleState.mySlices[0].targetDistance < 101.59f ) { 
                                                                 if( mySimpleState.shipSpeed < 1.6f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                                                 else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                             }
                                                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                         }
                                                     }
                                                 }
                                             }
                                             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Left" ); 
                                             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                             if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         }
                                     }
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                         if( mySimpleState.shipSpeed < 0.16f )      return eAction::parser.stringToEnum( "Right" ); 
                                         else      return eAction::parser.stringToEnum( "Left" ); 
                                     }
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                                         if( mySimpleState.goalDistance < 139.42f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         else { 
                                             if( mySimpleState.mySlices[19].targetDistance < 97.23f )      return eAction::parser.stringToEnum( "Left" ); 
                                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         }
                                     }
                                 }
                                 else { 
                                     if( mySimpleState.goalDistance < 196.29f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else { 
                                         if( mySimpleState.mySlices[2].targetDistance < 194.78f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else { 
                                             if( mySimpleState.goalDirection < 3.77f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                             else { 
                                                 if( mySimpleState.mySlices[17].targetDistance < 196.1f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                 else { 
                                                     if( mySimpleState.shipSpeed < 0.34f )      return eAction::parser.stringToEnum( "Down" ); 
                                                     else { 
                                                         if( mySimpleState.mySlices[14].targetDistance < 158.37f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                         else      return eAction::parser.stringToEnum( "Down" ); 
                                                     }
                                                 }
                                             }
                                         }
                                     }
                                 }
                             }
                             else { 
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[3].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                                     if( mySimpleState.mySlices[10].targetDistance < 210.59f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     else { 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                 }
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                         if( mySimpleState.mySlices[3].targetDistance < 155.65f ) { 
                                             if( mySimpleState.shipDirection < 5.64f ) { 
                                                 if( mySimpleState.mySlices[16].targetDistance < 213.63f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                 else { 
                                                     if( mySimpleState.mySlices[9].targetDistance < 179.01f ) { 
                                                         if( mySimpleState.mySlices[6].targetDistance < 189.54f ) { 
                                                             if( mySimpleState.shipDirection < 0.36f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                                         }
                                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                                     }
                                                     else { 
                                                         if( mySimpleState.shipSpeed < 3.59f )      return eAction::parser.stringToEnum( "Up" ); 
                                                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                                     }
                                                 }
                                             }
                                             else { 
                                                 if( mySimpleState.mySlices[5].targetDistance < 213.3f )      return eAction::parser.stringToEnum( "Up" ); 
                                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                             }
                                         }
                                         else { 
                                             if( mySimpleState.mySlices[6].targetDistance < 201.97f ) { 
                                                 if( mySimpleState.mySlices[17].targetDistance < 190.52f )      return eAction::parser.stringToEnum( "Up" ); 
                                                 else { 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                 }
                                             }
                                             else { 
                                                 if( mySimpleState.mySlices[15].targetDistance < 220.92f ) { 
                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                                                         if( mySimpleState.mySlices[15].targetDistance < 184.92f )      return eAction::parser.stringToEnum( "Up" ); 
                                                         else      return eAction::parser.stringToEnum( "Up-Right" ); 
                                                     }
                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 }
                                                 else { 
                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                     if( mySimpleState.mySlices[1].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                                 }
                                             }
                                         }
                                     }
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                     if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                                     if( mySimpleState.shipDirection < 4.23f )      return eAction::parser.stringToEnum( "Up" ); 
                                     else { 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                         if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     }
                                 }
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[7].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                         }
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") ) { 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                     if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Left" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[14].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Left" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[1].targetDistance < 187.61f )      return eAction::parser.stringToEnum( "Up" ); 
                                 else { 
                                     if( mySimpleState.goalDistance < 166.15f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     else      return eAction::parser.stringToEnum( "Up" ); 
                                 }
                             }
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                             if( mySimpleState.shipDirection < 2.45f )      return eAction::parser.stringToEnum( "Up" ); 
                             else { 
                                 if( mySimpleState.shipDirection < 5.34f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                         }
                     }
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                         if( mySimpleState.mySlices[16].targetDistance < 207.92f )      return eAction::parser.stringToEnum( "Up" ); 
                         else { 
                             if( mySimpleState.mySlices[14].targetDistance < 197.03f ) { 
                                 if( mySimpleState.shipSpeed < 1.08f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
                             }
                             else { 
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[19].targetDistance < 149.48f )      return eAction::parser.stringToEnum( "Down" ); 
                                     else      return eAction::parser.stringToEnum( "Right" ); 
                                 }
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                         }
                     }
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
                         if( mySimpleState.mySlices[5].targetDistance < 232.42f )      return eAction::parser.stringToEnum( "Up" ); 
                         else { 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down-Left" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.shipDirection < 2.24f )      return eAction::parser.stringToEnum( "Down-Left" ); 
                                 else      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                     }
                     if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
                         if( mySimpleState.mySlices[7].targetDistance < 170.41f ) { 
                             if( mySimpleState.mySlices[7].targetDistance < 152.94f )      return eAction::parser.stringToEnum( "Up" ); 
                             else { 
                                 if( mySimpleState.shipDirection < 4.09f ) { 
                                     if( mySimpleState.mySlices[19].targetDistance < 199.14f ) { 
                                         if( mySimpleState.goalDirection < 6.26f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         else { 
                                             if( mySimpleState.mySlices[15].targetDistance < 186.68f )      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                                         }
                                     }
                                     else { 
                                         if( mySimpleState.shipSpeed < 0.8f )      return eAction::parser.stringToEnum( "Up" ); 
                                         else { 
                                             if( mySimpleState.goalDirection < 6.26f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                                             else      return eAction::parser.stringToEnum( "Up" ); 
                                         }
                                     }
                                 }
                                 else      return eAction::parser.stringToEnum( "Up" ); 
                             }
                         }
                         else { 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.mySlices[15].targetDistance < 138.5f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                                     else { 
                                         if( mySimpleState.goalDistance < 234.64f )      return eAction::parser.stringToEnum( "Left" ); 
                                         else      return eAction::parser.stringToEnum( "Up" ); 
                                     }
                                 }
                                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             if( mySimpleState.mySlices[9].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         }
                     }
                 }
             }
         }
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                 if( mySimpleState.mySlices[9].targetDistance < 175.5f ) { 
                     if( mySimpleState.mySlices[9].targetDistance < 173.07f )      return eAction::parser.stringToEnum( "Left" ); 
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
                 else { 
                     if( mySimpleState.mySlices[12].targetDistance < 107.96f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
                 }
             }
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
                     if( mySimpleState.mySlices[10].targetDistance < 190.23f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[0].targetDistance < 218.4f ) { 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
                             if( mySimpleState.canShoot  ==  true )      return eAction::parser.stringToEnum( "Left" ); 
                             else      return eAction::parser.stringToEnum( "Right" ); 
                         }
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     else { 
                         if( mySimpleState.mySlices[6].targetDistance < 253.56f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                         else { 
                             if( mySimpleState.mySlices[3].targetDistance < 202.55f )      return eAction::parser.stringToEnum( "Right" ); 
                             else { 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                                     if( mySimpleState.shipSpeed < 1.59f )      return eAction::parser.stringToEnum( "Down-Left" ); 
                                     else      return eAction::parser.stringToEnum( "Down" ); 
                                 }
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                                 if( mySimpleState.mySlices[17].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                             }
                         }
                     }
                 }
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Left" ); 
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             if( mySimpleState.mySlices[18].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         }
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") ) { 
             if( mySimpleState.mySlices[12].targetDistance < 181.56f )      return eAction::parser.stringToEnum( "NoDirection" ); 
             else { 
                 if( mySimpleState.canShoot  ==  true )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
             }
         }
         if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
             if( mySimpleState.mySlices[15].targetDistance < 237.86f ) { 
                 if( mySimpleState.goalDistance < 145.68f )      return eAction::parser.stringToEnum( "Up" ); 
                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
             }
             else { 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.goalDistance < 89.26f )      return eAction::parser.stringToEnum( "Right" ); 
                     else { 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                             if( mySimpleState.mySlices[3].targetDistance < 253.91f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                             else      return eAction::parser.stringToEnum( "Up-Left" ); 
                         }
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                 }
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[0].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
         }
     }
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
             if( mySimpleState.mySlices[5].targetDistance < 212.35f )      return eAction::parser.stringToEnum( "Down" ); 
             else { 
                 if( mySimpleState.mySlices[16].targetDistance < 171.82f ) { 
                     if( mySimpleState.invincible  ==  true )      return eAction::parser.stringToEnum( "Left" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 else { 
                     if( mySimpleState.mySlices[4].targetDistance < 154.35f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else { 
                         if( mySimpleState.mySlices[6].targetDistance < 132.55f )      return eAction::parser.stringToEnum( "Down" ); 
                         else { 
                             if( mySimpleState.shipDirection < 1.08f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                             else      return eAction::parser.stringToEnum( "Down" ); 
                         }
                     }
                 }
             }
         }
         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[1].targetDistance < 219.14f ) { 
                 if( mySimpleState.mySlices[19].targetDistance < 235.05f )      return eAction::parser.stringToEnum( "Left" ); 
                 else      return eAction::parser.stringToEnum( "Right" ); 
             }
             else { 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
                     if( mySimpleState.mySlices[13].targetDistance < 113.15f )      return eAction::parser.stringToEnum( "Up" ); 
                     else { 
                         if( mySimpleState.shipDirection < 1.88f )      return eAction::parser.stringToEnum( "Right" ); 
                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                     }
                 }
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down-Left" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down-Left" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                         if( mySimpleState.mySlices[4].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     }
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[6].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Right" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[5].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
         }
         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     }
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
         if( mySimpleState.goalDirection < 1.27f ) { 
             if( mySimpleState.mySlices[2].targetDistance < 138.22f )      return eAction::parser.stringToEnum( "NoDirection" ); 
             else { 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Right" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.shipSpeed < 0.86f )      return eAction::parser.stringToEnum( "Right" ); 
                     else      return eAction::parser.stringToEnum( "Up-Right" ); 
                 }
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[10].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
         }
         else { 
             if( mySimpleState.shipSpeed < 2.67f ) { 
                 if( mySimpleState.mySlices[7].targetDistance < 188.54f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                 else { 
                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.mySlices[2].targetDistance < 180.78f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                         else      return eAction::parser.stringToEnum( "Up" ); 
                     }
                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[12].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
             }
             else { 
                 if( mySimpleState.mySlices[10].targetDistance < 213.07f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 else      return eAction::parser.stringToEnum( "Up" ); 
             }
         }
     }
 }
 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
     if( mySimpleState.mySlices[5].targetDistance < 141 ) { 
         if( mySimpleState.mySlices[5].targetDistance < 116.1f ) { 
             if( mySimpleState.mySlices[14].targetDistance < 223.82f )      return eAction::parser.stringToEnum( "Up-Right" ); 
             else      return eAction::parser.stringToEnum( "Up" ); 
         }
         else      return eAction::parser.stringToEnum( "Up" ); 
     }
     else { 
         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
             if( mySimpleState.mySlices[14].targetDistance < 242.21f )      return eAction::parser.stringToEnum( "Up" ); 
             else      return eAction::parser.stringToEnum( "Up-Left" ); 
         }
         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Right" ); 
         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") ) { 
             if( mySimpleState.mySlices[18].targetDistance < 113.61f )      return eAction::parser.stringToEnum( "NoDirection" ); 
             else { 
                 if( mySimpleState.canShoot  ==  true ) { 
                     if( mySimpleState.mySlices[18].targetDistance < 187.57f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else      return eAction::parser.stringToEnum( "Left" ); 
                 }
                 else      return eAction::parser.stringToEnum( "Fire-NoDirection" ); 
             }
         }
         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.shipDirection < 0.03f )      return eAction::parser.stringToEnum( "Up" ); 
             else { 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") ) { 
                     if( mySimpleState.goalDistance < 76.39f ) { 
                         if( mySimpleState.mySlices[7].targetDistance < 251.96f )      return eAction::parser.stringToEnum( "Right" ); 
                         else { 
                             if( mySimpleState.mySlices[8].targetDistance < 160.07f )      return eAction::parser.stringToEnum( "Right" ); 
                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                         }
                     }
                     else      return eAction::parser.stringToEnum( "NoDirection" ); 
                 }
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                     if( mySimpleState.shipDirection < 0.61f ) { 
                         if( mySimpleState.mySlices[4].targetDistance < 253.25f )      return eAction::parser.stringToEnum( "Up-Right" ); 
                         else      return eAction::parser.stringToEnum( "Right" ); 
                     }
                     else { 
                         if( mySimpleState.shipDirection < 4.67f ) { 
                             if( mySimpleState.mySlices[17].targetDistance < 108.21f )      return eAction::parser.stringToEnum( "Left" ); 
                             else      return eAction::parser.stringToEnum( "NoDirection" ); 
                         }
                         else { 
                             if( mySimpleState.shipDirection < 5.47f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                             else      return eAction::parser.stringToEnum( "Up-Right" ); 
                         }
                     }
                 }
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "NoDirection" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[19].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
         }
         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[15].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     }
 }
 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
 if( mySimpleState.mySlices[11].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") ) { 
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away") ) { 
         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Up-Left" ); 
         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
             if( mySimpleState.mySlices[10].targetDistance < 71.9f )      return eAction::parser.stringToEnum( "Up" ); 
             else { 
                 if( mySimpleState.invincible  ==  true ) { 
                     if( mySimpleState.shipSpeed < 0.72f )      return eAction::parser.stringToEnum( "NoDirection" ); 
                     else      return eAction::parser.stringToEnum( "Up" ); 
                 }
                 else { 
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Up" ); 
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
                         if( mySimpleState.goalDirection < 6.02f )      return eAction::parser.stringToEnum( "Up" ); 
                         else      return eAction::parser.stringToEnum( "NoDirection" ); 
                     }
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                     if( mySimpleState.mySlices[2].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 }
             }
         }
         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
         if( mySimpleState.mySlices[8].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     }
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") ) { 
         if( mySimpleState.mySlices[3].targetDistance < 194.26f )      return eAction::parser.stringToEnum( "Up-Left" ); 
         else      return eAction::parser.stringToEnum( "Up" ); 
     }
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Left" ); 
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("None") ) { 
         if( mySimpleState.mySlices[11].targetDistance < 148.1f ) { 
             if( mySimpleState.mySlices[14].targetDistance < 97.05f )      return eAction::parser.stringToEnum( "NoDirection" ); 
             else { 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Away-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("None") )      return eAction::parser.stringToEnum( "Up" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") )      return eAction::parser.stringToEnum( "Right" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
                 if( mySimpleState.mySlices[16].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
             }
         }
         else { 
             if( mySimpleState.mySlices[11].targetDistance < 194.94f ) { 
                 if( mySimpleState.shipDirection < 5.09f )      return eAction::parser.stringToEnum( "Left" ); 
                 else      return eAction::parser.stringToEnum( "Up-Left" ); 
             }
             else { 
                 if( mySimpleState.mySlices[1].targetDistance < 152.04f )      return eAction::parser.stringToEnum( "Up-Left" ); 
                 else      return eAction::parser.stringToEnum( "Up-Right" ); 
             }
         }
     }
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards") ) { 
         if( mySimpleState.goalDirection < 5.76f )      return eAction::parser.stringToEnum( "Up" ); 
         else      return eAction::parser.stringToEnum( "Up-Right" ); 
     }
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-Clockwise") )      return eAction::parser.stringToEnum( "Down" ); 
     if( mySimpleState.mySlices[13].targetDirection  ==  eRDir::stringToRelativeDirection("Towards-CounterClockwise") )      return eAction::parser.stringToEnum( "Down" ); 
 }


}
