/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate, NSURL;

@interface StockNewsItem : NSObject {

	NSString* _headline;
	NSString* _summary;
	NSString* _source;
	NSDate* _date;
	NSURL* _link;
	NSString* _localizedDateString;

}

@property (nonatomic,retain) NSString * headline;                                  //@synthesize headline=_headline - In the implementation block
@property (nonatomic,retain) NSString * summary;                                   //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSString * source;                                    //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSDate * date;                                        //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSURL * link;                                         //@synthesize link=_link - In the implementation block
@property (nonatomic,retain,readonly) NSString * localizedDateString; 
+(id)localizedStringForDate:(id)arg1 ;
-(id)description;
-(void)setSource:(NSString *)arg1 ;
-(NSDate *)date;
-(NSString *)source;
-(void)setDate:(NSDate *)arg1 ;
-(NSURL *)link;
-(void)setLink:(NSURL *)arg1 ;
-(id)archiveDictionary;
-(NSString *)summary;
-(void)resetLocale;
-(id)initWithArchiveDictionary:(id)arg1 ;
-(void)setSummary:(NSString *)arg1 ;
-(void)setHeadline:(NSString *)arg1 ;
-(NSString *)headline;
-(long long)chronologicalComparisonWithNewsItem:(id)arg1 ;
-(NSString *)localizedDateString;
@end
