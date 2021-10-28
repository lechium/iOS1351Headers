/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:02 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UIRefreshControl, UIColor, UIImpactFeedbackGenerator, NSAttributedString;

@interface _UIRefreshControlContentView : UIView {

	UIRefreshControl* _refreshControl;
	UIColor* _tintColor;
	UIImpactFeedbackGenerator* _impactFeedbackGenerator;

}

@property (nonatomic,readonly) long long style; 
@property (assign,nonatomic) UIRefreshControl * refreshControl;                                //@synthesize refreshControl=_refreshControl - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                              //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedTitle; 
@property (nonatomic,readonly) double minimumSnappingHeight; 
@property (nonatomic,readonly) double maximumSnappingHeight; 
@property (nonatomic,retain) UIImpactFeedbackGenerator * impactFeedbackGenerator;              //@synthesize impactFeedbackGenerator=_impactFeedbackGenerator - In the implementation block
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedTitle;
-(long long)style;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIRefreshControl *)refreshControl;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(void)refreshControlInvalidatedSnappingHeight;
-(double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
-(double)maximumSnappingHeight;
-(double)minimumSnappingHeight;
-(void)willTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)didTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
-(UIImpactFeedbackGenerator *)impactFeedbackGenerator;
-(void)setImpactFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(void)_removeAllAnimations;
@end
