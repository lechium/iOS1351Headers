/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, UIFont, UILabel;

@interface MCDTitleView : UIView {

	NSLayoutConstraint* _badgeWidthConstraint;
	BOOL _explicitTrack;
	BOOL _shouldUseMusicExplicitGlyph;
	UIFont* _font;
	UILabel* _titleLabel;
	UILabel* _explicitLabel;

}

@property (nonatomic,retain) UILabel * explicitLabel;                                //@synthesize explicitLabel=_explicitLabel - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIFont * font;                                          //@synthesize font=_font - In the implementation block
@property (assign,getter=isExplicitTrack,nonatomic) BOOL explicitTrack;              //@synthesize explicitTrack=_explicitTrack - In the implementation block
@property (assign,nonatomic) BOOL shouldUseMusicExplicitGlyph;                       //@synthesize shouldUseMusicExplicitGlyph=_shouldUseMusicExplicitGlyph - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UILabel *)titleLabel;
-(UIFont *)font;
-(void)updateConstraints;
-(void)setupConstraints;
-(BOOL)isExplicitTrack;
-(void)setExplicitTrack:(BOOL)arg1 ;
-(id)_createLabelWithTextAlignment:(long long)arg1 ;
-(void)_updateExplicitTreatmentString;
-(UILabel *)explicitLabel;
-(void)setShouldUseMusicExplicitGlyph:(BOOL)arg1 ;
-(BOOL)shouldUseMusicExplicitGlyph;
-(void)setExplicitLabel:(UILabel *)arg1 ;
@end

