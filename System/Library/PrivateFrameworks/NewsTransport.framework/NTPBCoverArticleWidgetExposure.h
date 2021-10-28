/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:43 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBCoverArticleWidgetExposure : PBCodable <NSCopying> {

	int _coverArticleWidgetArticleCount;
	NSData* _coverArticleWidgetExposureSessionId;
	NSData* _feedViewExposureId;
	SCD_Struct_NT1 _has;

}

@property (nonatomic,readonly) BOOL hasCoverArticleWidgetExposureSessionId; 
@property (nonatomic,retain) NSData * coverArticleWidgetExposureSessionId;               //@synthesize coverArticleWidgetExposureSessionId=_coverArticleWidgetExposureSessionId - In the implementation block
@property (assign,nonatomic) BOOL hasCoverArticleWidgetArticleCount; 
@property (assign,nonatomic) int coverArticleWidgetArticleCount;                         //@synthesize coverArticleWidgetArticleCount=_coverArticleWidgetArticleCount - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                                //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(BOOL)hasFeedViewExposureId;
-(NSData *)feedViewExposureId;
-(void)setCoverArticleWidgetArticleCount:(int)arg1 ;
-(void)setHasCoverArticleWidgetArticleCount:(BOOL)arg1 ;
-(BOOL)hasCoverArticleWidgetArticleCount;
-(int)coverArticleWidgetArticleCount;
-(void)setCoverArticleWidgetExposureSessionId:(NSData *)arg1 ;
-(BOOL)hasCoverArticleWidgetExposureSessionId;
-(NSData *)coverArticleWidgetExposureSessionId;
@end
