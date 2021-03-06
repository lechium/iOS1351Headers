/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class NSString, UILabel;

@interface HRBulletedIndentedLabel : UIView {

	NSString* _text;
	UILabel* _label;

}

@property (nonatomic,retain) UILabel * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * text;                //@synthesize text=_text - In the implementation block
+(id)_bodyFont;
+(id)_bodyFontTextStyle;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)lastBaselineAnchor;
-(id)firstBaselineAnchor;
-(id)initWithText:(id)arg1 ;
-(void)_setUpConstraints;
-(void)_setUpUI;
-(void)_updateLeadingDetailAttributedTextSize;
@end

