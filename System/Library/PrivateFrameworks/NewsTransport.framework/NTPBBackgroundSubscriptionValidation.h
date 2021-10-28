/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBBackgroundSubscriptionValidation : PBCodable <NSCopying> {

	NSString* _errorCode;
	NSString* _errorMessage;
	int _resultType;
	NSString* _sourceChannelId;
	SCD_Struct_NT1 _has;

}

@property (assign,nonatomic) BOOL hasResultType; 
@property (assign,nonatomic) int resultType;                          //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorMessage; 
@property (nonatomic,retain) NSString * errorMessage;                 //@synthesize errorMessage=_errorMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorCode; 
@property (nonatomic,retain) NSString * errorCode;                    //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;              //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)resultType;
-(void)writeTo:(id)arg1 ;
-(void)setResultType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)errorMessage;
-(NSString *)errorCode;
-(void)setHasResultType:(BOOL)arg1 ;
-(BOOL)hasResultType;
-(void)setErrorCode:(NSString *)arg1 ;
-(BOOL)hasErrorCode;
-(void)setErrorMessage:(NSString *)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasSourceChannelId;
-(NSString *)sourceChannelId;
-(BOOL)hasErrorMessage;
@end
