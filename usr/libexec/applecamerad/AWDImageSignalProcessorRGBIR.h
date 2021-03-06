//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface AWDImageSignalProcessorRGBIR : PBCodable <NSCopying>
{
    unsigned long long _duration;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    int _calculationMode;	// 24 = 0x18
    int _confidence;	// 28 = 0x1c
    int _errorCode;	// 32 = 0x20
    int _rotationAngleX;	// 36 = 0x24
    int _rotationAngleY;	// 40 = 0x28
    int _rotationAngleZ;	// 44 = 0x2c
    int _selectedMode;	// 48 = 0x30
    struct {
        unsigned int duration:1;
        unsigned int timestamp:1;
        unsigned int calculationMode:1;
        unsigned int confidence:1;
        unsigned int errorCode:1;
        unsigned int rotationAngleX:1;
        unsigned int rotationAngleY:1;
        unsigned int rotationAngleZ:1;
        unsigned int selectedMode:1;
    } _has;	// 52 = 0x34
}

@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) int calculationMode; // @synthesize calculationMode=_calculationMode;
@property(nonatomic) int confidence; // @synthesize confidence=_confidence;
@property(nonatomic) int rotationAngleZ; // @synthesize rotationAngleZ=_rotationAngleZ;
@property(nonatomic) int rotationAngleY; // @synthesize rotationAngleY=_rotationAngleY;
@property(nonatomic) int rotationAngleX; // @synthesize rotationAngleX=_rotationAngleX;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000278e0
- (unsigned long long)hash;	// IMP=0x00000001000277ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000275ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002743c
- (void)copyTo:(id)arg1;	// IMP=0x00000001000272c8
- (void)writeTo:(id)arg1;	// IMP=0x000000010002714c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100027144
- (id)dictionaryRepresentation;	// IMP=0x00000001000266f0
- (id)description;	// IMP=0x0000000100026670
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasCalculationMode;
@property(nonatomic) _Bool hasConfidence;
@property(nonatomic) _Bool hasRotationAngleZ;
@property(nonatomic) _Bool hasRotationAngleY;
@property(nonatomic) _Bool hasRotationAngleX;
- (int)StringAsSelectedMode:(id)arg1;	// IMP=0x00000001000263a0
- (id)selectedModeAsString:(int)arg1;	// IMP=0x0000000100026330
@property(nonatomic) _Bool hasSelectedMode;
@property(nonatomic) int selectedMode; // @synthesize selectedMode=_selectedMode;
@property(nonatomic) _Bool hasTimestamp;

@end

