/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIPanGestureRecognizer.h>

@class NSSet;

@interface CCUIDismissalGestureRecognizer : UIPanGestureRecognizer {

	BOOL _triggered;
	NSSet* _currentTouches;

}
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)_tryToCancelTouches;
-(void)_cancelOtherGestureRecognizersForTouches:(id)arg1 ;
@end

