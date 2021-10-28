/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDCodableEntityIdentifier : PBCodable <NSCopying> {

	long long _identifier;
	NSString* _schema;
	SCD_Struct_HD7 _has;

}

@property (nonatomic,readonly) BOOL hasSchema; 
@property (nonatomic,retain) NSString * schema;                 //@synthesize schema=_schema - In the implementation block
@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) long long identifier;              //@synthesize identifier=_identifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)identifier;
-(void)setIdentifier:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)schema;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(void)setSchema:(NSString *)arg1 ;
-(BOOL)hasSchema;
@end
