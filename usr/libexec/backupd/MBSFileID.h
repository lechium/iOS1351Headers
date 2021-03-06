//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface MBSFileID : PBCodable <NSCopying>
{
    NSData *_fileID;	// 8 = 0x8
}

+ (id)fileIDWithMBFileID:(id)arg1;	// IMP=0x00000001001849ac
+ (id)fileIDWithData:(id)arg1;	// IMP=0x0000000100184958
@property(retain, nonatomic) NSData *fileID; // @synthesize fileID=_fileID;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100169418
- (unsigned long long)hash;	// IMP=0x0000000100169400
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010016938c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100169314
- (void)copyTo:(id)arg1;	// IMP=0x00000001001692ec
- (void)writeTo:(id)arg1;	// IMP=0x00000001001692cc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001001692c4
- (id)dictionaryRepresentation;	// IMP=0x00000001001690bc
- (id)description;	// IMP=0x000000010016903c
@property(readonly, nonatomic) _Bool hasFileID;
- (void)dealloc;	// IMP=0x0000000100168fd4

@end

