/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:27 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol EKEventCreationGestureControllerDelegate;
@class NSObject, UIView, UILongPressGestureRecognizer, EKEvent, EKDayOccurrenceView, NSString;

@interface EKEventCreationGestureController : NSObject <UIGestureRecognizerDelegate> {

	NSObject*<EKEventCreationGestureControllerDelegate> _gestureDelegate;
	UIView* _targetView;
	UILongPressGestureRecognizer* _gestureRecognizer;
	EKEvent* _newEvent;
	UIView* _containerView;
	EKDayOccurrenceView* _eventPreview;
	CGPoint _originPoint;
	int _state;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithView:(id)arg1 delegate:(id)arg2 ;
-(void)handleGesture:(id)arg1 ;
-(BOOL)_canActivate;
-(void)_gestureBegan;
-(void)_gestureUpdated;
-(void)_gestureCompleted;
-(void)_gestureCanceled;
-(id)_snapDate:(id)arg1 toInterval:(double)arg2 ;
-(void)_adjustPreviewFrame;
-(void)_gestureChangedEnoughToCreateEvent;
-(void)_cleanUp;
-(BOOL)currentlyCreatingEvent;
@end
