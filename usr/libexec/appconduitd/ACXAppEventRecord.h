//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface ACXAppEventRecord : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _eventType;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    unsigned long long _sequenceNumber;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000600ec
- (void).cxx_destruct;	// IMP=0x0000000100060a10
@property(readonly, nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010006094c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100060814
- (unsigned long long)hash;	// IMP=0x0000000100060794
- (id)dictionaryRepresentation;	// IMP=0x0000000100060638
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00000001000603e8
- (id)initWithRecordType:(unsigned long long)arg1 bundleID:(id)arg2 sequenceNumber:(unsigned long long)arg3;	// IMP=0x0000000100060358
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100060270
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000600f4

@end
