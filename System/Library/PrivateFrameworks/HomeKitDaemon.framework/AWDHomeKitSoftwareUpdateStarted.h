/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitSoftwareUpdateStarted : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _duration;
	unsigned _resultErrorCode;
	BOOL _isAutomaticUpdateEnabled;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                             //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasResultErrorCode; 
@property (assign,nonatomic) unsigned resultErrorCode;                      //@synthesize resultErrorCode=_resultErrorCode - In the implementation block
@property (assign,nonatomic) BOOL hasIsAutomaticUpdateEnabled; 
@property (assign,nonatomic) BOOL isAutomaticUpdateEnabled;                 //@synthesize isAutomaticUpdateEnabled=_isAutomaticUpdateEnabled - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDuration:(unsigned)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setResultErrorCode:(unsigned)arg1 ;
-(void)setHasResultErrorCode:(BOOL)arg1 ;
-(BOOL)hasResultErrorCode;
-(unsigned)resultErrorCode;
-(BOOL)isAutomaticUpdateEnabled;
-(void)setIsAutomaticUpdateEnabled:(BOOL)arg1 ;
-(void)setHasIsAutomaticUpdateEnabled:(BOOL)arg1 ;
-(BOOL)hasIsAutomaticUpdateEnabled;
@end

