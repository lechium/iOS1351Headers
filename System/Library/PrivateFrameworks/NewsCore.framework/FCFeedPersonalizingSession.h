/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:38 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FCDateRange, NSString;

@interface FCFeedPersonalizingSession : NSObject {

	FCDateRange* _dateRange;
	unsigned long long _fixedArticleCount;
	long long _feedType;
	NSString* _sessionID;

}

@property (nonatomic,retain) FCDateRange * dateRange;                           //@synthesize dateRange=_dateRange - In the implementation block
@property (assign,nonatomic) unsigned long long fixedArticleCount;              //@synthesize fixedArticleCount=_fixedArticleCount - In the implementation block
@property (assign,nonatomic) long long feedType;                                //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,retain) NSString * sessionID;                              //@synthesize sessionID=_sessionID - In the implementation block
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(FCDateRange *)dateRange;
-(void)setDateRange:(FCDateRange *)arg1 ;
-(long long)feedType;
-(void)setFeedType:(long long)arg1 ;
-(unsigned long long)fixedArticleCount;
-(void)setFixedArticleCount:(unsigned long long)arg1 ;
@end
