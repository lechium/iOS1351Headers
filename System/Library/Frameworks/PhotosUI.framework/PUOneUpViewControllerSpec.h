/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUViewControllerSpec.h>

@class UIColor, PUOneUpViewControllerSpecChange;

@interface PUOneUpViewControllerSpec : PUViewControllerSpec {

	BOOL _isChromeVisible;
	BOOL _isPresentedForPreview;
	BOOL _isShowingPlayPauseButtonInBars;
	BOOL _shouldPlaceButtonsInNavigationBar;
	BOOL _shouldUseCompactTitleView;
	BOOL _shouldUseContentGuideInsets;
	BOOL _shouldUseUserTransformTiles;
	BOOL _shouldDisplayBadges;
	BOOL _shouldDisplayAssetExplorerReviewScreenBadges;
	BOOL _shouldDisplayPlayButtons;
	BOOL _shouldDisplayProgressIndicators;
	BOOL _shouldAutoplayOnAppear;
	BOOL _shouldDisplayBufferingIndicators;
	BOOL _canDisplayLoadingIndicators;
	BOOL _shouldDisplayEmptyPlaceholder;
	BOOL _shouldUseCompactCommentsTitle;
	BOOL _shouldCounterrotateReviewScreenBars;
	BOOL _shouldPinContentToTop;
	BOOL _shouldLayoutReviewScreenControlBarVertically;
	BOOL _shouldPlaceScrubberInScrubberBar;
	unsigned long long _options;
	double _maximumToolbarHeight;
	double _maximumAccessoryToolbarHeight;
	UIColor* _backgroundColorOverride;
	long long _tileInitialContentMode;
	CGSize _progressIndicatorSize;
	CGSize _bufferingIndicatorSize;

}

