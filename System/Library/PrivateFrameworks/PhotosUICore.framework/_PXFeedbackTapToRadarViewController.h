/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@protocol _PXFeedbackTapToRadarViewControllerDelegate;
@class UISwitch, UISegmentedControl;

@interface _PXFeedbackTapToRadarViewController : UIViewController {

	UISwitch* _screenshotSwitch;
	UISwitch* _diagnoseSwitch;
	id<_PXFeedbackTapToRadarViewControllerDelegate> _delegate;
	UISegmentedControl* _segmentedControl;

}

@property (nonatomic,retain) UISwitch * screenshotSwitch;                                           //@synthesize screenshotSwitch=_screenshotSwitch - In the implementation block
@property (nonatomic,retain) UISwitch * diagnoseSwitch;                                             //@synthesize diagnoseSwitch=_diagnoseSwitch - In the implementation block
@property (nonatomic,retain) id<_PXFeedbackTapToRadarViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UISegmentedControl * segmentedControl;                                 //@synthesize segmentedControl=_segmentedControl - In the implementation block
-(id<_PXFeedbackTapToRadarViewControllerDelegate>)delegate;
-(void)setDelegate:(id<_PXFeedbackTapToRadarViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(UISegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
-(void)_didSelectCancelButton:(id)arg1 ;
-(void)_didSelectFileRadarButton:(id)arg1 ;
-(UISwitch *)screenshotSwitch;
-(void)setScreenshotSwitch:(UISwitch *)arg1 ;
-(UISwitch *)diagnoseSwitch;
-(void)setDiagnoseSwitch:(UISwitch *)arg1 ;
@end
