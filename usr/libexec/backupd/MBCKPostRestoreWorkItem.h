//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class MBCKPostRestoreWorkQueue, NSError;

@interface MBCKPostRestoreWorkItem : NSObject <NSSecureCoding>
{
    MBCKPostRestoreWorkQueue *_workQueue;	// 8 = 0x8
    NSError *_lastError;	// 16 = 0x10
    unsigned long long _attempts;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000c80a8
- (void).cxx_destruct;	// IMP=0x00000001000c8230
@property(nonatomic) unsigned long long attempts; // @synthesize attempts=_attempts;
@property(retain, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(nonatomic) __weak MBCKPostRestoreWorkQueue *workQueue; // @synthesize workQueue=_workQueue;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000c8134
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000c80b0
- (void)main;	// IMP=0x00000001000c80a4
- (_Bool)rescheduleWithError:(id *)arg1;	// IMP=0x00000001000c7fb8

@end

