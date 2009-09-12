/*
 *  PlaceObject.h
 *  MonkSWF
 *
 *  Created by Micah Pearlman on 3/26/09.
 *  Copyright 2009 Monk Games. All rights reserved.
 *
 */

#ifndef __PlaceObject_h__
#define __PlaceObject_h__

#include "mkTag.h"
#include <vg/openvg.h>
#include <vg/vgu.h>

namespace MonkSWF {

	class PlaceObject2Tag : public IPlaceObjectTag {
	public:
		PlaceObject2Tag( TagHeader& h ) 
			: IPlaceObjectTag( h )
		{}
		
		virtual ~PlaceObject2Tag() {
			
		}
		
		virtual bool read( Reader* reader );
		virtual void print() {
			
		}
		virtual void draw( SWF* swf );
		virtual void copyTransform( IPlaceObjectTag* other );
		
		static ITag* create( TagHeader* header ) {
			return (ITag*)(new PlaceObject2Tag( *header ));
		}
		

	private:
	
		VGfloat		_translation[2];
		VGfloat		_scale[2];
		VGfloat		_rotation;
	};
}
#endif // __PlaceObject_h__