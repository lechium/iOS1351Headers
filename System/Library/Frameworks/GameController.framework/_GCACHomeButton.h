/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameController/GCControllerButtonInput.h>

@protocol _GCACHomeButtonDelegate;
@interface _GCACHomeButton : GCControllerButtonInput {

	id<_GCACHomeButtonDelegate> _delegate;
	BOOL needsReset;

}
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
@end
