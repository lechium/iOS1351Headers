/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSTimer;

@interface PSGWallClockMinuteTimer : NSObject {

	id _target;
	SEL _action;
	NSTimer* _timer;

}
-(void)invalidate;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)startTimer;
-(void)_fireAction;
@end

