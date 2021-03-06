//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet;
@protocol OS_dispatch_queue;

@interface CSDVoIPProcessAssertionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSCountedSet *_processAssertions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000bf954
@property(retain, nonatomic) NSCountedSet *processAssertions; // @synthesize processAssertions=_processAssertions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (id)processAssertionWithBundleIdentifier:(id)arg1;	// IMP=0x00000001000bf8d8
- (void)invalidateProcessAssertionForBundleIdentifier:(id)arg1;	// IMP=0x00000001000bf718
- (void)acquireProcessAssertionForBundleIdentifier:(id)arg1;	// IMP=0x00000001000bf20c
- (id)init;	// IMP=0x00000001000bf128
- (id)initWithSerialQueue:(id)arg1;	// IMP=0x00000001000bf084

@end

