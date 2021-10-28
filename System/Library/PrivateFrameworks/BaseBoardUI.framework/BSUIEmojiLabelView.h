/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoardUI/BaseBoardUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString, UIFont, UIColor;

@interface BSUIEmojiLabelView : UIView {

	UILabel* _contentLabel;
	UILabel* _emojiLabel;
	NSString* _rawText;

}

@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (nonatomic,readonly) UILabel * contentLabel;                    //@synthesize contentLabel=_contentLabel - In the implementation block
-(long long)lineBreakMode;
-(void)setLineBreakMode:(long long)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIFont *)font;
-(id)_newLabel;
-(long long)numberOfLines;
-(UIColor *)textColor;
-(BOOL)adjustsFontSizeToFitWidth;
-(long long)textAlignment;
-(double)_firstLineBaselineOffsetFromBoundsTop;
-(UILabel *)contentLabel;
@end
