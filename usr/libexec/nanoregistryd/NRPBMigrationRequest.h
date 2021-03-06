//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@interface NRPBMigrationRequest : PBRequest <NSCopying>
{
    _Bool _shouldCancel;	// 8 = 0x8
    struct {
        unsigned int shouldCancel:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool shouldCancel; // @synthesize shouldCancel=_shouldCancel;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100059154
- (unsigned long long)hash;	// IMP=0x0000000100059120
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010005906c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100059000
- (void)copyTo:(id)arg1;	// IMP=0x0000000100058fd0
- (void)writeTo:(id)arg1;	// IMP=0x0000000100058fa4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100058f9c
- (id)dictionaryRepresentation;	// IMP=0x0000000100058ccc
- (id)description;	// IMP=0x0000000100058c18
@property(nonatomic) _Bool hasShouldCancel;

@end

