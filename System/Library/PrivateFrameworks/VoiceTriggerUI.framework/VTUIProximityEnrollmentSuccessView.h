/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <VoiceTriggerUI/VTUIProximityView.h>

@class NSString, VTUIProximityContainerView, UILabel, UIImageView, UIView, VTUIStyle, VTUIButton, UIButton, NSArray;

@interface VTUIProximityEnrollmentSuccessView : VTUIProximityView {

	NSString* _languageCode;
	VTUIProximityContainerView* _containerView;
	UILabel* _titleLabel;
	UIImageView* _imageView;
	UIView* _imageViewContainer;
	UILabel* _subtitleLabel;
	VTUIStyle* _vtStyle;
	VTUIButton* _continueButton;
	UIButton* _dismissButton;
	NSArray* _viewConstraints;

}

@property (nonatomic,retain) NSArray * viewConstraints;                  //@synthesize viewConstraints=_viewConstraints - In the implementation block
@property (nonatomic,readonly) VTUIButton * continueButton;              //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                   //@synthesize dismissButton=_dismissButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(VTUIButton *)continueButton;
-(void)setDismissButton:(UIButton *)arg1 ;
-(UIButton *)dismissButton;
-(void)_setImage:(id)arg1 ;
-(NSArray *)viewConstraints;
-(void)setViewConstraints:(NSArray *)arg1 ;
-(void)_setupContent;
-(void)_setupImage;
-(void)_setupConstraintsToSize:(CGSize)arg1 ;
-(void)_setupPhoneLandscapeConstraints;
-(void)_setupPortraitConstraints;
@end

