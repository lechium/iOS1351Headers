/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol CKDetailsAddGroupNameViewDelegate;
@class NSString, UILabel, CKDetailsViewAddGroupNameViewUITextField;

@interface CKDetailsAddGroupNameView : UIView <UITextFieldDelegate> {

	BOOL _enabled;
	id<CKDetailsAddGroupNameViewDelegate> _delegate;
	NSString* _groupName;
	UILabel* _placeholderLabel;
	CKDetailsViewAddGroupNameViewUITextField* _inputField;

}

@property (nonatomic,retain) UILabel * placeholderLabel;                                         //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (nonatomic,retain) CKDetailsViewAddGroupNameViewUITextField * inputField;              //@synthesize inputField=_inputField - In the implementation block
@property (assign,nonatomic,__weak) id<CKDetailsAddGroupNameViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * groupName;                                                 //@synthesize groupName=_groupName - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                      //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredHeight;
-(void)setEnabled:(BOOL)arg1 ;
-(id<CKDetailsAddGroupNameViewDelegate>)delegate;
-(void)setDelegate:(id<CKDetailsAddGroupNameViewDelegate>)arg1 ;
-(BOOL)isEnabled;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(UILabel *)placeholderLabel;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(CKDetailsViewAddGroupNameViewUITextField *)inputField;
-(void)commitGroupName;
-(void)setInputField:(CKDetailsViewAddGroupNameViewUITextField *)arg1 ;
@end

