/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:09 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <SetupAssistantUI/BFFPasscodeInputView.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface BFFComplexPasscodeInputView : BFFPasscodeInputView <UITextFieldDelegate> {

	UITextField* _passcodeField;

}

@property (nonatomic,retain) UITextField * passcodeField;              //@synthesize passcodeField=_passcodeField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_layout;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setPasscodeField:(UITextField *)arg1 ;
-(UITextField *)passcodeField;
-(id)passcode;
-(void)setPasscode:(id)arg1 ;
-(id)passcodeDisplayView;
-(id)initWithFrame:(CGRect)arg1 numericOnly:(BOOL)arg2 ;
@end
