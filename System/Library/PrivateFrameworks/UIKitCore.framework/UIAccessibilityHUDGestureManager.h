/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:56 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIGestureRecognizerDelegatePrivate.h>

@protocol UIAccessibilityHUDGestureDelegate;
@class UIView, UIViewController, UILongPressGestureRecognizer, NSMutableArray, UIGestureRecognizer, NSString;

@interface UIAccessibilityHUDGestureManager : NSObject <UIGestureRecognizerDelegatePrivate> {

	UIView* _view;
	id<UIAccessibilityHUDGestureDelegate> _delegate;
	UIViewController* _viewControllerDisplayingHUD;
	UILongPressGestureRecognizer* _recognizer;
	NSMutableArray* _subscribedConcurrentGestureRecognizers;
	BOOL _delegateDirectlyShowsHUD;
	BOOL _isInvalidated;

}

@property (nonatomic,readonly) UIGestureRecognizer * _recognizer; 
@property (nonatomic,__weak,readonly) UIView * view;                           //@synthesize view=_view - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_invalidate;
-(UIView *)view;
-(void)_gestureRecognizerChanged:(id)arg1 ;
-(void)_didToggleLargeContentViewer:(id)arg1 ;
-(void)_clearButtonItemGestureSubscriptions;
-(id)_subscribedConcurrentGestureRecognizers;
-(void)_concurrentGestureRecognizerFired:(id)arg1 ;
-(id)_bestViewControllerForView;
-(void)_dismissAccessibilityHUD;
-(void)_showAccessibilityHUDItem:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)initWithView:(id)arg1 delegate:(id)arg2 ;
-(UIGestureRecognizer *)_recognizer;
@end

