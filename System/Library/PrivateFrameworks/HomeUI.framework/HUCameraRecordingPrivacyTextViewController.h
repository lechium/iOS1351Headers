/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class UILabel, UITextView;

@interface HUCameraRecordingPrivacyTextViewController : UIViewController {

	UILabel* _headerLabel;
	UITextView* _consentTextView;

}

@property (nonatomic,retain) UILabel * headerLabel;                     //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UITextView * consentTextView;              //@synthesize consentTextView=_consentTextView - In the implementation block
-(void)viewDidLoad;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(UILabel *)headerLabel;
-(void)_addConstraints;
-(UITextView *)consentTextView;
-(void)setConsentTextView:(UITextView *)arg1 ;
@end

