/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaAnyEvent : PBCodable {

	int _anyEventType;
	NSData* _payload;

}

@property (assign,nonatomic) int anyEventType;                 //@synthesize anyEventType=_anyEventType - In the implementation block
@property (nonatomic,copy) NSData * payload;                   //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPayload:(NSData *)arg1 ;
-(NSData *)payload;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(int)anyEventType;
-(void)setAnyEventType:(int)arg1 ;
@end
