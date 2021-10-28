/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PUBarsControllerDelegate;
#import <PhotosUI/PhotosUI-Structs.h>
@class UIViewController;

@interface PUBarsController : NSObject {

	SCD_Struct_PU13 _delegateFlags;
	BOOL __needsUpdateBars;
	BOOL __needsUpdateGestureRecognizers;
	BOOL __needsUpdateContentGuideInsets;
	BOOL __isUpdateScheduled;
	id<PUBarsControllerDelegate> _delegate;
	long long __updateBarsDisabledCount;
	UIViewController* _viewController;
	UIEdgeInsets _contentGuideInsets;

}

@property (assign,setter=_setNeedsUpdateBars:,nonatomic) BOOL _needsUpdateBars;                                          //@synthesize _needsUpdateBars=__needsUpdateBars - In the implementation block
@property (assign,setter=_setNeedsUpdateGestureRecognizers:,nonatomic) BOOL _needsUpdateGestureRecognizers;              //@synthesize _needsUpdateGestureRecognizers=__needsUpdateGestureRecognizers - In the implementation block
@property (assign,setter=_setNeedsUpdateContentGuideInsets:,nonatomic) BOOL _needsUpdateContentGuideInsets;              //@synthesize _needsUpdateContentGuideInsets=__needsUpdateContentGuideInsets - In the implementation block
@property (assign,setter=_setUpdateScheduled:,nonatomic) BOOL _isUpdateScheduled;                                        //@synthesize _isUpdateScheduled=__isUpdateScheduled - In the implementation block
@property (assign,setter=_setUpdateBarsDisabledCount:,nonatomic) long long _updateBarsDisabledCount;                     //@synthesize _updateBarsDisabledCount=__updateBarsDisabledCount - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                                                   //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentGuideInsets;                                                            //@synthesize contentGuideInsets=_contentGuideInsets - In the implementation block
@property (assign,nonatomic,__weak) id<PUBarsControllerDelegate> delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL prefersStatusBarHidden; 
@property (nonatomic,readonly) BOOL wantsNavigationBarVisible; 
@property (nonatomic,readonly) BOOL wantsToolbarVisible; 
@property (nonatomic,readonly) long long preferredBarStyle; 
-(id)init;
-(id<PUBarsControllerDelegate>)delegate;
-(void)setDelegate:(id<PUBarsControllerDelegate>)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(BOOL)prefersStatusBarHidden;
-(BOOL)_needsUpdate;
-(void)updateIfNeeded;
-(void)_setNeedsUpdate;
-(void)invalidateBars;
-(void)_updateBarsIfNeeded;
-(void)updateBars;
-(void)_updateNowIfNeeded;
-(BOOL)_isUpdateScheduled;
-(void)_setUpdateScheduled:(BOOL)arg1 ;
-(BOOL)wantsToolbarVisible;
-(UIEdgeInsets)contentGuideInsets;
-(void)setContentGuideInsets:(UIEdgeInsets)arg1 ;
-(void)invalidateViewHostingGestureRecognizers;
-(void)invalidateViewControllerView;
-(BOOL)wantsNavigationBarVisible;
-(long long)preferredBarStyle;
-(BOOL)isLocationFromProviderInBarsArea:(id)arg1 ;
-(void)updateGestureRecognizersWithHostingView:(id)arg1 ;
-(void)updateContentGuideInsets;
-(void)_invalidateGestureRecognizers;
-(void)_updateGestureRecognizersIfNeeded;
-(void)invalidateContentGuideInsets;
-(void)_updateContentGuideInsetsIfNeeded;
-(BOOL)_isUpdateBarsDisabled;
-(void)disableUpdateBarsForDuration:(double)arg1 ;
-(void)_reenableUpdateBars;
-(BOOL)_needsUpdateBars;
-(void)_setNeedsUpdateBars:(BOOL)arg1 ;
-(BOOL)_needsUpdateGestureRecognizers;
-(void)_setNeedsUpdateGestureRecognizers:(BOOL)arg1 ;
-(BOOL)_needsUpdateContentGuideInsets;
-(void)_setNeedsUpdateContentGuideInsets:(BOOL)arg1 ;
-(long long)_updateBarsDisabledCount;
-(void)_setUpdateBarsDisabledCount:(long long)arg1 ;
@end
