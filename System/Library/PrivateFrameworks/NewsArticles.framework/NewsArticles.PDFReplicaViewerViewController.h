/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:06 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TSTabBarSplitViewAutoObserver.h>

@class NSArray;

@interface NewsArticles.PDFReplicaViewerViewController : UIViewController <TSTabBarSplitViewAutoObserver> {

	 styler;
	 renderer;
	 eventHandler;
	 sessionManager;
	 issue;
	 pageViewController;
	 pageBlueprintProvider;
	 toolbarCoverFactory;
	 paywallFactory;
	 navigationItemStyle;
	 titleView;
	 paywallViewController;
	 paidAccessChecker;
	 eventManager;
	 featureAvailability;
	 sharingActivityItemFactory;
	 subscriptionController;
	 backButton;
	 nextButton;
	 barVisibilityAnimator;
	 pageSheetPresentationObserver;

}

@property (readonly,nonatomic) NSArray * keyCommands; 
@property (readonly,nonatomic) BOOL prefersStatusBarHidden; 
@property (readonly,nonatomic) long long preferredStatusBarUpdateAnimation; 
@property (readonly,nonatomic) BOOL prefersHomeIndicatorAutoHidden; 
-(void)tabBarSplitViewWillChangeDisplayModeToDisplayMode:(long long)arg1 ;
-(NSArray *)keyCommands;
-(void)previousPageKeyCommand;
-(void)nextPageKeyCommand;
-(void)closeIssueKeyCommand;
-(void)showTableOfContentsKeyCommand;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)preferredStatusBarUpdateAnimation;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(BOOL)prefersStatusBarHidden;
@end

