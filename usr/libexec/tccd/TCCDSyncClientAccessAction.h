//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TCCDSyncAccessAction.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TCCDSyncClientAccessAction : TCCDSyncAccessAction
{
    int _clientType;	// 32 = 0x20
    NSString *_masterClientIdentifier;	// 40 = 0x28
    NSString *_slaveClientIdentifier;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010000a224
- (void).cxx_destruct;	// IMP=0x000000010000a998
@property(readonly) int clientType; // @synthesize clientType=_clientType;
@property(copy) NSString *slaveClientIdentifier; // @synthesize slaveClientIdentifier=_slaveClientIdentifier;
@property(copy) NSString *masterClientIdentifier; // @synthesize masterClientIdentifier=_masterClientIdentifier;
- (id)syncId;	// IMP=0x000000010000a7cc
@property(readonly, copy) NSString *clientIdentifierForCurrentPlatform;
- (id)_description;	// IMP=0x000000010000a6cc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010000a574
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010000a308
- (id)initWithServiceIdentifier:(id)arg1 masterClientIdentifier:(id)arg2 slaveClientIdentifier:(id)arg3 clientType:(int)arg4;	// IMP=0x000000010000a22c

@end

