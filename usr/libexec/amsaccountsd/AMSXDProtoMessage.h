//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface AMSXDProtoMessage : PBCodable <NSCopying>
{
    NSString *_logKey;	// 8 = 0x8
    NSData *_messageData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100031d64
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain, nonatomic) NSData *messageData; // @synthesize messageData=_messageData;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100031cb0
- (unsigned long long)hash;	// IMP=0x0000000100031c54
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100031b80
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100031ad0
- (void)copyTo:(id)arg1;	// IMP=0x0000000100031a6c
- (void)writeTo:(id)arg1;	// IMP=0x0000000100031a08
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100031a00
- (id)dictionaryRepresentation;	// IMP=0x00000001000317a4
- (id)description;	// IMP=0x00000001000316f0
@property(readonly, nonatomic) _Bool hasLogKey;

@end

