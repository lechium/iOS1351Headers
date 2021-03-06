/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <VoiceTriggerUI/VTUIEnrollmentStateView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol VTUIEnrollmentSetupIntroViewDelegate;
@class UIView, VTUIButton, NSString;

@interface VTUIEnrollmentSetupIntroView : VTUIEnrollmentStateView <UITextViewDelegate> {

	UIView* _footerView;
	id<VTUIEnrollmentSetupIntroViewDelegate> _stateViewDelegate;
	VTUIButton* _laterButton;
	VTUIButton* _continueButton;
	NSString* _languageCode;

}

@property (assign,nonatomic,__weak) id<VTUIEnrollmentSetupIntroViewDelegate> stateViewDelegate;              //@synthesize stateViewDelegate=_stateViewDelegate - In the implementation block
@property (nonatomic,readonly) VTUIButton * laterButton;                                                     //@synthesize laterButton=_laterButton - In the implementation block
@property (nonatomic,readonly) VTUIButton * continueButton;                                                  //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,copy,readonly) NSString * languageCode;                                                 //@synthesize languageCode=_languageCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)languageCode;
-(id)initWithFrame:(CGRect)arg1 ;
-(VTUIButton *)continueButton;
-(id)footerView;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(VTUIButton *)laterButton;
-(void)setStateViewDelegate:(id<VTUIEnrollmentSetupIntroViewDelegate>)arg1 ;
-(void)_setupContent;
-(void)_setupImage;
-(BOOL)suppressFinishButton;
-(id<VTUIEnrollmentSetupIntroViewDelegate>)stateViewDelegate;
-(id)_createFooterTextView;
-(id)_createFooterWithTextField:(BOOL)arg1 laterButton:(BOOL)arg2 ;
@end

