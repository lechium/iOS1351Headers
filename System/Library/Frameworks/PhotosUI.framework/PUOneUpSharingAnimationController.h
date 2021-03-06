/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UISheetAnimationController.h>
#import <libobjc.A.dylib/PUOneUpAssetTransition.h>

@protocol PUOneUpAssetTransitionViewController, PUOneUpSharingAnimationControllerDelegate;
@class PUOneUpPhotosSharingTransitionContext, UIViewController, NSString;

@interface PUOneUpSharingAnimationController : _UISheetAnimationController <PUOneUpAssetTransition> {

	BOOL _interruptibleAnimatorForTransitionWasCalled;
	PUOneUpPhotosSharingTransitionContext* _oneUpTransitionContext;
	UIViewController*<PUOneUpAssetTransitionViewController> _presentingViewController;
	id<PUOneUpSharingAnimationControllerDelegate> _delegate;

}

@property (nonatomic,readonly) PUOneUpPhotosSharingTransitionContext * oneUpTransitionContext;                                       //@synthesize oneUpTransitionContext=_oneUpTransitionContext - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController*<PUOneUpAssetTransitionViewController> presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic,__weak) id<PUOneUpSharingAnimationControllerDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(id)init;
-(id<PUOneUpSharingAnimationControllerDelegate>)delegate;
-(void)setDelegate:(id<PUOneUpSharingAnimationControllerDelegate>)arg1 ;
-(UIViewController*<PUOneUpAssetTransitionViewController>)presentingViewController;
-(double)transitionDuration:(id)arg1 ;
-(id)interruptibleAnimatorForTransition:(id)arg1 ;
-(id)initWithTransitionContext:(id)arg1 presentingViewController:(id)arg2 ;
-(void)_installTransitioningBadgeViewsForAssetTransitionInfo:(id)arg1 inTransitioningView:(id)arg2 ;
-(void)_configurePhotoView:(id)arg1 withContentHelper:(id)arg2 ;
-(PUOneUpPhotosSharingTransitionContext *)oneUpTransitionContext;
@end

