/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSafariCKBookmarksMigrationFinishedEvent : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _timestamp;
	NSString* _errorCode;
	NSString* _errorDomain;
	int _migratorType;
	int _result;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasMigratorType; 
@property (assign,nonatomic) int migratorType;                          //@synthesize migratorType=_migratorType - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasResult; 
@property (assign,nonatomic) int result;                                //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                    //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorCode; 
@property (nonatomic,retain) NSString * errorCode;                      //@synthesize errorCode=_errorCode - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)result;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(void)setResult:(int)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(NSString *)errorCode;
-(NSString *)errorDomain;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(NSString *)arg1 ;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasErrorDomain;
-(BOOL)hasErrorCode;
-(void)setMigratorType:(int)arg1 ;
-(void)setHasResult:(BOOL)arg1 ;
-(BOOL)hasResult;
-(int)migratorType;
-(void)setHasMigratorType:(BOOL)arg1 ;
-(BOOL)hasMigratorType;
-(id)migratorTypeAsString:(int)arg1 ;
-(int)StringAsMigratorType:(id)arg1 ;
-(id)resultAsString:(int)arg1 ;
-(int)StringAsResult:(id)arg1 ;
@end

