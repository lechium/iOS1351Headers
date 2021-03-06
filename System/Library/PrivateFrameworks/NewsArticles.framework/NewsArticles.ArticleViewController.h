/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:07 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsArticles/NewsArticles-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>
#import <libobjc.A.dylib/NAZoomable.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/NUArticleHardPaywallPresentationReporting.h>
#import <libobjc.A.dylib/NAArticleFooterDelegate.h>
#import <libobjc.A.dylib/NUArticleViewControllerLoadingListener.h>
#import <libobjc.A.dylib/NULoadingDelegate.h>
#import <libobjc.A.dylib/TSTabBarSplitViewAutoObserver.h>

@class NSArray;

@interface NewsArticles.ArticleViewController : UIViewController <FCBundleSubscriptionChangeObserver, NAZoomable, UIScrollViewDelegate, NUArticleHardPaywallPresentationReporting, NAArticleFooterDelegate, NUArticleViewControllerLoadingListener, NULoadingDelegate, TSTabBarSplitViewAutoObserver> {

	 model;
	 observableScrollView;
	 modalHostStyle;
	 isImpressionable;
	 pageDelegate;
	 contentBackgroundColor;
	 headline;
	 styler;
	 eventHandler;
	 articleViewController;
	 presentationContext;
	 keyCommandManager;
	 documentSectionBlueprintProvider;
	 hardPaywallViewController;
	 deferredHardPaywallViewController;
	 footerProvider;
	 footers;
	 headerProvider;
	 urlHandler;
	 paywallPreparationEventManager;
	 deferredHardPaywallIsVisible;
	 deferredHardPaywallHeightProvider;
	 destinationViewSize;
	 viewingSessionID;
	 scrollDebounce;

}

@property (readonly,nonatomic) NSArray * keyCommands; 
@property (readonly,nonatomic) BOOL canBecomeFirstResponder; 
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(void)zoomIn;
-(void)zoomOut;
-(BOOL)canZoomIn;
-(BOOL)canZoomOut;
-(void)resetZoom;
-(BOOL)canIncreaseTextSize;
-(BOOL)canDecreaseTextSize;
-(void)increaseTextSize;
-(void)decreaseTextSize;
-(BOOL)canResetZoom;
-(BOOL)shouldOccludeAccessibilityElement:(id)arg1 ;
-(BOOL)accessibilityShouldScroll:(id)arg1 defaultValue:(BOOL)arg2 ;
-(BOOL)accessibilityShouldScroll:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)isPreviewing;
-(BOOL)isShowingHardPaywall;
-(void)footerNeedsLayout:(id)arg1 ;
-(void)footerResignsAsFirstResponder:(id)arg1 ;
-(void)didLoadArticle:(id)arg1 withContext:(id)arg2 ;
-(void)loadingDidFinishWithError:(id)arg1 ;
-(void)tabBarSplitViewDidChangeFocusToFocus:(long long)arg1 action:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)resignFirstResponder;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(NSArray *)keyCommands;
-(void)handleKeyCommandWithKeyCommand:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

