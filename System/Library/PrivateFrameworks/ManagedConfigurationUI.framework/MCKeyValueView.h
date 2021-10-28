/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView;

@interface MCKeyValueView : UIView {

	double _preferredValueLabelOriginX;
	UILabel* _keyLabel;
	UILabel* _valueLabel;
	UIImageView* _verifiedImageView;
	UILabel* _verifiedLabel;

}

@property (nonatomic,retain) UILabel * keyLabel;                             //@synthesize keyLabel=_keyLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                           //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) UIImageView * verifiedImageView;                //@synthesize verifiedImageView=_verifiedImageView - In the implementation block
@property (nonatomic,retain) UILabel * verifiedLabel;                        //@synthesize verifiedLabel=_verifiedLabel - In the implementation block
@property (assign,nonatomic) double preferredValueLabelOriginX;              //@synthesize preferredValueLabelOriginX=_preferredValueLabelOriginX - In the implementation block
+(double)defaultPreferredValueLabelOriginX;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)titleFont;
-(void)setValueLabel:(UILabel *)arg1 ;
-(UILabel *)valueLabel;
-(UILabel *)keyLabel;
-(void)setKeyLabel:(UILabel *)arg1 ;
-(id)detailFont;
-(double)preferredValueLabelOriginX;
-(UILabel *)verifiedLabel;
-(UIImageView *)verifiedImageView;
-(id)verifiedColor;
-(id)verifiedFont;
-(void)setKey:(id)arg1 value:(id)arg2 ;
-(void)setHighlightTextColor:(id)arg1 ;
-(void)setCheckmarkLabelText:(id)arg1 checkmarkLabelColor:(id)arg2 showCheckmark:(BOOL)arg3 ;
-(void)_createVerifiedComponentsIfNeeded;
-(void)setItemDetail:(id)arg1 ;
-(void)setPreferredValueLabelOriginX:(double)arg1 ;
-(void)setVerifiedImageView:(UIImageView *)arg1 ;
-(void)setVerifiedLabel:(UILabel *)arg1 ;
-(double)desiredValueLabelOriginXForSize:(CGSize)arg1 ;
@end
