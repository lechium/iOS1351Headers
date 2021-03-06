/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PUAssetViewModelChangeObserver.h>
#import <libobjc.A.dylib/PXUIAssetBadgeViewDelegate.h>

@class PUAssetViewModel, PXUIAssetBadgeView, NSString;

@interface PUBadgeTileViewController : PUTileViewController <PUAssetViewModelChangeObserver, PXUIAssetBadgeViewDelegate> {

	BOOL __needsUpdateBadgeInfo;
	BOOL __needsUpdateBadgeView;
	BOOL __isOverContent;
	BOOL __shouldAnimateNextBadgeViewUpdate;
	PUAssetViewModel* _assetViewModel;
	PXUIAssetBadgeView* __badgeView;
	double __contentWidth;
	PXAssetBadgeInfo __badgeInfo;

}

@property (assign,setter=_setNeedsUpdateBadgeInfo:,nonatomic) BOOL _needsUpdateBadgeInfo;                                      //@synthesize _needsUpdateBadgeInfo=__needsUpdateBadgeInfo - In the implementation block
@property (assign,setter=_setNeedsUpdateBadgeView:,nonatomic) BOOL _needsUpdateBadgeView;                                      //@synthesize _needsUpdateBadgeView=__needsUpdateBadgeView - In the implementation block
@property (assign,setter=_setBadgeInfo:,nonatomic) PXAssetBadgeInfo _badgeInfo;                                                //@synthesize _badgeInfo=__badgeInfo - In the implementation block
@property (nonatomic,readonly) PXUIAssetBadgeView * _badgeView;                                                                //@synthesize _badgeView=__badgeView - In the implementation block
@property (assign,setter=_setOverContent:,nonatomic) BOOL _isOverContent;                                                      //@synthesize _isOverContent=__isOverContent - In the implementation block
@property (assign,setter=_setContentWidth:,nonatomic) double _contentWidth;                                                    //@synthesize _contentWidth=__contentWidth - In the implementation block
@property (assign,setter=_setShouldAnimateNextBadgeViewUpdate:,nonatomic) BOOL _shouldAnimateNextBadgeViewUpdate;              //@synthesize _shouldAnimateNextBadgeViewUpdate=__shouldAnimateNextBadgeViewUpdate - In the implementation block
@property (nonatomic,retain) PUAssetViewModel * assetViewModel;                                                                //@synthesize assetViewModel=_assetViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_configureBadgeView:(id)arg1 withBadgeInfo:(PXAssetBadgeInfo)arg2 isOverContent:(BOOL)arg3 contentWidth:(double)arg4 animated:(BOOL)arg5 ;
+(CGSize)badgeTileSizeForAssetViewModel:(id)arg1 contentWidth:(double)arg2 ;
+(CGSize)_badgeTileSizeForBadgeInfo:(PXAssetBadgeInfo)arg1 contentWidth:(double)arg2 ;
+(id)badgeSizeCacheKeyValueFromBadgeInfo:(PXAssetBadgeInfo)arg1 contentWidth:(double)arg2 ;
-(void)prepareForReuse;
-(id)loadView;
-(void)viewDidLoad;
-(PXUIAssetBadgeView *)_badgeView;
-(double)_contentWidth;
-(BOOL)_needsUpdate;
-(void)_setNeedsUpdate;
-(void)_updateIfNeeded;
-(void)becomeReusable;
-(void)assetBadgeView:(id)arg1 userDidSelectBadges:(unsigned long long)arg2 ;
-(void)_updateBadgeViewIfNeeded;
-(void)_invalidateBadgeView;
-(PXAssetBadgeInfo)_badgeInfo;
-(void)applyLayoutInfo:(id)arg1 ;
-(void)setAssetViewModel:(PUAssetViewModel *)arg1 ;
-(PUAssetViewModel *)assetViewModel;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)_setOverContent:(BOOL)arg1 ;
-(BOOL)_needsUpdateBadgeView;
-(void)_setNeedsUpdateBadgeView:(BOOL)arg1 ;
-(BOOL)_isOverContent;
-(void)_setBadgeInfo:(PXAssetBadgeInfo)arg1 ;
-(void)_setContentWidth:(double)arg1 ;
-(void)_invalidateBadgeInfo;
-(void)_updateBadgeInfoIfNeeded;
-(void)toggleOverCaptureBadgeAppearance;
-(BOOL)_needsUpdateBadgeInfo;
-(void)_setNeedsUpdateBadgeInfo:(BOOL)arg1 ;
-(BOOL)_shouldAnimateNextBadgeViewUpdate;
-(void)_setShouldAnimateNextBadgeViewUpdate:(BOOL)arg1 ;
@end

