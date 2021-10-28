/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>

@protocol PUAccessoryVisibilityInteractionControllerDelegate;
@class PUBrowsingSession, UIPanGestureRecognizer, PUAssetViewModel, PXNumberAnimator, PUChangeDirectionValueFilter, PXVerticalSwipeGestureRecognizerHelper, NSString;

@interface PUAccessoryVisibilityInteractionController : NSObject <PXChangeObserver, UIGestureRecognizerDelegate, PUBrowsingViewModelChangeObserver> {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	BOOL _isUpdateScheduled;
	struct {
		BOOL contentOffset;
	}  _needsUpdateFlags;
	struct {
		BOOL respondsToCanBeginAtLocationFromProvider;
		BOOL respondsToDidEnd;
		BOOL respondsToIsLocationFromProviderInAccessoryContent;
		BOOL respondsToSetAccessoryVisibleChangeReason;
	}  _delegateFlags;
	id<PUAccessoryVisibilityInteractionControllerDelegate> _delegate;
	PUBrowsingSession* _browsingSession;
	UIPanGestureRecognizer* _panGestureRecognizer;
	PUAssetViewModel* __assetViewModel;
	PXNumberAnimator* __overridingContentOffsetY;
	PXNumberAnimator* __contentOffsetOverrideFactor;
	PUChangeDirectionValueFilter* __verticalDirectionValueFilter;
	PUChangeDirectionValueFilter* __swipeDirectionValueFilter;
	PXVerticalSwipeGestureRecognizerHelper* _verticalSwipeGestureRecognizerHelper;
	CGPoint __initialContentOffset;

}

@property (setter=_setAssetViewModel:,nonatomic,retain) PUAssetViewModel * _assetViewModel;                                                      //@synthesize _assetViewModel=__assetViewModel - In the implementation block
@property (assign,setter=_setInitialContentOffset:,nonatomic) CGPoint _initialContentOffset;                                                     //@synthesize _initialContentOffset=__initialContentOffset - In the implementation block
@property (setter=_setOverridingContentOffsetY:,nonatomic,retain) PXNumberAnimator * _overridingContentOffsetY;                                  //@synthesize _overridingContentOffsetY=__overridingContentOffsetY - In the implementation block
@property (setter=_setContentOffsetOverrideFactor:,nonatomic,retain) PXNumberAnimator * _contentOffsetOverrideFactor;                            //@synthesize _contentOffsetOverrideFactor=__contentOffsetOverrideFactor - In the implementation block
@property (setter=_setVerticalDirectionValueFilter:,nonatomic,retain) PUChangeDirectionValueFilter * _verticalDirectionValueFilter;              //@synthesize _verticalDirectionValueFilter=__verticalDirectionValueFilter - In the implementation block
@property (setter=_setSwipeDirectionValueFilter:,nonatomic,retain) PUChangeDirectionValueFilter * _swipeDirectionValueFilter;                    //@synthesize _swipeDirectionValueFilter=__swipeDirectionValueFilter - In the implementation block
@property (nonatomic,readonly) PXVerticalSwipeGestureRecognizerHelper * verticalSwipeGestureRecognizerHelper;                                    //@synthesize verticalSwipeGestureRecognizerHelper=_verticalSwipeGestureRecognizerHelper - In the implementation block
@property (assign,nonatomic,__weak) id<PUAccessoryVisibilityInteractionControllerDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PUBrowsingSession * browsingSession;                                                                                //@synthesize browsingSession=_browsingSession - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer;                                                                    //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PUAccessoryVisibilityInteractionControllerDelegate>)delegate;
-(void)setDelegate:(id<PUAccessoryVisibilityInteractionControllerDelegate>)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(BOOL)_needsUpdate;
-(CGPoint)_initialContentOffset;
-(void)_setNeedsUpdate;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_updateIfNeeded;
-(void)_performChanges:(/*^block*/id)arg1 ;
-(void)_handlePanGestureRecognizer:(id)arg1 ;
-(PUAssetViewModel *)_assetViewModel;
-(void)_handleScheduledUpdate;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)setBrowsingSession:(PUBrowsingSession *)arg1 ;
-(void)invalidateViewHostingGestureRecognizers;
-(void)_updateGestureRecognizers;
-(void)_setAccessoryVisible:(BOOL)arg1 ;
-(id)_currentAssetViewModel;
-(void)_setOverridingContentOffsetY:(id)arg1 ;
-(void)_setContentOffsetOverrideFactor:(id)arg1 ;
-(void)_setAssetViewModel:(id)arg1 ;
-(void)_invalidateContentOffset;
-(void)_updateContentOffsetIfNeeded;
-(PUBrowsingSession *)browsingSession;
-(void)_setInitialContentOffset:(CGPoint)arg1 ;
-(PXNumberAnimator *)_overridingContentOffsetY;
-(PXNumberAnimator *)_contentOffsetOverrideFactor;
-(PUChangeDirectionValueFilter *)_verticalDirectionValueFilter;
-(void)_setVerticalDirectionValueFilter:(id)arg1 ;
-(PUChangeDirectionValueFilter *)_swipeDirectionValueFilter;
-(void)_setSwipeDirectionValueFilter:(id)arg1 ;
-(PXVerticalSwipeGestureRecognizerHelper *)verticalSwipeGestureRecognizerHelper;
@end
