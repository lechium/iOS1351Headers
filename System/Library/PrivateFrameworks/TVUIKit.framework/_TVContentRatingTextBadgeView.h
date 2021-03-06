/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:59 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TVUIKit.framework/TVUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVUIKit/TVUIKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSAttributedString, UILayoutGuide, NSString;

@interface _TVContentRatingTextBadgeView : UIView {

	NSAttributedString* _contentRatingAttributedText;
	UILayoutGuide* _contentGuide;

}

@property (nonatomic,retain) UILayoutGuide * contentGuide;                                //@synthesize contentGuide=_contentGuide - In the implementation block
@property (nonatomic,copy) NSAttributedString * contentRatingAttributedText;              //@synthesize contentRatingAttributedText=_contentRatingAttributedText - In the implementation block
@property (nonatomic,copy) NSString * contentRatingText; 
+(UIEdgeInsets)_paddingEdgeInsets;
+(id)_badgeImageWithAttributedRatingText:(id)arg1 andColor:(id)arg2 ;
+(id)_attributedRatingTextForText:(id)arg1 color:(id)arg2 ;
+(CGSize)_badgeSizeForAttributedRatingText:(id)arg1 ;
+(void)_drawBadgeWithAttributedRatingText:(id)arg1 inContext:(CGContextRef)arg2 rect:(CGRect)arg3 color:(id)arg4 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILayoutGuide *)contentGuide;
-(void)tintColorDidChange;
-(id)lastBaselineAnchor;
-(id)firstBaselineAnchor;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)_intrinsicContentSize;
-(NSString *)contentRatingText;
-(void)setContentRatingText:(NSString *)arg1 ;
-(void)_updateContentRatingAttributedText:(id)arg1 ;
-(NSAttributedString *)contentRatingAttributedText;
-(void)setContentRatingAttributedText:(NSAttributedString *)arg1 ;
-(id)initWithBaselineOffsetFromBottom:(double)arg1 ;
-(void)setContentGuide:(UILayoutGuide *)arg1 ;
@end

