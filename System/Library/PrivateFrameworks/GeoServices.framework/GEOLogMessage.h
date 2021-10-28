/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMessage : PBCodable <NSCopying> {

	NSMutableArray* _logMsgEvents;
	unsigned _groupRetryCount;
	int _logMessageType;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasGroupRetryCount; 
@property (assign,nonatomic) unsigned groupRetryCount; 
@property (nonatomic,retain) NSMutableArray * logMsgEvents; 
@property (assign,nonatomic) BOOL hasLogMessageType; 
@property (assign,nonatomic) int logMessageType; 
+(BOOL)isValid:(id)arg1 ;
+(Class)logMsgEventType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)logMessageType;
-(void)addLogMsgEvent:(id)arg1 ;
-(unsigned long long)logMsgEventsCount;
-(void)clearLogMsgEvents;
-(id)logMsgEventAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)logMsgEvents;
-(void)setLogMsgEvents:(NSMutableArray *)arg1 ;
-(void)setLogMessageType:(int)arg1 ;
-(void)setHasLogMessageType:(BOOL)arg1 ;
-(BOOL)hasLogMessageType;
-(id)logMessageTypeAsString:(int)arg1 ;
-(int)StringAsLogMessageType:(id)arg1 ;
-(unsigned)groupRetryCount;
-(void)setGroupRetryCount:(unsigned)arg1 ;
-(void)setHasGroupRetryCount:(BOOL)arg1 ;
-(BOOL)hasGroupRetryCount;
@end
