//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface NPSFileBackupMsg : PBCodable <NSCopying>
{
    NSData *_fileData;	// 8 = 0x8
    NSData *_fileURL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001a294
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
@property(retain, nonatomic) NSData *fileURL; // @synthesize fileURL=_fileURL;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010001a1e0
- (unsigned long long)hash;	// IMP=0x000000010001a184
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010001a0b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010001a000
- (void)copyTo:(id)arg1;	// IMP=0x0000000100019f94
- (void)writeTo:(id)arg1;	// IMP=0x0000000100019f30
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100019f28
- (id)dictionaryRepresentation;	// IMP=0x0000000100019cd0
- (id)description;	// IMP=0x0000000100019c1c
@property(readonly, nonatomic) _Bool hasFileData;
@property(readonly, nonatomic) _Bool hasFileURL;

@end

