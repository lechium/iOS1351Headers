/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSString, UIColor;

@interface PKTransactionStatusCell : UITableViewCell {

	UILabel* _primaryLabel;
	UILabel* _secondaryTitleLabel;
	UILabel* _secondaryValueLabel;
	BOOL _templateLayout;
	BOOL _isBridge;
	NSString* _primaryText;
	NSString* _secondaryTitle;
	NSString* _secondaryValue;
	UIColor* _primaryTextOverrideColor;
	UIColor* _secondaryTextOverrideColor;

}

@property (nonatomic,copy) NSString * primaryText;                              //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,copy) NSString * secondaryTitle;                           //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (nonatomic,copy) NSString * secondaryValue;                           //@synthesize secondaryValue=_secondaryValue - In the implementation block
@property (nonatomic,retain) UIColor * primaryTextOverrideColor;                //@synthesize primaryTextOverrideColor=_primaryTextOverrideColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryTextOverrideColor;              //@synthesize secondaryTextOverrideColor=_secondaryTextOverrideColor - In the implementation block
@property (assign,nonatomic) BOOL isBridge;                                     //@synthesize isBridge=_isBridge - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_updateTextColors;
-(BOOL)isBridge;
-(NSString *)primaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(void)setSecondaryTitle:(NSString *)arg1 ;
-(NSString *)secondaryTitle;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)setSecondaryValue:(NSString *)arg1 ;
-(void)setPrimaryTextOverrideColor:(UIColor *)arg1 ;
-(void)setSecondaryTextOverrideColor:(UIColor *)arg1 ;
-(void)setIsBridge:(BOOL)arg1 ;
-(NSString *)secondaryValue;
-(UIColor *)primaryTextOverrideColor;
-(UIColor *)secondaryTextOverrideColor;
@end

