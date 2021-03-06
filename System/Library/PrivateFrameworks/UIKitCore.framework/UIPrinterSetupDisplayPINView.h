/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:09 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIButton;

@interface UIPrinterSetupDisplayPINView : UIView {

	UILabel* _titleLabel;
	UIButton* _nextButton;

}

@property (nonatomic,retain) UILabel * titleLabel;               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * nextButton;              //@synthesize nextButton=_nextButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setMessage:(id)arg1 showButton:(BOOL)arg2 ;
-(UIButton *)nextButton;
-(void)setNextButton:(UIButton *)arg1 ;
@end

