//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABSDiffableObject-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ABSSyncObject : NSObject <ABSDiffableObject>
{
    long long _changeType;	// 8 = 0x8
}

+ (void)oops;	// IMP=0x0000000100036350
+ (int)sequenceNumber;	// IMP=0x00000001000362e8
@property(nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) NSString *sequencer;
@property(readonly, nonatomic) NSString *objectIdentifier;
- (_Bool)matches:(id)arg1;	// IMP=0x00000001000362d0
- (id)createProtobufWithOptions:(id)arg1;	// IMP=0x00000001000362c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

