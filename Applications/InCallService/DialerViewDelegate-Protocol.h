//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, PHAbstractDialerView;

@protocol DialerViewDelegate <NSObject>

@optional
- (void)dialerView:(PHAbstractDialerView *)arg1 senderIdentityWasTapped:(NSString *)arg2;
- (void)dialerView:(PHAbstractDialerView *)arg1 stringWasPasted:(NSString *)arg2;
- (void)dialerViewTextDidChange:(PHAbstractDialerView *)arg1;
@end

