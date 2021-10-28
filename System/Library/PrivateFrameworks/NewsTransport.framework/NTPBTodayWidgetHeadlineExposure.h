/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:51 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBAlternateHeadline, NSString;

@interface NTPBTodayWidgetHeadlineExposure : PBCodable <NSCopying> {

	NTPBAlternateHeadline* _alternateHeadline;
	NSString* _articleId;
	NSString* _sourceChannelId;
	NSString* _webEmbedId;
	int _widgetArticleCount;
	int _widgetArticleCountInSection;
	int _widgetArticleRank;
	int _widgetArticleRankInSection;
	int _widgetContentType;
	int _widgetSectionDisplayRank;
	NSString* _widgetSectionId;
	SCD_Struct_NT8 _has;

}

@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                   //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                             //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetSectionId; 
@property (nonatomic,retain) NSString * widgetSectionId;                             //@synthesize widgetSectionId=_widgetSectionId - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetSectionDisplayRank; 
@property (assign,nonatomic) int widgetSectionDisplayRank;                           //@synthesize widgetSectionDisplayRank=_widgetSectionDisplayRank - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetArticleRankInSection; 
@property (assign,nonatomic) int widgetArticleRankInSection;                         //@synthesize widgetArticleRankInSection=_widgetArticleRankInSection - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetArticleRank; 
@property (assign,nonatomic) int widgetArticleRank;                                  //@synthesize widgetArticleRank=_widgetArticleRank - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetArticleCount; 
@property (assign,nonatomic) int widgetArticleCount;                                 //@synthesize widgetArticleCount=_widgetArticleCount - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetArticleCountInSection; 
@property (assign,nonatomic) int widgetArticleCountInSection;                        //@synthesize widgetArticleCountInSection=_widgetArticleCountInSection - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetContentType; 
@property (assign,nonatomic) int widgetContentType;                                  //@synthesize widgetContentType=_widgetContentType - In the implementation block
@property (nonatomic,readonly) BOOL hasWebEmbedId; 
@property (nonatomic,retain) NSString * webEmbedId;                                  //@synthesize webEmbedId=_webEmbedId - In the implementation block
@property (nonatomic,readonly) BOOL hasAlternateHeadline; 
@property (nonatomic,retain) NTPBAlternateHeadline * alternateHeadline;              //@synthesize alternateHeadline=_alternateHeadline - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasArticleId;
-(BOOL)hasSourceChannelId;
-(NSString *)articleId;
-(NSString *)sourceChannelId;
-(void)setWebEmbedId:(NSString *)arg1 ;
-(BOOL)hasWebEmbedId;
-(NSString *)webEmbedId;
-(void)setWidgetSectionId:(NSString *)arg1 ;
-(BOOL)hasWidgetSectionId;
-(void)setWidgetSectionDisplayRank:(int)arg1 ;
-(void)setHasWidgetSectionDisplayRank:(BOOL)arg1 ;
-(BOOL)hasWidgetSectionDisplayRank;
-(void)setWidgetArticleRankInSection:(int)arg1 ;
-(void)setHasWidgetArticleRankInSection:(BOOL)arg1 ;
-(BOOL)hasWidgetArticleRankInSection;
-(void)setWidgetArticleRank:(int)arg1 ;
-(void)setHasWidgetArticleRank:(BOOL)arg1 ;
-(BOOL)hasWidgetArticleRank;
-(void)setWidgetArticleCount:(int)arg1 ;
-(void)setHasWidgetArticleCount:(BOOL)arg1 ;
-(BOOL)hasWidgetArticleCount;
-(void)setWidgetArticleCountInSection:(int)arg1 ;
-(void)setHasWidgetArticleCountInSection:(BOOL)arg1 ;
-(BOOL)hasWidgetArticleCountInSection;
-(int)widgetContentType;
-(void)setWidgetContentType:(int)arg1 ;
-(void)setHasWidgetContentType:(BOOL)arg1 ;
-(BOOL)hasWidgetContentType;
-(id)widgetContentTypeAsString:(int)arg1 ;
-(int)StringAsWidgetContentType:(id)arg1 ;
-(NSString *)widgetSectionId;
-(int)widgetSectionDisplayRank;
-(int)widgetArticleRankInSection;
-(int)widgetArticleRank;
-(int)widgetArticleCount;
-(int)widgetArticleCountInSection;
-(void)setAlternateHeadline:(NTPBAlternateHeadline *)arg1 ;
-(BOOL)hasAlternateHeadline;
-(NTPBAlternateHeadline *)alternateHeadline;
@end
