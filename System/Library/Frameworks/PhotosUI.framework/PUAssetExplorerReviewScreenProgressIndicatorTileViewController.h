/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PUAssetSharedViewModelChangeObserver.h>
#import <libobjc.A.dylib/PUBrowsingVideoPlayerChangeObserver.h>

@class PUAssetSharedViewModel, PUBrowsingVideoPlayer, PUOperationStatus, PLRoundProgressView, UIButton, UILabel, NSString;

@interface PUAssetExplorerReviewScreenProgressIndicatorTileViewController : PUTileViewController <PUAssetSharedViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver> {

	BOOL __needsUpdateProgressViewStyle;
	BOOL __needsUpdateStatus;
	BOOL __needsUpdateStatusViews;
	BOOL __isProgressViewVisible;
	PUAssetSharedViewModel* _assetSharedViewModel;
	PUBrowsingVideoPlayer* _videoPlayer;
	long long __progressViewStyle;
	PUOperationStatus* __status;
	PLRoundProgressView* __progressView;
	UIButton* __errorButton;
	UILabel* __debugProgressLabel;

}

@property (assign,setter=_setNeedsUpdateProgressViewStyle:,nonatomic) BOOL _needsUpdateProgressViewStyle;              //@synthesize _needsUpdateProgressViewStyle=__needsUpdateProgressViewStyle - In the implementation block
@property (assign,setter=_setNeedsUpdateStatus:,nonatomic) BOOL _needsUpdateStatus;                                    //@synthesize _needsUpdateStatus=__needsUpdateStatus - In the implementation block
@property (assign,setter=_setNeedsUpdateStatusViews:,nonatomic) BOOL _needsUpdateStatusViews;                          //@synthesize _needsUpdateStatusViews=__needsUpdateStatusViews - In the implementation block
@property (assign,setter=_setProgressViewStyle:,nonatomic) long long _progressViewStyle;                               //@synthesize _progressViewStyle=__progressViewStyle - In the implementation block
@property (setter=_setStatus:,nonatomic,copy) PUOperationStatus * _status;                                             //@synthesize _status=__status - In the implementation block
@property (setter=_setProgressView:,nonatomic,retain) PLRoundProgressView * _progressView;                             //@synthesize _progressView=__progressView - In the implementation block
@property (assign,setter=_setProgressViewVisible:,nonatomic) BOOL _isProgressViewVisible;                              //@synthesize _isProgressViewVisible=__isProgressViewVisible - In the implementation block
@property (setter=_setErrorButton:,nonatomic,retain) UIButton * _errorButton;                                          //@synthesize _errorButton=__errorButton - In the implementation block
@property (setter=_setDebugProgressLabel:,nonatomic,retain) UILabel * _debugProgressLabel;                             //@synthesize _debugProgressLabel=__debugProgressLabel - In the implementation block
@property (nonatomic,retain) PUAssetSharedViewModel * assetSharedViewModel;                                            //@synthesize assetSharedViewModel=_assetSharedViewModel - In the implementation block
@property (nonatomic,retain) PUBrowsingVideoPlayer * videoPlayer;                                                      //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_loadErrorIcon;
+(CGSize)progressIndicatorTileSize;
-(PUOperationStatus *)_status;
-(void)viewDidLoad;
-(PLRoundProgressView *)_progressView;
-(long long)_progressViewStyle;
-(BOOL)_needsUpdate;
-(void)_setStatus:(id)arg1 ;
-(void)_setNeedsUpdate;
-(void)setVideoPlayer:(PUBrowsingVideoPlayer *)arg1 ;
-(PUBrowsingVideoPlayer *)videoPlayer;
-(void)_updateIfNeeded;
-(void)_updateSubviewOrdering;
-(void)becomeReusable;
-(void)_invalidateStatus;
-(void)applyLayoutInfo:(id)arg1 ;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)setAssetSharedViewModel:(PUAssetSharedViewModel *)arg1 ;
-(void)_setProgressViewStyle:(long long)arg1 ;
-(void)_setProgressViewVisible:(BOOL)arg1 ;
-(void)_setProgressViewVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_handleErrorButtonTap:(id)arg1 ;
-(void)_invalidateProgressViewStyle;
-(void)_updateProgressViewStyleIfNeeded;
-(void)_updateStatusIfNeeded;
-(void)_invalidateStatusViews;
-(void)_updateStatusViewsIfNeeded;
-(void)_handleAssetSharedViewModel:(id)arg1 didChange:(id)arg2 ;
-(void)_handleVideoPlayer:(id)arg1 didChange:(id)arg2 ;
-(PUAssetSharedViewModel *)assetSharedViewModel;
-(BOOL)_needsUpdateProgressViewStyle;
-(void)_setNeedsUpdateProgressViewStyle:(BOOL)arg1 ;
-(BOOL)_needsUpdateStatus;
-(void)_setNeedsUpdateStatus:(BOOL)arg1 ;
-(BOOL)_needsUpdateStatusViews;
-(void)_setNeedsUpdateStatusViews:(BOOL)arg1 ;
-(void)_setProgressView:(id)arg1 ;
-(BOOL)_isProgressViewVisible;
-(UIButton *)_errorButton;
-(void)_setErrorButton:(id)arg1 ;
-(UILabel *)_debugProgressLabel;
-(void)_setDebugProgressLabel:(id)arg1 ;
@end

