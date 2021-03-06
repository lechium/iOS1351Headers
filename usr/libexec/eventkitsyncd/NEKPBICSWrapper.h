//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NEKPBCalendarIdentifier, NSData, NSMutableArray, NSString;

@interface NEKPBICSWrapper : PBCodable <NSCopying>
{
    unsigned long long _displayOrder;	// 8 = 0x8
    double _taskCompletionDate;	// 16 = 0x10
    NEKPBCalendarIdentifier *_calendarIdentifier;	// 24 = 0x18
    unsigned int _calendarItemCount;	// 32 = 0x20
    NSData *_iCSData;	// 40 = 0x28
    NSMutableArray *_metadataKeys;	// 48 = 0x30
    NSMutableArray *_metadataValues;	// 56 = 0x38
    NSString *_nuevoIdentifier;	// 64 = 0x40
    NSString *_oldCalendarIdentifier;	// 72 = 0x48
    NSString *_oldIdentifier;	// 80 = 0x50
    NSString *_syncID;	// 88 = 0x58
    struct {
        unsigned int displayOrder:1;
        unsigned int taskCompletionDate:1;
        unsigned int calendarItemCount:1;
    } _has;	// 96 = 0x60
}

+ (Class)metadataValuesType;	// IMP=0x0000000100061b64
+ (Class)metadataKeysType;	// IMP=0x0000000100061a9c
- (void).cxx_destruct;	// IMP=0x00000001000637d8
@property(nonatomic) unsigned long long displayOrder; // @synthesize displayOrder=_displayOrder;
@property(retain, nonatomic) NSString *nuevoIdentifier; // @synthesize nuevoIdentifier=_nuevoIdentifier;
@property(retain, nonatomic) NSString *oldIdentifier; // @synthesize oldIdentifier=_oldIdentifier;
@property(nonatomic) double taskCompletionDate; // @synthesize taskCompletionDate=_taskCompletionDate;
@property(retain, nonatomic) NSString *oldCalendarIdentifier; // @synthesize oldCalendarIdentifier=_oldCalendarIdentifier;
@property(retain, nonatomic) NSString *syncID; // @synthesize syncID=_syncID;
@property(retain, nonatomic) NSMutableArray *metadataValues; // @synthesize metadataValues=_metadataValues;
@property(retain, nonatomic) NSMutableArray *metadataKeys; // @synthesize metadataKeys=_metadataKeys;
@property(nonatomic) unsigned int calendarItemCount; // @synthesize calendarItemCount=_calendarItemCount;
@property(retain, nonatomic) NEKPBCalendarIdentifier *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property(retain, nonatomic) NSData *iCSData; // @synthesize iCSData=_iCSData;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100063350
- (unsigned long long)hash;	// IMP=0x00000001000631a4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100062f34
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100062b7c
- (void)copyTo:(id)arg1;	// IMP=0x00000001000628e4
- (void)writeTo:(id)arg1;	// IMP=0x00000001000625f8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000625f0
- (id)dictionaryRepresentation;	// IMP=0x0000000100061d2c
- (id)description;	// IMP=0x0000000100061c78
@property(nonatomic) _Bool hasDisplayOrder;
@property(readonly, nonatomic) _Bool hasNuevoIdentifier;
@property(readonly, nonatomic) _Bool hasOldIdentifier;
@property(nonatomic) _Bool hasTaskCompletionDate;
@property(readonly, nonatomic) _Bool hasOldCalendarIdentifier;
@property(readonly, nonatomic) _Bool hasSyncID;
- (id)metadataValuesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100061b4c
- (unsigned long long)metadataValuesCount;	// IMP=0x0000000100061b34
- (void)addMetadataValues:(id)arg1;	// IMP=0x0000000100061ac0
- (void)clearMetadataValues;	// IMP=0x0000000100061aa8
- (id)metadataKeysAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100061a84
- (unsigned long long)metadataKeysCount;	// IMP=0x0000000100061a6c
- (void)addMetadataKeys:(id)arg1;	// IMP=0x00000001000619f8
- (void)clearMetadataKeys;	// IMP=0x00000001000619e0
@property(nonatomic) _Bool hasCalendarItemCount;
@property(readonly, nonatomic) _Bool hasCalendarIdentifier;
@property(readonly, nonatomic) _Bool hasICSData;

@end

