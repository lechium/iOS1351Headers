//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AppSchedulerResult : NSObject
{
    unsigned long long _activeInstallsCount;	// 8 = 0x8
    NSArray *_startedInstalls;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100272924
@property(retain) NSArray *startedInstalls; // @synthesize startedInstalls=_startedInstalls;
@property unsigned long long activeInstallsCount; // @synthesize activeInstallsCount=_activeInstallsCount;

@end

