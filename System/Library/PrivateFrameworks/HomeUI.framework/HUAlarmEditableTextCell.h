/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface HUAlarmEditableTextCell : UITableViewCell <UITextFieldDelegate> {

	UITextField* _textField;

}

@property (nonatomic,readonly) UITextField * textField;                     //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) long long autocapitalizationType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(UITextField *)textField;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(long long)autocapitalizationType;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
@end

