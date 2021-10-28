/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class UITextField, NSArray, UIImageView, NSDictionary;

@interface CNAddressComponentTextFieldCell : UITableViewCell {

	UITextField* _textFieldForChevron;
	NSArray* _componentConstraints;
	UITextField* _textField;
	UIImageView* _chevron;

}

@property (nonatomic,retain) UITextField * textField;                               //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) UIImageView * chevron;                                 //@synthesize chevron=_chevron - In the implementation block
@property (nonatomic,readonly) NSArray * textFields; 
@property (assign,nonatomic,__weak) UITextField * textFieldForChevron;              //@synthesize textFieldForChevron=_textFieldForChevron - In the implementation block
@property (nonatomic,copy) NSDictionary * textAttributes; 
@property (nonatomic,retain) NSArray * componentConstraints;                        //@synthesize componentConstraints=_componentConstraints - In the implementation block
+(id)cellIdentifier;
-(void)prepareForReuse;
-(NSArray *)textFields;
-(UITextField *)textField;
-(void)updateConstraints;
-(NSDictionary *)textAttributes;
-(void)setTextAttributes:(NSDictionary *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChevron:(UIImageView *)arg1 ;
-(UIImageView *)chevron;
-(void)setTextField:(UITextField *)arg1 ;
-(void)setupTextFields;
-(id)currentConstraintsForMetrics:(id)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(id)addTextField;
-(void)setTextFieldForChevron:(UITextField *)arg1 ;
-(UITextField *)textFieldForChevron;
-(NSArray *)componentConstraints;
-(void)setComponentConstraints:(NSArray *)arg1 ;
@end
