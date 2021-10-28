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

@interface NTPBShareSheetIapFail : PBCodable <NSCopying> {

	NSString* _articleId;
	NSString* _failedIapId;
	int _failureReason;
	NSString* _sourceChannelId;
	SCD_Struct_NT1 _has;

}

@property (nonatomic,readonly) BOOL hasFailedIapId; 
@property (nonatomic,retain) NSString * failedIapId;                  //@synthesize failedIapId=_failedIapId - In the implementation block
@property (assign,nonatomic) BOOL hasFailureReason; 
@property (assign,nonatomic) int failureReason;                       //@synthesize failureReason=_failureReason - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                    //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;              //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)failureReason;
-(void)setFailureReason:(int)arg1 ;
-(void)setHasFailureReason:(BOOL)arg1 ;
-(BOOL)hasFailureReason;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasArticleId;
-(BOOL)hasSourceChannelId;
-(NSString *)articleId;
-(NSString *)sourceChannelId;
-(void)setFailedIapId:(NSString *)arg1 ;
-(BOOL)hasFailedIapId;
-(NSString *)failedIapId;
@end
