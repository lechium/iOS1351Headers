//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SRPagerView, UIView;

@protocol SRPagerViewDelegate <NSObject>
- (void)pagerViewDidChangeTransitionState:(SRPagerView *)arg1;
- (void)pagerView:(SRPagerView *)arg1 didActivatePageView:(UIView *)arg2 oldActivePageView:(UIView *)arg3;
@end
