/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, HUGridServiceCell;

@interface HUHomeAccessoryTileView : UIView {

	UIImageView* _homeView;
	HUGridServiceCell* _tileView;

}

@property (nonatomic,readonly) UIImageView * homeView;                       //@synthesize homeView=_homeView - In the implementation block
@property (nonatomic,readonly) HUGridServiceCell * tileView;                 //@synthesize tileView=_tileView - In the implementation block
@property (nonatomic,readonly) HFItem*<HFServiceLikeItem> item; 
@property (nonatomic,readonly) double aspectRatio; 
-(HFItem*<HFServiceLikeItem>)item;
-(double)aspectRatio;
-(id)initWithFrame:(CGRect)arg1 item:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithItem:(id)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(HUGridServiceCell *)tileView;
-(UIImageView *)homeView;
@end
