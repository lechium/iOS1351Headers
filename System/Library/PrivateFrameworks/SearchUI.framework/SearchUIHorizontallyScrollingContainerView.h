/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchUI/SearchUI-Structs.h>
#import <AppSupportUI/NUIContentScrollView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol SearchUIFeedbackDelegate;
@class NSArray, NUIContainerStackView, SearchUIHorizontallyScrollingMoreResultsButtonController, NSMutableSet, NSMapTable, UIViewController, NSString;

@interface SearchUIHorizontallyScrollingContainerView : NUIContentScrollView <NUIContainerViewDelegate, UIScrollViewDelegate> {

	id<SearchUIFeedbackDelegate> _feedbackDelegate;
	NSArray* _scrollableCardSectionRowModels;
	NUIContainerStackView* _stackViewToScroll;
	NSArray* _buttonControllers;
	SearchUIHorizontallyScrollingMoreResultsButtonController* _seeMoreButtonController;
	NSMutableSet* _visibleResultsAlreadySentBack;
	NSMapTable* _buttonControllersForViews;
	UIViewController* _presentedViewController;
	double _defaultArrangedSubviewWidth;

}

@property (nonatomic,retain) NUIContainerStackView * stackViewToScroll;                                                       //@synthesize stackViewToScroll=_stackViewToScroll - In the implementation block
@property (nonatomic,retain) NSArray * buttonControllers;                                                                     //@synthesize buttonControllers=_buttonControllers - In the implementation block
@property (nonatomic,retain) SearchUIHorizontallyScrollingMoreResultsButtonController * seeMoreButtonController;              //@synthesize seeMoreButtonController=_seeMoreButtonController - In the implementation block
@property (nonatomic,retain) NSMutableSet * visibleResultsAlreadySentBack;                                                    //@synthesize visibleResultsAlreadySentBack=_visibleResultsAlreadySentBack - In the implementation block
@property (nonatomic,retain) NSMapTable * buttonControllersForViews;                                                          //@synthesize buttonControllersForViews=_buttonControllersForViews - In the implementation block
@property (nonatomic,retain) UIViewController * presentedViewController;                                                      //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (assign) double defaultArrangedSubviewWidth;                                                                        //@synthesize defaultArrangedSubviewWidth=_defaultArrangedSubviewWidth - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUIFeedbackDelegate> feedbackDelegate;                                            //@synthesize feedbackDelegate=_feedbackDelegate - In the implementation block
@property (nonatomic,copy) NSArray * scrollableCardSectionRowModels;                                                          //@synthesize scrollableCardSectionRowModels=_scrollableCardSectionRowModels - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIViewController *)presentedViewController;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setPresentedViewController:(UIViewController *)arg1 ;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(CGRect)arg3 ;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg1 ;
-(id<SearchUIFeedbackDelegate>)feedbackDelegate;
-(void)setFeedbackDelegate:(id<SearchUIFeedbackDelegate>)arg1 ;
-(void)setScrollableCardSectionRowModels:(NSArray *)arg1 ;
-(void)setStackViewToScroll:(NUIContainerStackView *)arg1 ;
-(void)setVisibleResultsAlreadySentBack:(NSMutableSet *)arg1 ;
-(SearchUIHorizontallyScrollingMoreResultsButtonController *)seeMoreButtonController;
-(void)setSeeMoreButtonController:(SearchUIHorizontallyScrollingMoreResultsButtonController *)arg1 ;
-(void)scrollingButtonPressed:(id)arg1 ;
-(void)setButtonControllersForViews:(NSMapTable *)arg1 ;
-(NSMapTable *)buttonControllersForViews;
-(NUIContainerStackView *)stackViewToScroll;
-(void)setButtonControllers:(NSArray *)arg1 ;
-(double)defaultArrangedSubviewWidth;
-(void)setDefaultArrangedSubviewWidth:(double)arg1 ;
-(NSArray *)buttonControllers;
-(double)widthForArrangedSubview:(id)arg1 ;
-(void)sendVisibleFeedback;
-(NSMutableSet *)visibleResultsAlreadySentBack;
-(void)modalViewControllerClosed;
-(NSArray *)scrollableCardSectionRowModels;
@end

