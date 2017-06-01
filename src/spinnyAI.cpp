//treeType = RandomTree

#include "AI.h"
#include "SimpleState.h"
#include "InputDirection.h"
#include "RelativeDirection.h"



//In AI.h: eAction::ActionEnum Spinnyai( SimpleState& mySimpleState ); 

eAction::ActionEnum AI::Spinnyai( SimpleState& mySimpleState ) {
 if( mySimpleState.shipDirection < 0.12f ) { 
     if( mySimpleState.goalDistance < 212.2f ) { 
         if( mySimpleState.canShoot  ==  true )      return eAction::parser.stringToEnum( "Up-Left" ); 
         else      return eAction::parser.stringToEnum( "Up" ); 
     }
     else      return eAction::parser.stringToEnum( "NoDirection" ); 
 }
 else      return eAction::parser.stringToEnum( "Up-Left" ); 


}
