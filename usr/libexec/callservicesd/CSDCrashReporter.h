//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSDCrashReporter : NSObject
{
}

+ (void)simulateCrashReportWithFormat:(id)arg1;	// IMP=0x0000000100006d18
+ (void)simulateCrashReportFromPID:(int)arg1 withKillCode:(unsigned int)arg2 usingReasonWithFormat:(id)arg3;	// IMP=0x0000000100006c74
+ (void)simulateCrashReportWithReason:(id)arg1 pid:(int)arg2 code:(unsigned int)arg3;	// IMP=0x0000000100006b74

@end
