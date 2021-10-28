/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:48 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SKUIScrollingTabBarPaletteDelegate;
@class UIView, SKUIScrollingTabBarBackgroundView;

@interface SKUIScrollingTabBarPalette : UIView {

	BOOL _attached;
	BOOL _tabBarBackgroundExtendsBehindPalette;
	UIView* _contentView;
	double _paletteHeight;
	id<SKUIScrollingTabBarPaletteDelegate> _delegate;
	SKUIScrollingTabBarBackgroundView* _backgroundView;

}

@property (assign,setter=_setDelegate:,getter=_delegate,nonatomic,__weak) id<SKUIScrollingTabBarPaletteDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=_setAttached:,getter=isAttached,nonatomic) BOOL attached;                                                      //@synthesize attached=_attached - In the implementation block
@property (getter=_backgroundView,nonatomic,readonly) SKUIScrollingTabBarBackgroundView * backgroundView;                               //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                                                                    //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) double paletteHeight;                                                                                    //@synthesize paletteHeight=_paletteHeight - In the implementation block
@property (assign,nonatomic) BOOL tabBarBackgroundExtendsBehindPalette;                                                                 //@synthesize tabBarBackgroundExtendsBehindPalette=_tabBarBackgroundExtendsBehindPalette - In the implementation block
-(id)_delegate;
-(void)_setDelegate:(id)arg1 ;
-(UIView *)contentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_backgroundView;
-(void)layoutSubviews;
-(BOOL)isAttached;
-(void)setTabBarBackgroundExtendsBehindPalette:(BOOL)arg1 ;
-(void)_setAttached:(BOOL)arg1 ;
-(double)paletteHeight;
-(BOOL)tabBarBackgroundExtendsBehindPalette;
@end
