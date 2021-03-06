/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDBltPrimaryDevicePublicationToResponseDelay : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectionType;
	unsigned _delayMs;
	unsigned _publicationDate;
	NSString* _uniqueid;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasUniqueid; 
@property (nonatomic,retain) NSString * uniqueid;                       //@synthesize uniqueid=_uniqueid - In the implementation block
@property (assign,nonatomic) BOOL hasDelayMs; 
@property (assign,nonatomic) unsigned delayMs;                          //@synthesize delayMs=_delayMs - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                   //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasPublicationDate; 
@property (assign,nonatomic) unsigned publicationDate;                  //@synthesize publicationDate=_publicationDate - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned)connectionType;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setConnectionType:(unsigned)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(unsigned)publicationDate;
-(void)setPublicationDate:(unsigned)arg1 ;
-(void)setHasPublicationDate:(BOOL)arg1 ;
-(BOOL)hasPublicationDate;
-(void)setDelayMs:(unsigned)arg1 ;
-(void)setUniqueid:(NSString *)arg1 ;
-(BOOL)hasUniqueid;
-(void)setHasDelayMs:(BOOL)arg1 ;
-(BOOL)hasDelayMs;
-(NSString *)uniqueid;
-(unsigned)delayMs;
@end

