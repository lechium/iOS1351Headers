/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:47 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class SKUIStackedBar, NSString;

@interface SKUIStackedPushTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	double _split;
	SKUIStackedBar* _fromBar;
	SKUIStackedBar* _toBar;

}

@property (nonatomic,retain) SKUIStackedBar * fromBar;              //@synthesize fromBar=_fromBar - In the implementation block
@property (nonatomic,retain) SKUIStackedBar * toBar;                //@synthesize toBar=_toBar - In the implementation block
@property (assign,nonatomic) double split;                          //@synthesize split=_split - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(double)split;
-(void)setSplit:(double)arg1 ;
-(SKUIStackedBar *)fromBar;
-(void)setFromBar:(SKUIStackedBar *)arg1 ;
-(SKUIStackedBar *)toBar;
-(void)setToBar:(SKUIStackedBar *)arg1 ;
@end

