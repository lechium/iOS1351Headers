/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/ControlCenter/Bundles/FlashlightModule.bundle/FlashlightModule
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FlashlightModule/FlashlightModule-Structs.h>
#import <ControlCenterUIKit/CCUIButtonModuleViewController.h>
#import <libobjc.A.dylib/SBUIFlashlightObserver.h>
#import <libobjc.A.dylib/CCUIContentModuleContentViewController.h>

@class UIViewPropertyAnimator, SBUIFlashlightController, CCUISteppedSliderView, NSString;

@interface CCUIFlashlightModuleViewController : CCUIButtonModuleViewController <SBUIFlashlightObserver, CCUIContentModuleContentViewController> {

	SBUIFlashlightController* _flashlight;
	CCUISteppedSliderView* _sliderView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (nonatomic,readonly) BOOL shouldPerformHoverInteraction; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_sliderValueDidChange:(id)arg1 ;
-(id)viewForTouchContinuation;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(void)flashlightAvailabilityDidChange:(BOOL)arg1 ;
-(void)flashlightLevelDidChange:(unsigned long long)arg1 ;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(double)preferredExpandedContentHeight;
-(double)preferredExpandedContentWidth;
-(double)preferredExpandedContinuousCornerRadius;
-(void)_updateSliderValue;
@end

