/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUViewModelChange.h>

@class PUBrowsingVideoPlayerChange, PUBrowsingIrisPlayerChange, PUBrowsingAnimatedImagePlayerChange;

@interface PUAssetViewModelChange : PUViewModelChange {

	BOOL _assetChanged;
	BOOL _modelTileTransformChanged;
	BOOL _isUserTransformingTileDidChange;
	BOOL _focusValueChanged;
	BOOL _loadingStatusChanged;
	BOOL _saveProgressChanged;
	BOOL _saveStateChanged;
	BOOL _importStateChanged;
	BOOL _forceBadgesVisibleChanged;
	BOOL _badgeInfoChanged;
	BOOL _isUpdatingDisplayedContentChanged;
	BOOL _isFavoriteChanged;
	BOOL _accessoryViewVisibilityChanged;
	BOOL _contentOffsetChanged;
	BOOL _isInEditModeChanged;
	BOOL _toggleCTMChanged;
	BOOL _flippingFullSizeRenderStateChanged;
	PUBrowsingVideoPlayerChange* _videoPlayerChange;
	PUBrowsingIrisPlayerChange* _irisPlayerChange;
	PUBrowsingAnimatedImagePlayerChange* _animatedImageChange;

}

@property (assign,setter=_setAssetChanged:,nonatomic) BOOL assetChanged;                                                             //@synthesize assetChanged=_assetChanged - In the implementation block
@property (assign,setter=_setModelTileTransformChanged:,nonatomic) BOOL modelTileTransformChanged;                                   //@synthesize modelTileTransformChanged=_modelTileTransformChanged - In the implementation block
@property (assign,setter=_setUserTransformingTileDidChange:,nonatomic) BOOL isUserTransformingTileDidChange;                         //@synthesize isUserTransformingTileDidChange=_isUserTransformingTileDidChange - In the implementation block
@property (assign,setter=_setFocusValueChanged:,nonatomic) BOOL focusValueChanged;                                                   //@synthesize focusValueChanged=_focusValueChanged - In the implementation block
@property (assign,setter=_setLoadingStatusChanged:,nonatomic) BOOL loadingStatusChanged;                                             //@synthesize loadingStatusChanged=_loadingStatusChanged - In the implementation block
@property (assign,setter=_setSaveProgressChanged:,nonatomic) BOOL saveProgressChanged;                                               //@synthesize saveProgressChanged=_saveProgressChanged - In the implementation block
@property (assign,setter=_setIsUpdatingDisplayedContentChanged:,nonatomic) BOOL isUpdatingDisplayedContentChanged;                   //@synthesize isUpdatingDisplayedContentChanged=_isUpdatingDisplayedContentChanged - In the implementation block
@property (assign,setter=_setIsFavoriteChanged:,nonatomic) BOOL isFavoriteChanged;                                                   //@synthesize isFavoriteChanged=_isFavoriteChanged - In the implementation block
@property (assign,setter=_setBadgeInfoChanged:,nonatomic) BOOL badgeInfoChanged;                                                     //@synthesize badgeInfoChanged=_badgeInfoChanged - In the implementation block
@property (assign,setter=_setAccessoryViewVisibilityChanged:,nonatomic) BOOL accessoryViewVisibilityChanged;                         //@synthesize accessoryViewVisibilityChanged=_accessoryViewVisibilityChanged - In the implementation block
@property (assign,setter=_setContentOffsetChanged:,nonatomic) BOOL contentOffsetChanged;                                             //@synthesize contentOffsetChanged=_contentOffsetChanged - In the implementation block
@property (setter=_setVideoPlayerChange:,nonatomic,retain) PUBrowsingVideoPlayerChange * videoPlayerChange;                          //@synthesize videoPlayerChange=_videoPlayerChange - In the implementation block
@property (assign,setter=_setForceBadgesVisibleChanged:,nonatomic) BOOL forceBadgesVisibleChanged;                                   //@synthesize forceBadgesVisibleChanged=_forceBadgesVisibleChanged - In the implementation block
@property (setter=_setIrisPlayerChange:,nonatomic,retain) PUBrowsingIrisPlayerChange * irisPlayerChange;                             //@synthesize irisPlayerChange=_irisPlayerChange - In the implementation block
@property (assign,setter=_setIsInEditModeChanged:,nonatomic) BOOL isInEditModeChanged;                                               //@synthesize isInEditModeChanged=_isInEditModeChanged - In the implementation block
@property (assign,setter=_setFlippingFullSizeRenderStateChanged:,nonatomic) BOOL flippingFullSizeRenderStateChanged;                 //@synthesize flippingFullSizeRenderStateChanged=_flippingFullSizeRenderStateChanged - In the implementation block
@property (assign,setter=_setToggleCTMChanged:,nonatomic) BOOL toggleCTMChanged;                                                     //@synthesize toggleCTMChanged=_toggleCTMChanged - In the implementation block
@property (setter=_setAnimatedImageChange:,nonatomic,retain) PUBrowsingAnimatedImagePlayerChange * animatedImageChange;              //@synthesize animatedImageChange=_animatedImageChange - In the implementation block
@property (assign,setter=_setSaveStateChanged:,nonatomic) BOOL saveStateChanged;                                                     //@synthesize saveStateChanged=_saveStateChanged - In the implementation block
@property (assign,setter=_setImportStateChanged:,nonatomic) BOOL importStateChanged;                                                 //@synthesize importStateChanged=_importStateChanged - In the implementation block
-(BOOL)hasChanges;
-(PUBrowsingVideoPlayerChange *)videoPlayerChange;
-(PUBrowsingAnimatedImagePlayerChange *)animatedImageChange;
-(BOOL)focusValueChanged;
-(BOOL)assetChanged;
-(BOOL)loadingStatusChanged;
-(BOOL)saveProgressChanged;
-(BOOL)saveStateChanged;
-(BOOL)flippingFullSizeRenderStateChanged;
-(void)_setAnimatedImageChange:(id)arg1 ;
-(void)_setIrisPlayerChange:(id)arg1 ;
-(void)_setVideoPlayerChange:(id)arg1 ;
-(void)_setIsUpdatingDisplayedContentChanged:(BOOL)arg1 ;
-(void)_setForceBadgesVisibleChanged:(BOOL)arg1 ;
-(void)_setFlippingFullSizeRenderStateChanged:(BOOL)arg1 ;
-(void)_setToggleCTMChanged:(BOOL)arg1 ;
-(void)_setIsInEditModeChanged:(BOOL)arg1 ;
-(void)_setContentOffsetChanged:(BOOL)arg1 ;
-(void)_setAccessoryViewVisibilityChanged:(BOOL)arg1 ;
-(void)_setModelTileTransformChanged:(BOOL)arg1 ;
-(void)_setImportStateChanged:(BOOL)arg1 ;
-(void)_setSaveStateChanged:(BOOL)arg1 ;
-(void)_setSaveProgressChanged:(BOOL)arg1 ;
-(void)_setLoadingStatusChanged:(BOOL)arg1 ;
-(void)_setIsFavoriteChanged:(BOOL)arg1 ;
-(void)_setBadgeInfoChanged:(BOOL)arg1 ;
-(void)_setFocusValueChanged:(BOOL)arg1 ;
-(void)_setUserTransformingTileDidChange:(BOOL)arg1 ;
-(void)_setAssetChanged:(BOOL)arg1 ;
-(BOOL)contentOffsetChanged;
-(BOOL)modelTileTransformChanged;
-(BOOL)isUserTransformingTileDidChange;
-(BOOL)importStateChanged;
-(BOOL)forceBadgesVisibleChanged;
-(PUBrowsingIrisPlayerChange *)irisPlayerChange;
-(BOOL)badgeInfoChanged;
-(BOOL)isUpdatingDisplayedContentChanged;
-(BOOL)isFavoriteChanged;
-(BOOL)accessoryViewVisibilityChanged;
-(BOOL)isInEditModeChanged;
-(BOOL)toggleCTMChanged;
@end

