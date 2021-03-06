/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UIVisualEffectView.h>

@class UILabel, NSString, UIColor, UIFont;

@interface DOCVisualEffectLabel : UIVisualEffectView {

	UILabel* _label;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) UIColor * textColor; 
@property (nonatomic,copy) UIFont * font; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory; 
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,retain) UILabel * label;                                     //@synthesize label=_label - In the implementation block
-(long long)lineBreakMode;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(id)initWithEffect:(id)arg1 ;
-(UIFont *)font;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(id)viewForLastBaselineLayout;
-(long long)numberOfLines;
-(UIColor *)textColor;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(long long)textAlignment;
-(BOOL)adjustsFontForContentSizeCategory;
@end

