/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSSet, PUReviewScreenDoneButton, UIButton;

@interface PUReviewScreenTopBar : UIView {

	NSSet* _availableButtons;
	NSSet* _enabledButtons;
	unsigned long long _backgroundStyle;
	PUReviewScreenDoneButton* _doneButton;
	UIButton* _retakeButton;
	CGPoint _doneButtonCenterAlignmentPoint;

}

@property (nonatomic,copy) NSSet * availableButtons;                               //@synthesize availableButtons=_availableButtons - In the implementation block
@property (nonatomic,copy) NSSet * enabledButtons;                                 //@synthesize enabledButtons=_enabledButtons - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundStyle;                   //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (assign,nonatomic) CGPoint doneButtonCenterAlignmentPoint;               //@synthesize doneButtonCenterAlignmentPoint=_doneButtonCenterAlignmentPoint - In the implementation block
@property (nonatomic,readonly) PUReviewScreenDoneButton * doneButton;              //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,readonly) UIButton * retakeButton;                            //@synthesize retakeButton=_retakeButton - In the implementation block
+(id)supportedButtons;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)_updateBackgroundColor;
-(void)setBackgroundStyle:(unsigned long long)arg1 ;
-(unsigned long long)backgroundStyle;
-(PUReviewScreenDoneButton *)doneButton;
-(void)setEnabledButtons:(NSSet *)arg1 ;
-(void)setAvailableButtons:(NSSet *)arg1 ;
-(UIButton *)retakeButton;
-(BOOL)_isButtonAvailable:(long long)arg1 ;
-(BOOL)_isButtonEnabled:(long long)arg1 ;
-(id)_buttonForButtonType:(long long)arg1 ;
-(void)_updateButtonVisibility;
-(NSSet *)availableButtons;
-(NSSet *)enabledButtons;
-(void)setDoneButtonCenterAlignmentPoint:(CGPoint)arg1 ;
-(CGPoint)doneButtonCenterAlignmentPoint;
@end

