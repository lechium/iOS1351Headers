/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class NSArray;

@interface VideosUI.PaginationTemplateController : UIViewController {

	 bottomMarginForPageControl;
	 templateModel;
	 lastContentOffset;
	 lastScrollDirection;
	 currentPage;
	 $__lazy_storage_$_imageProxyQueue;
	 $__lazy_storage_$_animator;
	 $__lazy_storage_$_rightSwipeGestureRecognizer;
	 $__lazy_storage_$_leftSwipeGestureRecognizer;
	 playbackEventSubscriber;
	 currentPageView;
	 $__lazy_storage_$_reusableViews;
	 $__lazy_storage_$_pageControl;

}

@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
-(void)leftSwipped:(id)arg1 ;
-(void)rightSwipped:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)preferredFocusEnvironments;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
@end
