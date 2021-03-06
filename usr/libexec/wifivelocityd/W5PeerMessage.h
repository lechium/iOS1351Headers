//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString, NSUUID;

@interface W5PeerMessage : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _wantsAck;	// 8 = 0x8
    _Bool _expectsResponse;	// 9 = 0x9
    long long _type;	// 16 = 0x10
    NSUUID *_uuid;	// 24 = 0x18
    NSUUID *_responseUUID;	// 32 = 0x20
    NSUUID *_resourceUUID;	// 40 = 0x28
    NSDictionary *_info;	// 48 = 0x30
    NSString *_sourcePeerID;	// 56 = 0x38
    NSString *_destinationPeerID;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100015e50
@property(copy, nonatomic) NSString *destinationPeerID; // @synthesize destinationPeerID=_destinationPeerID;
@property(copy, nonatomic) NSString *sourcePeerID; // @synthesize sourcePeerID=_sourcePeerID;
@property(nonatomic) _Bool expectsResponse; // @synthesize expectsResponse=_expectsResponse;
@property(nonatomic) _Bool wantsAck; // @synthesize wantsAck=_wantsAck;
@property(copy, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(copy, nonatomic) NSUUID *resourceUUID; // @synthesize resourceUUID=_resourceUUID;
@property(copy, nonatomic) NSUUID *responseUUID; // @synthesize responseUUID=_responseUUID;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100015f68
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100015e58
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100015d5c
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000100015cdc
- (id)description;	// IMP=0x0000000100015b08
- (void)dealloc;	// IMP=0x0000000100015858
- (id)init;	// IMP=0x00000001000157e4

@end

