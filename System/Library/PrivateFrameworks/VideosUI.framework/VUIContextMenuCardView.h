/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIContextMenuCardViewLayout, VUILabel, _TVImageView;

@interface VUIContextMenuCardView : UIView {

	VUIContextMenuCardViewLayout* _layout;
	VUILabel* _titleTextView;
	VUILabel* _subtitleTextView;
	_TVImageView* _badgeView;
	_TVImageView* _coverImageView;

}

@property (nonatomic,retain) VUIContextMenuCardViewLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUILabel * titleTextView;                           //@synthesize titleTextView=_titleTextView - In the implementation block
@property (nonatomic,retain) VUILabel * subtitleTextView;                        //@synthesize subtitleTextView=_subtitleTextView - In the implementation block
@property (nonatomic,retain) _TVImageView * badgeView;                           //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) _TVImageView * coverImageView;                      //@synthesize coverImageView=_coverImageView - In the implementation block
+(id)configureViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(VUIContextMenuCardViewLayout *)layout;
-(void)setLayout:(VUIContextMenuCardViewLayout *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(_TVImageView *)badgeView;
-(void)setBadgeView:(_TVImageView *)arg1 ;
-(VUILabel *)titleTextView;
-(void)setTitleTextView:(VUILabel *)arg1 ;
-(CGSize)_iOS_layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
-(VUILabel *)subtitleTextView;
-(void)setSubtitleTextView:(VUILabel *)arg1 ;
-(_TVImageView *)coverImageView;
-(void)setCoverImageView:(_TVImageView *)arg1 ;
@end

