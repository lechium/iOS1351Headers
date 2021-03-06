//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PSYWatchSyncState : NSObject
{
    NSString *_activityLabel;	// 8 = 0x8
    long long _globalProgress;	// 16 = 0x10
    unsigned long long _syncProgressState;	// 24 = 0x18
    unsigned long long _version;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100019f2c
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property(readonly, nonatomic) unsigned long long syncProgressState; // @synthesize syncProgressState=_syncProgressState;
@property(readonly, nonatomic) long long globalProgress; // @synthesize globalProgress=_globalProgress;
@property(readonly, nonatomic) NSString *activityLabel; // @synthesize activityLabel=_activityLabel;
- (id)description;	// IMP=0x0000000100019d58
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100019bc4
- (unsigned long long)hash;	// IMP=0x0000000100019b4c
- (id)plistRepresentation;	// IMP=0x0000000100019994
- (id)initWithPlistRepresentation:(id)arg1;	// IMP=0x0000000100019848
- (id)initWithActivityLabel:(id)arg1 globalProgress:(long long)arg2 syncProgressState:(unsigned long long)arg3;	// IMP=0x00000001000197b4

@end

