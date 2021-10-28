//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface ALCMMotionContextMotionState : PBCodable <NSCopying>
{
    unsigned long long _startTime;	// 8 = 0x8
    int _confidence;	// 16 = 0x10
    int _exitState;	// 20 = 0x14
    int _mounted;	// 24 = 0x18
    int _mountedConfidence;	// 28 = 0x1c
    int _turn;	// 32 = 0x20
    int _type;	// 36 = 0x24
    _Bool _isMoving;	// 40 = 0x28
    _Bool _isVehicular;	// 41 = 0x29
    struct {
        unsigned int startTime:1;
        unsigned int exitState:1;
        unsigned int mounted:1;
        unsigned int mountedConfidence:1;
        unsigned int turn:1;
        unsigned int isMoving:1;
        unsigned int isVehicular:1;
    } _has;	// 44 = 0x2c
}

@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
@property(nonatomic) _Bool isVehicular; // @synthesize isVehicular=_isVehicular;
@property(nonatomic) int confidence; // @synthesize confidence=_confidence;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000eff1c
- (unsigned long long)hash;	// IMP=0x00000001000efe00
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000efc50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000efad0
- (void)copyTo:(id)arg1;	// IMP=0x00000001000ef98c
- (void)writeTo:(id)arg1;	// IMP=0x00000001000ef828
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000ef820
- (id)dictionaryRepresentation;	// IMP=0x00000001000ee9a8
- (id)description;	// IMP=0x00000001000ee928
@property(nonatomic) _Bool hasStartTime;
- (int)StringAsExitState:(id)arg1;	// IMP=0x00000001000ee850
- (id)exitStateAsString:(int)arg1;	// IMP=0x00000001000ee7e0
@property(nonatomic) _Bool hasExitState;
@property(nonatomic) int exitState; // @synthesize exitState=_exitState;
@property(nonatomic) _Bool hasIsMoving;
@property(nonatomic) _Bool hasIsVehicular;
- (int)StringAsTurn:(id)arg1;	// IMP=0x00000001000ee638
- (id)turnAsString:(int)arg1;	// IMP=0x00000001000ee5c8
@property(nonatomic) _Bool hasTurn;
@property(nonatomic) int turn; // @synthesize turn=_turn;
- (int)StringAsMountedConfidence:(id)arg1;	// IMP=0x00000001000ee4c8
- (id)mountedConfidenceAsString:(int)arg1;	// IMP=0x00000001000ee458
@property(nonatomic) _Bool hasMountedConfidence;
@property(nonatomic) int mountedConfidence; // @synthesize mountedConfidence=_mountedConfidence;
- (int)StringAsMounted:(id)arg1;	// IMP=0x00000001000ee384
- (id)mountedAsString:(int)arg1;	// IMP=0x00000001000ee328
@property(nonatomic) _Bool hasMounted;
@property(nonatomic) int mounted; // @synthesize mounted=_mounted;
- (int)StringAsConfidence:(id)arg1;	// IMP=0x00000001000ee228
- (id)confidenceAsString:(int)arg1;	// IMP=0x00000001000ee1b8
- (int)StringAsType:(id)arg1;	// IMP=0x00000001000edd84
- (id)typeAsString:(int)arg1;	// IMP=0x00000001000eda24

@end
