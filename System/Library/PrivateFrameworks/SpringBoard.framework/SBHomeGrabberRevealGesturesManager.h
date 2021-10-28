/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol OS_dispatch_queue;
@class UITapGestureRecognizer, UIScreenEdgePanGestureRecognizer, NSObject, NSHashTable, NSString;

@interface SBHomeGrabberRevealGesturesManager : NSObject <UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _bounceTapRecognizer;
	UITapGestureRecognizer* _revealTapRecognizer;
	UITapGestureRecognizer* _revealDoubleTapRecognizer;
	UIScreenEdgePanGestureRecognizer* _revealEdgePanRecognizer;
	NSObject*<OS_dispatch_queue> _registrationQueue;
	NSHashTable* _registeredGrabbers;
	BOOL _gestureEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_tapRecognized:(id)arg1 ;
-(void)registerGrabber:(id)arg1 ;
-(void)unregisterGrabber:(id)arg1 ;
-(void)_edgePanChanged:(id)arg1 ;
-(BOOL)gestureRecognizerContainsPointerEvent:(id)arg1 ;
@end
