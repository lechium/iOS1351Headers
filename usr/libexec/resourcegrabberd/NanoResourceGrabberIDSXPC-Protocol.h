//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol NanoResourceGrabberIDSXPC <NSObject>
- (void)xpcGetIconForBundleID:(NSString *)arg1 iconVariant:(int)arg2 withTimeout:(double)arg3 reply:(void (^)(NSData *))arg4;
@end
