/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@protocol TKApplicationViewControllerDelegate;
@class NSURL, NSString, UIViewController;

@interface TKApplicationViewController : UIViewController {

	NSURL* _bundleURL;
	NSString* _viewName;
	UIViewController* _childViewController;
	UIViewController* _loadingViewController;
	id<TKApplicationViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) UIViewController * childViewController;                               //@synthesize childViewController=_childViewController - In the implementation block
@property (nonatomic,readonly) NSURL * bundleURL;                                                  //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,readonly) NSString * viewName;                                                //@synthesize viewName=_viewName - In the implementation block
@property (nonatomic,retain) UIViewController * loadingViewController;                             //@synthesize loadingViewController=_loadingViewController - In the implementation block
@property (assign,nonatomic,__weak) id<TKApplicationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)applicationViewController:(id)arg1 ;
-(id<TKApplicationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<TKApplicationViewControllerDelegate>)arg1 ;
-(NSURL *)bundleURL;
-(NSString *)viewName;
-(void)viewDidLoad;
-(UIViewController *)childViewController;
-(void)setChildViewController:(UIViewController *)arg1 ;
-(UIViewController *)loadingViewController;
-(void)setLoadingViewController:(UIViewController *)arg1 ;
-(void)dismissApplicationControllerAnimated:(BOOL)arg1 ;
-(id)initWithBundleURL:(id)arg1 viewName:(id)arg2 delegate:(/*^block*/id)arg3 ;
-(BOOL)handleApplicationControllerError;
-(void)didLoadViewController:(id)arg1 ;
-(id)initWithBundleURL:(id)arg1 loadPage:(id)arg2 ;
-(id)initWithBundleURL:(id)arg1 loadPage:(id)arg2 withData:(id)arg3 ;
-(id)initWithBundleURL:(id)arg1 loadPage:(id)arg2 withDataRequest:(id)arg3 ;
@end

