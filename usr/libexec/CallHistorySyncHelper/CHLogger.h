//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_os_log;

@interface CHLogger : NSObject
{
    NSObject<OS_os_log> *_logHandle;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100018d84
- (id)logHandle;	// IMP=0x0000000100018d7c
- (id)initWithDomain:(const char *)arg1;	// IMP=0x0000000100018ca4

@end

