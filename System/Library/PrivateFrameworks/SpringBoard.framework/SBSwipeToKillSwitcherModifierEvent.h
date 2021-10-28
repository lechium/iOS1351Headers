/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBSwitcherModifierEvent.h>

@class SBAppLayout;

@interface SBSwipeToKillSwitcherModifierEvent : SBSwitcherModifierEvent {

	SBAppLayout* _appLayout;
	double _progress;

}

@property (nonatomic,readonly) SBAppLayout * appLayout;              //@synthesize appLayout=_appLayout - In the implementation block
@property (nonatomic,readonly) double progress;                      //@synthesize progress=_progress - In the implementation block
-(long long)type;
-(double)progress;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(SBAppLayout *)appLayout;
-(id)initWithAppLayout:(id)arg1 progress:(double)arg2 ;
@end
