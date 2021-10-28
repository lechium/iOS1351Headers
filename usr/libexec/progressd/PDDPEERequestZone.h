//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface PDDPEERequestZone : PBCodable <NSCopying>
{
    NSData *_cursor;	// 8 = 0x8
    int _limit;	// 16 = 0x10
    NSString *_zoneName;	// 24 = 0x18
    CDStruct_88fc3008 _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100121a70
@property(retain, nonatomic) NSData *cursor; // @synthesize cursor=_cursor;
@property(nonatomic) int limit; // @synthesize limit=_limit;
@property(retain, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100121980
- (unsigned long long)hash;	// IMP=0x00000001001218f4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001217e8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010012170c
- (void)copyTo:(id)arg1;	// IMP=0x0000000100121674
- (void)writeTo:(id)arg1;	// IMP=0x00000001001215e8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001001215e0
- (id)dictionaryRepresentation;	// IMP=0x0000000100121278
- (id)description;	// IMP=0x00000001001211c4
@property(readonly, nonatomic) _Bool hasCursor;
@property(nonatomic) _Bool hasLimit;
@property(readonly, nonatomic) _Bool hasZoneName;

@end
