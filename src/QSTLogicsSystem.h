//
//  QSTLogicsSystem.h
//  Quest
//
//  Created by Per Borgman on 2010-03-23.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class QSTCore;
@class QSTEntity;

@interface QSTLogicsSystem : NSObject {
	QSTCore		*core;
}

-(id)initOnCore:(QSTCore*)core_;

-(void)registerEntity:(QSTEntity*)entity;

@end
