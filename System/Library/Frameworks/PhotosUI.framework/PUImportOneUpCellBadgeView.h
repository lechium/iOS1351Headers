/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UIView, UIActivityIndicatorView;

@interface PUImportOneUpCellBadgeView : UICollectionReusableView {

	BOOL _selectable;
	BOOL _inUpdateBlock;
	BOOL _needsBadgeUpdate;
	long long _badgeType;
	UIView* _badgeContainerView;
	UIView* _badgeView;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIView * badgeContainerView;                    //@synthesize badgeContainerView=_badgeContainerView - In the implementation block
@property (nonatomic,retain) UIView * badgeView;                             //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) BOOL inUpdateBlock;                             //@synthesize inUpdateBlock=_inUpdateBlock - In the implementation block
@property (assign,nonatomic) BOOL needsBadgeUpdate;                          //@synthesize needsBadgeUpdate=_needsBadgeUpdate - In the implementation block
@property (assign,nonatomic) long long badgeType;                            //@synthesize badgeType=_badgeType - In the implementation block
@property (assign,nonatomic) BOOL selectable;                                //@synthesize selectable=_selectable - In the implementation block
-(void)prepareForReuse;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)badgeView;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setBadgeView:(UIView *)arg1 ;
-(void)setSelectable:(BOOL)arg1 ;
-(BOOL)selectable;
-(void)setBadgeType:(long long)arg1 ;
-(long long)badgeType;
-(void)updateBadgeUIIfNeeded;
-(UIView *)badgeContainerView;
-(void)setBadgeContainerView:(UIView *)arg1 ;
-(BOOL)needsBadgeUpdate;
-(void)setNeedsBadgeUpdate:(BOOL)arg1 ;
-(void)setNeedsBadgeUpdate;
-(void)performBadgeUpdates:(/*^block*/id)arg1 ;
-(void)_createSpinnerIfNecessary;
-(BOOL)inUpdateBlock;
-(void)setInUpdateBlock:(BOOL)arg1 ;
@end
