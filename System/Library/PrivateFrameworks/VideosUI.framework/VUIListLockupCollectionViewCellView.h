/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIListLockupCollectionViewCellLayout, _TVImageView, _TVMonogramView, TVImageLayout, VUILabel, VUIFocusableTextView, VUIButton, VUISeparatorView;

@interface VUIListLockupCollectionViewCellView : UIView {

	VUIListLockupCollectionViewCellLayout* _layout;
	_TVImageView* _imageView;
	_TVMonogramView* _monogramView;
	TVImageLayout* _imageLayout;
	VUILabel* _titleLabel;
	VUILabel* _subTitleLabel;
	VUIFocusableTextView* _descriptionTextView;
	VUIButton* _primaryButton;
	VUIButton* _secondaryButton;
	VUISeparatorView* _separatorView;

}

@property (nonatomic,retain) VUISeparatorView * separatorView;                            //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) VUIListLockupCollectionViewCellLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                                    //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) _TVMonogramView * monogramView;                              //@synthesize monogramView=_monogramView - In the implementation block
@property (nonatomic,retain) TVImageLayout * imageLayout;                                 //@synthesize imageLayout=_imageLayout - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * subTitleLabel;                                    //@synthesize subTitleLabel=_subTitleLabel - In the implementation block
@property (nonatomic,retain) VUIFocusableTextView * descriptionTextView;                  //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
@property (nonatomic,retain) VUIButton * primaryButton;                                   //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,retain) VUIButton * secondaryButton;                                 //@synthesize secondaryButton=_secondaryButton - In the implementation block
-(VUIListLockupCollectionViewCellLayout *)layout;
-(void)setLayout:(VUIListLockupCollectionViewCellLayout *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(VUILabel *)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(_TVImageView *)imageView;
-(VUISeparatorView *)separatorView;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(void)setImageView:(_TVImageView *)arg1 ;
-(void)setPrimaryButton:(VUIButton *)arg1 ;
-(void)setSecondaryButton:(VUIButton *)arg1 ;
-(VUIButton *)primaryButton;
-(VUIButton *)secondaryButton;
-(TVImageLayout *)imageLayout;
-(VUIFocusableTextView *)descriptionTextView;
-(void)setDescriptionTextView:(VUIFocusableTextView *)arg1 ;
-(VUILabel *)subTitleLabel;
-(void)setSubTitleLabel:(VUILabel *)arg1 ;
-(void)prepareForCellReuse;
-(void)setImageLayout:(TVImageLayout *)arg1 ;
-(_TVMonogramView *)monogramView;
-(void)setMonogramView:(_TVMonogramView *)arg1 ;
-(CGSize)_layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
@end

