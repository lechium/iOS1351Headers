//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DiskSpaceManager : NSObject
{
}

+ (long long)recoverableDiskSpaceAtPath:(id)arg1;	// IMP=0x000000010011754c
+ (_Bool)ensureAvailableDiskSpace:(long long)arg1 atPath:(id)arg2;	// IMP=0x0000000100116fc0
+ (long long)availableDiskSpaceAtPath:(id)arg1;	// IMP=0x0000000100116e20

@end
