//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface NEKPBValidationWrapper : PBCodable <NSCopying>
{
    double _endDate;	// 8 = 0x8
    unsigned long long _masterCount;	// 16 = 0x10
    unsigned long long _occurrenceCount;	// 24 = 0x18
    double _startDate;	// 32 = 0x20
    _Bool _showAlert;	// 40 = 0x28
    struct {
        unsigned int endDate:1;
        unsigned int masterCount:1;
        unsigned int occurrenceCount:1;
        unsigned int startDate:1;
        unsigned int showAlert:1;
    } _has;	// 44 = 0x2c
}

@property(nonatomic) _Bool showAlert; // @synthesize showAlert=_showAlert;
@property(nonatomic) unsigned long long occurrenceCount; // @synthesize occurrenceCount=_occurrenceCount;
@property(nonatomic) unsigned long long masterCount; // @synthesize masterCount=_masterCount;
@property(nonatomic) double endDate; // @synthesize endDate=_endDate;
@property(nonatomic) double startDate; // @synthesize startDate=_startDate;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010002863c
- (unsigned long long)hash;	// IMP=0x00000001000284f4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000283a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100028290
- (void)copyTo:(id)arg1;	// IMP=0x000000010002819c
- (void)writeTo:(id)arg1;	// IMP=0x00000001000280ac
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000280a4
- (id)dictionaryRepresentation;	// IMP=0x0000000100027a44
- (id)description;	// IMP=0x0000000100027990
@property(nonatomic) _Bool hasShowAlert;
@property(nonatomic) _Bool hasOccurrenceCount;
@property(nonatomic) _Bool hasMasterCount;
@property(nonatomic) _Bool hasEndDate;
@property(nonatomic) _Bool hasStartDate;

@end
