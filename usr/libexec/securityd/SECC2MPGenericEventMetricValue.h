//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString, SECC2MPError;

__attribute__((visibility("hidden")))
@interface SECC2MPGenericEventMetricValue : PBCodable <NSCopying>
{
    unsigned long long _dateValue;	// 8 = 0x8
    double _doubleValue;	// 16 = 0x10
    SECC2MPError *_errorValue;	// 24 = 0x18
    NSString *_stringValue;	// 32 = 0x20
    struct {
        unsigned int dateValue:1;
        unsigned int doubleValue:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100072570
@property(retain, nonatomic) SECC2MPError *errorValue; // @synthesize errorValue=_errorValue;
@property(nonatomic) unsigned long long dateValue; // @synthesize dateValue=_dateValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100072434
- (unsigned long long)hash;	// IMP=0x0000000100072340
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010007220c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010007210c
- (void)copyTo:(id)arg1;	// IMP=0x0000000100072050
- (void)writeTo:(id)arg1;	// IMP=0x0000000100071f9c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100071f94
- (id)dictionaryRepresentation;	// IMP=0x0000000100071e28
- (id)description;	// IMP=0x0000000100071d74
@property(readonly, nonatomic) _Bool hasErrorValue;
@property(nonatomic) _Bool hasDateValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(readonly, nonatomic) _Bool hasStringValue;

@end

