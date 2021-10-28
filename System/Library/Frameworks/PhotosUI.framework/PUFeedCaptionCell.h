/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUFeedCell.h>

@class PXFeedSectionInfo, UILabel, PXUIButton, UIImage;

@interface PUFeedCaptionCell : PUFeedCell {

	BOOL _hideCaption;
	PXFeedSectionInfo* _sectionInfo;
	unsigned long long _captionItemIndex;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	PXUIButton* _likeButton;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) UIImage * likedImage; 
@property (nonatomic,readonly) UIImage * notLikedImage; 
@property (nonatomic,retain) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                          //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) PXUIButton * likeButton;                          //@synthesize likeButton=_likeButton - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                       //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) PXFeedSectionInfo * sectionInfo;                  //@synthesize sectionInfo=_sectionInfo - In the implementation block
@property (assign,nonatomic) unsigned long long captionItemIndex;              //@synthesize captionItemIndex=_captionItemIndex - In the implementation block
@property (assign,nonatomic) BOOL hideCaption;                                 //@synthesize hideCaption=_hideCaption - In the implementation block
@property (assign,nonatomic) BOOL isLiked; 
-(void)dealloc;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)_updateTitle;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)_updateUI;
-(PXFeedSectionInfo *)sectionInfo;
-(BOOL)isLiked;
-(void)_updateSubtitle;
-(void)setSectionInfo:(PXFeedSectionInfo *)arg1 ;
-(CGSize)_performLayoutInRect:(CGRect)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(void)setCaptionItemIndex:(unsigned long long)arg1 ;
-(void)setHideCaption:(BOOL)arg1 ;
-(UIImage *)likedImage;
-(UIImage *)notLikedImage;
-(void)_setLikeButtonLiked:(BOOL)arg1 ;
-(BOOL)_shouldHideLikeButton;
-(void)_updateLikeButton;
-(void)_handleLikeButtonTap:(id)arg1 ;
-(unsigned long long)captionItemIndex;
-(BOOL)hideCaption;
-(PXUIButton *)likeButton;
-(void)setLikeButton:(PXUIButton *)arg1 ;
@end
