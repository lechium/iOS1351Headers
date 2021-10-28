/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SKUIScrollingTabBarBackgroundView, NSArray;

@interface SKUICrossFadingTabBar : UIView {

	SKUIScrollingTabBarBackgroundView* _backgroundView;
	NSArray* _tabBarButtons;

}

@property (nonatomic,readonly) SKUIScrollingTabBarBackgroundView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,copy) NSArray * tabBarButtons;                                             //@synthesize tabBarButtons=_tabBarButtons - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(SKUIScrollingTabBarBackgroundView *)backgroundView;
-(void)layoutSubviews;
-(NSArray *)tabBarButtons;
-(void)setTabBarButtons:(NSArray *)arg1 ;
@end
