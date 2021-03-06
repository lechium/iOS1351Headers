//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSData, NSUUID;

@interface W5PeerMessageFragment : NSObject <NSSecureCoding, NSCopying>
{
    NSUUID *_messageUUID;	// 8 = 0x8
    NSUUID *_resourceUUID;	// 16 = 0x10
    NSData *_fragment;	// 24 = 0x18
    unsigned long long _chunkSize;	// 32 = 0x20
    unsigned long long _index;	// 40 = 0x28
    unsigned long long _count;	// 48 = 0x30
    unsigned long long _mapToURLCount;	// 56 = 0x38
    double _sentAt;	// 64 = 0x40
    double _receivedAt;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010008d310
@property(nonatomic) double receivedAt; // @synthesize receivedAt=_receivedAt;
@property(nonatomic) double sentAt; // @synthesize sentAt=_sentAt;
@property(nonatomic) unsigned long long mapToURLCount; // @synthesize mapToURLCount=_mapToURLCount;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) unsigned long long chunkSize; // @synthesize chunkSize=_chunkSize;
@property(copy, nonatomic) NSData *fragment; // @synthesize fragment=_fragment;
@property(copy, nonatomic) NSUUID *resourceUUID; // @synthesize resourceUUID=_resourceUUID;
@property(copy, nonatomic) NSUUID *messageUUID; // @synthesize messageUUID=_messageUUID;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010008d42c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010008d318
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010008d21c
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000010008d19c
- (id)description;	// IMP=0x000000010008cfa4
- (unsigned long long)hash;	// IMP=0x000000010008cf70
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010008cf08
- (_Bool)isEqualToPeerMessageFragment:(id)arg1;	// IMP=0x000000010008ce7c
- (void)dealloc;	// IMP=0x000000010008ce24
- (id)init;	// IMP=0x000000010008cde4

@end

