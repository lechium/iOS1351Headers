//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol OS_os_log;

@protocol EFSignpostable <NSObject>
+ (NSObject<OS_os_log> *)signpostLog;
@property(readonly) unsigned long long signpostID;
@end
