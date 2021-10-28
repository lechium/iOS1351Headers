/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBSwitcherModifier.h>

@class SBAppLayout, SBInsertionSwitcherModifier;

@interface SBFilteredAppExposeInsertionSwitcherModifier : SBSwitcherModifier {

	SBAppLayout* _appLayout;
	SBInsertionSwitcherModifier* _insertionSwitcherModifier;

}
-(id)handleEvent:(id)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(id)initWithAppLayout:(id)arg1 insertionSwitcherModifier:(id)arg2 ;
@end
