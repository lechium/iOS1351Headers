/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PUInteractiveDismissalControllerDelegate, PUInterruptibleViewControllerTransition;
#import <PhotosUI/PhotosUI-Structs.h>
@class UIViewController, UIView, PUTilingView, PUTileController;

@interface PUInteractiveDismissalController : NSObject {

	SCD_Struct_PU13 _delegateFlags;
	BOOL _isHandlingDismissalInteraction;
	BOOL __needsUpdateGestureRecognizers;
	id<PUInteractiveDismissalControllerDelegate> _delegate;
	UIViewController* __viewController;
	UIView* __viewHostingGestureRecognizers;
	id<PUInterruptibleViewControllerTransition> __interruptibleViewControllerTransition;

}

@property (assign,setter=_setViewController:,nonatomic,__weak) UIViewController * _viewController;                                                                              //@synthesize _viewController=__viewController - In the implementation block
@property (setter=_setViewHostingGestureRecognizers:,nonatomic,retain) UIView * _viewHostingGestureRecognizers;                                                                 //@synthesize _viewHostingGestureRecognizers=__viewHostingGestureRecognizers - In the implementation block
@property (setter=_setInterruptibleViewControllerTransition:,nonatomic,retain) id<PUInterruptibleViewControllerTransition> _interruptibleViewControllerTransition;              //@synthesize _interruptibleViewControllerTransition=__interruptibleViewControllerTransition - In the implementation block
@property (assign,setter=_setNeedsUpdateGestureRecognizers:,nonatomic) BOOL _needsUpdateGestureRecognizers;                                                                     //@synthesize _needsUpdateGestureRecognizers=__needsUpdateGestureRecognizers - In the implementation block
@property (nonatomic,readonly) PUTilingView * tilingView; 
@property (nonatomic,readonly) PUTileController * designatedTileController; 
@property (nonatomic,readonly) id<PUTilingViewControllerTransition> tilingViewControllerTransition; 
@property (assign,nonatomic,__weak) id<PUInteractiveDismissalControllerDelegate> delegate;                                                                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isHandlingDismissalInteraction;                                                                                                             //@synthesize isHandlingDismissalInteraction=_isHandlingDismissalInteraction - In the implementation block
-(id<PUInteractiveDismissalControllerDelegate>)delegate;
-(void)setDelegate:(id<PUInteractiveDismissalControllerDelegate>)arg1 ;
-(UIViewController *)_viewController;
-(void)_setViewController:(id)arg1 ;
-(void)_updateIfNeeded;
-(void)updateGestureRecognizersWithHostingView:(id)arg1 ;
-(void)_invalidateGestureRecognizers;
-(void)_updateGestureRecognizersIfNeeded;
-(BOOL)_needsUpdateGestureRecognizers;
-(void)_setNeedsUpdateGestureRecognizers:(BOOL)arg1 ;
-(PUTilingView *)tilingView;
-(void)invalidateDelegateData;
-(PUTileController *)designatedTileController;
-(id<PUTilingViewControllerTransition>)tilingViewControllerTransition;
-(BOOL)canBeginDismissalAtLocationFromProvider:(id)arg1 ;
-(long long)_preferredDismissalTransitionType;
-(void)beginDismissal;
-(void)updateDismissalWithInteractionProgress:(double)arg1 interactionWillFinish:(BOOL)arg2 ;
-(void)endDismissal:(BOOL)arg1 ;
-(void)_invalidateViewController;
-(void)_updateViewControllerIfNeeded;
-(void)_invalidateViewHostingGestureRecognizers;
-(void)_updateViewHostingGestureRecognizersIfNeeded;
-(void)_invalidateInterruptibleViewControllerTransition;
-(void)_updateInterruptibleViewControllerTransitionIfNeeded;
-(BOOL)isHandlingDismissalInteraction;
-(UIView *)_viewHostingGestureRecognizers;
-(void)_setViewHostingGestureRecognizers:(id)arg1 ;
-(id<PUInterruptibleViewControllerTransition>)_interruptibleViewControllerTransition;
-(void)_setInterruptibleViewControllerTransition:(id)arg1 ;
@end

