/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:50 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/SKUINavigationController.h>
#import <libobjc.A.dylib/SKUIScrollingTabBarBottomInsetAwareContent.h>
#import <libobjc.A.dylib/SKUIObservableNavigationStack.h>

@protocol SKUINavigationStackObserver;
@class NSString;

@interface SKUIScrollingTabNavigationController : SKUINavigationController <SKUIScrollingTabBarBottomInsetAwareContent, SKUIObservableNavigationStack> {

	id<SKUINavigationStackObserver> _navigationStackObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SKUINavigationStackObserver> navigationStackObserver;                                 //@synthesize navigationStackObserver=_navigationStackObserver - In the implementation block
@property (assign,getter=isShowingNavigationStackRootContent,nonatomic) BOOL showingNavigationStackRootContent; 
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(double)_scrollViewBottomContentInsetForViewController:(id)arg1 ;
-(void)scrollingTabBarBottomInsetAdjustmentDidChange;
-(void)popToNavigationStackRootContentAnimated:(BOOL)arg1 withBehavior:(long long)arg2 ;
-(id<SKUINavigationStackObserver>)navigationStackObserver;
-(void)setNavigationStackObserver:(id<SKUINavigationStackObserver>)arg1 ;
-(BOOL)isShowingNavigationStackRootContent;
-(void)_observedNavigationStackDidChange;
@end

