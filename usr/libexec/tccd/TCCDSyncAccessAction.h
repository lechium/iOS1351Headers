//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"
#import "SYChange-Protocol.h"
#import "SYObject-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TCCDSyncAccessAction : NSObject <SYObject, SYChange, NSSecureCoding>
{
    NSString *_serviceIdentifier;	// 8 = 0x8
    long long _syncChangeType;	// 16 = 0x10
    long long _versionNumber;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100009d58
- (void).cxx_destruct;	// IMP=0x000000010000a204
@property long long versionNumber; // @synthesize versionNumber=_versionNumber;
@property long long syncChangeType; // @synthesize syncChangeType=_syncChangeType;
@property(readonly) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(readonly, nonatomic) long long changeType;
@property(readonly, nonatomic) NSString *sequencer;
@property(readonly, nonatomic) NSString *objectIdentifier;
- (void)updateDatabase:(unsigned long long)arg1 killClient:(_Bool)arg2;	// IMP=0x000000010000a1b8
- (id)syncId;	// IMP=0x000000010000a118
@property(readonly, copy) NSString *description;
- (id)_description;	// IMP=0x000000010000a000
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100009ee4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100009de8
- (id)initWithServiceIdentifier:(id)arg1;	// IMP=0x0000000100009d60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

