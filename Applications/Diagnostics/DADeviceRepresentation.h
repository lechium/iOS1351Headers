//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DADevice-Protocol.h"

@class DADeviceState, NSString;

@interface DADeviceRepresentation : NSObject <DADevice>
{
    _Bool _local;	// 8 = 0x8
    DADeviceState *_state;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001d16c
@property(nonatomic, getter=isLocal) _Bool local; // @synthesize local=_local;
@property(retain, nonatomic) DADeviceState *state; // @synthesize state=_state;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010001cf78
@property(readonly) unsigned long long hash;
- (void)end;	// IMP=0x000000010001cf00
- (void)resumeTests;	// IMP=0x000000010001cefc
- (void)suspendTests;	// IMP=0x000000010001cef8
- (void)idle;	// IMP=0x000000010001cef4
- (void)start;	// IMP=0x000000010001cef0
- (void)connect;	// IMP=0x000000010001ceec
- (id)initWithSerialNumber:(id)arg1 isLocal:(_Bool)arg2 attributes:(id)arg3;	// IMP=0x000000010001ce04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
