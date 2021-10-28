/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBTransientOverlayViewController.h>
#import <libobjc.A.dylib/SBPowerDownViewDelegate.h>

@protocol SBPowerDownViewControllerDelegate;
@class SBPowerDownView, NSString;

@interface SBPowerDownViewController : SBTransientOverlayViewController <SBPowerDownViewDelegate> {

	unsigned long long _aggdStartTime;
	BOOL _canAlterScreenBrightness;
	SBPowerDownView* _powerDownView;
	id<SBPowerDownViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBPowerDownViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SBPowerDownViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBPowerDownViewControllerDelegate>)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(int)_preferredStatusBarVisibility;
-(void)powerDownViewAnimateOutCompleted:(id)arg1 ;
-(void)powerDownViewWillAnimateIn:(id)arg1 ;
-(void)powerDownViewWillAnimateOut:(id)arg1 ;
-(void)powerDownViewRequestPowerDown:(id)arg1 ;
-(void)powerDownViewRequestCancel:(id)arg1 ;
-(long long)idleTimerMode;
-(BOOL)shouldDisableSiri;
-(void)_beginTimeTracking;
-(void)_incrementCountForKey:(id)arg1 ;
-(void)_endTimeTrackingIncludingReportWithKey:(id)arg1 ;
-(void)_resetScreenBrightness;
-(void)powerDownViewDidBeginSlide:(id)arg1 ;
-(void)powerDownView:(id)arg1 didUpdateSlideWithValue:(double)arg2 ;
-(void)powerDownViewDidCompleteSlide:(id)arg1 ;
-(void)powerDownViewDidCancelSlide:(id)arg1 ;
-(void)powerDownViewDidReceiveCancelButtonAction:(id)arg1 ;
-(void)powerDownViewDidFireIdleTimer:(id)arg1 ;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(BOOL)shouldDisableBanners;
-(BOOL)shouldDisableControlCenter;
-(BOOL)shouldPendAlertItems;
@end