@property (nonatomic,readonly) PUOneUpViewControllerSpecChange * currentChange; 
@property (assign,setter=_setShouldPlaceButtonsInNavigationBar:,nonatomic) BOOL shouldPlaceButtonsInNavigationBar;                                    //@synthesize shouldPlaceButtonsInNavigationBar=_shouldPlaceButtonsInNavigationBar - In the implementation block
@property (assign,setter=_setShouldUseCompactTitleView:,nonatomic) BOOL shouldUseCompactTitleView;                                                    //@synthesize shouldUseCompactTitleView=_shouldUseCompactTitleView - In the implementation block
@property (assign,setter=_setMaximumToolbarHeight:,nonatomic) double maximumToolbarHeight;                                                            //@synthesize maximumToolbarHeight=_maximumToolbarHeight - In the implementation block
@property (assign,setter=_setMaximumAccessoryToolbarHeight:,nonatomic) double maximumAccessoryToolbarHeight;                                          //@synthesize maximumAccessoryToolbarHeight=_maximumAccessoryToolbarHeight - In the implementation block
@property (assign,setter=_setShouldUseContentGuideInsets:,nonatomic) BOOL shouldUseContentGuideInsets;                                                //@synthesize shouldUseContentGuideInsets=_shouldUseContentGuideInsets - In the implementation block
@property (assign,setter=_setShouldUseUserTransformTiles:,nonatomic) BOOL shouldUseUserTransformTiles;                                                //@synthesize shouldUseUserTransformTiles=_shouldUseUserTransformTiles - In the implementation block
@property (assign,setter=_setShouldAutoplayOnAppear:,nonatomic) BOOL shouldAutoplayOnAppear;                                                          //@synthesize shouldAutoplayOnAppear=_shouldAutoplayOnAppear - In the implementation block
@property (assign,setter=_setShouldDisplayBadges:,nonatomic) BOOL shouldDisplayBadges;                                                                //@synthesize shouldDisplayBadges=_shouldDisplayBadges - In the implementation block
@property (assign,setter=_setShouldDisplayAssetExplorerReviewScreenBadges:,nonatomic) BOOL shouldDisplayAssetExplorerReviewScreenBadges;              //@synthesize shouldDisplayAssetExplorerReviewScreenBadges=_shouldDisplayAssetExplorerReviewScreenBadges - In the implementation block
@property (assign,setter=_setShouldDisplayPlayButtons:,nonatomic) BOOL shouldDisplayPlayButtons;                                                      //@synthesize shouldDisplayPlayButtons=_shouldDisplayPlayButtons - In the implementation block
@property (assign,setter=_setShouldDisplayProgressIndicators:,nonatomic) BOOL shouldDisplayProgressIndicators;                                        //@synthesize shouldDisplayProgressIndicators=_shouldDisplayProgressIndicators - In the implementation block
@property (assign,setter=_setShouldDisplayBufferingIndicators:,nonatomic) BOOL shouldDisplayBufferingIndicators;                                      //@synthesize shouldDisplayBufferingIndicators=_shouldDisplayBufferingIndicators - In the implementation block
@property (assign,setter=_setCanDisplayLoadingIndicators:,nonatomic) BOOL canDisplayLoadingIndicators;                                                //@synthesize canDisplayLoadingIndicators=_canDisplayLoadingIndicators - In the implementation block
@property (assign,setter=_setShouldDisplayEmptyPlaceholder:,nonatomic) BOOL shouldDisplayEmptyPlaceholder;                                            //@synthesize shouldDisplayEmptyPlaceholder=_shouldDisplayEmptyPlaceholder - In the implementation block
@property (setter=_setBackgroundColorOverride:,nonatomic,retain) UIColor * backgroundColorOverride;                                                   //@synthesize backgroundColorOverride=_backgroundColorOverride - In the implementation block
@property (assign,setter=_setProgressIndicatorSize:,nonatomic) CGSize progressIndicatorSize;                                                          //@synthesize progressIndicatorSize=_progressIndicatorSize - In the implementation block
@property (assign,setter=_setBufferingIndicatorSize:,nonatomic) CGSize bufferingIndicatorSize;                                                        //@synthesize bufferingIndicatorSize=_bufferingIndicatorSize - In the implementation block
@property (assign,setter=_setShouldUseCompactCommentsTitle:,nonatomic) BOOL shouldUseCompactCommentsTitle;                                            //@synthesize shouldUseCompactCommentsTitle=_shouldUseCompactCommentsTitle - In the implementation block
@property (assign,setter=_setTileInitialContentMode:,nonatomic) long long tileInitialContentMode;                                                     //@synthesize tileInitialContentMode=_tileInitialContentMode - In the implementation block
@property (assign,setter=_setShouldCounterrotateReviewScreenBars:,nonatomic) BOOL shouldCounterrotateReviewScreenBars;                                //@synthesize shouldCounterrotateReviewScreenBars=_shouldCounterrotateReviewScreenBars - In the implementation block
@property (assign,setter=_setShouldPinContentToTop:,nonatomic) BOOL shouldPinContentToTop;                                                            //@synthesize shouldPinContentToTop=_shouldPinContentToTop - In the implementation block
@property (assign,setter=_setShouldLayoutReviewScreenControlBarVertically:,nonatomic) BOOL shouldLayoutReviewScreenControlBarVertically;              //@synthesize shouldLayoutReviewScreenControlBarVertically=_shouldLayoutReviewScreenControlBarVertically - In the implementation block
@property (assign,setter=_setShouldPlaceScrubberInScrubberBar:,nonatomic) BOOL shouldPlaceScrubberInScrubberBar;                                      //@synthesize shouldPlaceScrubberInScrubberBar=_shouldPlaceScrubberInScrubberBar - In the implementation block
@property (assign,setter=setChromeVisible:,nonatomic) BOOL isChromeVisible;                                                                           //@synthesize isChromeVisible=_isChromeVisible - In the implementation block
@property (assign,setter=setPresentedForPreview:,nonatomic) BOOL isPresentedForPreview;                                                               //@synthesize isPresentedForPreview=_isPresentedForPreview - In the implementation block
@property (assign,setter=setShowingPlayPauseButtonInBars:,nonatomic) BOOL isShowingPlayPauseButtonInBars;                                             //@synthesize isShowingPlayPauseButtonInBars=_isShowingPlayPauseButtonInBars - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                                                                            //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL allowAccessoryVisibility; 
@property (nonatomic,readonly) BOOL allowSuggestions; 
@property (nonatomic,readonly) BOOL allowDoneButton; 
@property (nonatomic,readonly) BOOL allowTapOnTitle; 
@property (nonatomic,readonly) BOOL shouldShowTitleView; 
@property (nonatomic,readonly) BOOL shouldDisplaySelectionIndicators; 
@property (nonatomic,readonly) BOOL shouldDisplayAssetExplorerReviewScreenProgressIndicators; 
@property (nonatomic,readonly) CGSize assetExplorerReviewScreenProgressIndicatorSize; 
@property (nonatomic,readonly) BOOL shouldDisplayReviewScreenBars; 
@property (nonatomic,readonly) BOOL shouldDisableNavigationBarsVisibility; 
@property (nonatomic,readonly) CGSize playButtonSize; 
-(unsigned long long)options;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)updateIfNeeded;
-(UIColor *)backgroundColorOverride;
-(CGSize)playButtonSize;
-(PUOneUpViewControllerSpecChange *)currentChange;
-(BOOL)shouldDisplayEmptyPlaceholder;
-(BOOL)isChromeVisible;
-(void)setChromeVisible:(BOOL)arg1 ;
-(BOOL)shouldPlaceButtonsInNavigationBar;
-(BOOL)shouldUseCompactTitleView;
-(BOOL)shouldUseCompactCommentsTitle;
-(double)maximumToolbarHeight;
-(double)maximumAccessoryToolbarHeight;
-(BOOL)shouldShowTitleView;
-(BOOL)allowTapOnTitle;
-(BOOL)shouldPlaceScrubberInScrubberBar;
-(void)setPresentedForPreview:(BOOL)arg1 ;
-(CGSize)progressIndicatorSize;
-(CGSize)assetExplorerReviewScreenProgressIndicatorSize;
-(CGSize)bufferingIndicatorSize;
-(BOOL)canDisplayLoadingIndicators;
-(long long)tileInitialContentMode;
-(BOOL)shouldPinContentToTop;
-(BOOL)isPresentedForPreview;
-(BOOL)shouldDisplaySelectionIndicators;
-(BOOL)shouldLayoutReviewScreenControlBarVertically;
-(BOOL)shouldDisableNavigationBarsVisibility;
-(BOOL)allowDoneButton;
-(void)setShowingPlayPauseButtonInBars:(BOOL)arg1 ;
-(BOOL)shouldDisplayReviewScreenBars;
-(BOOL)shouldDisplayAssetExplorerReviewScreenProgressIndicators;
-(BOOL)shouldDisplayAssetExplorerReviewScreenBadges;
-(BOOL)shouldDisplayBufferingIndicators;
-(BOOL)shouldDisplayProgressIndicators;
-(BOOL)shouldDisplayPlayButtons;
-(BOOL)shouldUseUserTransformTiles;
-(BOOL)shouldDisplayBadges;
-(BOOL)shouldUseContentGuideInsets;
-(BOOL)shouldCounterrotateReviewScreenBars;
-(BOOL)shouldAutoplayOnAppear;
-(BOOL)allowSuggestions;
-(BOOL)allowAccessoryVisibility;
-(id)newSpecChange;
-(BOOL)_isAssetExplorerReviewScreen;
-(BOOL)_shouldForceBlackBackground;
-(void)_setShouldPlaceButtonsInNavigationBar:(BOOL)arg1 ;
-(void)_setShouldUseCompactTitleView:(BOOL)arg1 ;
-(void)_setShouldUseContentGuideInsets:(BOOL)arg1 ;
-(void)_setShouldUseUserTransformTiles:(BOOL)arg1 ;
-(void)_setShouldAutoplayOnAppear:(BOOL)arg1 ;
-(void)_setShouldDisplayBadges:(BOOL)arg1 ;
-(void)_setShouldDisplayAssetExplorerReviewScreenBadges:(BOOL)arg1 ;
-(void)_setShouldDisplayPlayButtons:(BOOL)arg1 ;
-(void)_setShouldDisplayProgressIndicators:(BOOL)arg1 ;
-(void)_setShouldDisplayBufferingIndicators:(BOOL)arg1 ;
-(void)_setCanDisplayLoadingIndicators:(BOOL)arg1 ;
-(void)_setShouldDisplayEmptyPlaceholder:(BOOL)arg1 ;
-(void)_setBackgroundColorOverride:(id)arg1 ;
-(void)_setProgressIndicatorSize:(CGSize)arg1 ;
-(void)_setBufferingIndicatorSize:(CGSize)arg1 ;
-(void)_setShouldUseCompactCommentsTitle:(BOOL)arg1 ;
-(void)_setTileInitialContentMode:(long long)arg1 ;
-(void)_setShouldCounterrotateReviewScreenBars:(BOOL)arg1 ;
-(void)_setShouldPinContentToTop:(BOOL)arg1 ;
-(void)_setShouldLayoutReviewScreenControlBarVertically:(BOOL)arg1 ;
-(void)_setShouldPlaceScrubberInScrubberBar:(BOOL)arg1 ;
-(BOOL)isShowingPlayPauseButtonInBars;
-(void)_setMaximumToolbarHeight:(double)arg1 ;
-(void)_setMaximumAccessoryToolbarHeight:(double)arg1 ;
@end

