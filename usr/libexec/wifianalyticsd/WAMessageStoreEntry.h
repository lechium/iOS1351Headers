//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class WAMessage;

@interface WAMessageStoreEntry : NSObject <NSSecureCoding>
{
    id _payload;	// 8 = 0x8
    unsigned long long _lastModifiedTimeInMillisecondEpoch;	// 16 = 0x10
    unsigned long long _size;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100036dd0
- (void).cxx_destruct;	// IMP=0x0000000100036fd8
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) unsigned long long lastModifiedTimeInMillisecondEpoch; // @synthesize lastModifiedTimeInMillisecondEpoch=_lastModifiedTimeInMillisecondEpoch;
@property(retain, nonatomic) id payload; // @synthesize payload=_payload;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100036e64
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100036dd8
- (id)description;	// IMP=0x0000000100036b44
- (id)init;	// IMP=0x0000000100036b00
@property(readonly, nonatomic) WAMessage *message; // @dynamic message;
- (void)updatePayload:(id)arg1;	// IMP=0x000000010003673c
- (id)initWithPayload:(id)arg1;	// IMP=0x0000000100036570

@end
