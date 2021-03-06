/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIView;

@interface SKWeakContainer : NSObject {

	BOOL _wasOnScreen;
	UIView* _scrollingView;
	UIView* _trackingView;

}

@property (assign,nonatomic,__weak) UIView * scrollingView;              //@synthesize scrollingView=_scrollingView - In the implementation block
@property (assign,nonatomic,__weak) UIView * trackingView;               //@synthesize trackingView=_trackingView - In the implementation block
@property (assign,nonatomic) BOOL wasOnScreen;                           //@synthesize wasOnScreen=_wasOnScreen - In the implementation block
-(UIView *)scrollingView;
-(void)setScrollingView:(UIView *)arg1 ;
-(UIView *)trackingView;
-(void)setTrackingView:(UIView *)arg1 ;
-(BOOL)wasOnScreen;
-(void)setWasOnScreen:(BOOL)arg1 ;
@end

