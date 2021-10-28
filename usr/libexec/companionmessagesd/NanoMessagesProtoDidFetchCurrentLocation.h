//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface NanoMessagesProtoDidFetchCurrentLocation : PBCodable <NSCopying>
{
    double _locationAltitude;	// 8 = 0x8
    double _locationCourse;	// 16 = 0x10
    double _locationHorizontalAccuracy;	// 24 = 0x18
    double _locationLatitude;	// 32 = 0x20
    double _locationLongitude;	// 40 = 0x28
    double _locationSpeed;	// 48 = 0x30
    double _locationTimestamp;	// 56 = 0x38
    double _locationVerticalAccuracy;	// 64 = 0x40
    int _errorCode;	// 72 = 0x48
    NSString *_errorDomain;	// 80 = 0x50
    struct {
        unsigned int locationAltitude:1;
        unsigned int locationCourse:1;
        unsigned int locationHorizontalAccuracy:1;
        unsigned int locationLatitude:1;
        unsigned int locationLongitude:1;
        unsigned int locationSpeed:1;
        unsigned int locationTimestamp:1;
        unsigned int locationVerticalAccuracy:1;
        unsigned int errorCode:1;
    } _has;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000100004e80
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) double locationTimestamp; // @synthesize locationTimestamp=_locationTimestamp;
@property(nonatomic) double locationSpeed; // @synthesize locationSpeed=_locationSpeed;
@property(nonatomic) double locationCourse; // @synthesize locationCourse=_locationCourse;
@property(nonatomic) double locationVerticalAccuracy; // @synthesize locationVerticalAccuracy=_locationVerticalAccuracy;
@property(nonatomic) double locationHorizontalAccuracy; // @synthesize locationHorizontalAccuracy=_locationHorizontalAccuracy;
@property(nonatomic) double locationAltitude; // @synthesize locationAltitude=_locationAltitude;
@property(nonatomic) double locationLongitude; // @synthesize locationLongitude=_locationLongitude;
@property(nonatomic) double locationLatitude; // @synthesize locationLatitude=_locationLatitude;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100004c10
- (unsigned long long)hash;	// IMP=0x000000010000490c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000046f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100004508
- (void)copyTo:(id)arg1;	// IMP=0x000000010000434c
- (void)writeTo:(id)arg1;	// IMP=0x00000001000041b0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000041a8
- (id)dictionaryRepresentation;	// IMP=0x00000001000038d0
- (id)description;	// IMP=0x000000010000381c
@property(readonly, nonatomic) _Bool hasErrorDomain;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasLocationTimestamp;
@property(nonatomic) _Bool hasLocationSpeed;
@property(nonatomic) _Bool hasLocationCourse;
@property(nonatomic) _Bool hasLocationVerticalAccuracy;
@property(nonatomic) _Bool hasLocationHorizontalAccuracy;
@property(nonatomic) _Bool hasLocationAltitude;
@property(nonatomic) _Bool hasLocationLongitude;
@property(nonatomic) _Bool hasLocationLatitude;

@end
