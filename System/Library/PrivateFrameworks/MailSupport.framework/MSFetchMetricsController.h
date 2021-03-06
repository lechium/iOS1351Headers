/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MSFetchMetricsControllerDataSource;
@interface MSFetchMetricsController : NSObject {

	double _startTime;
	id<MSFetchMetricsControllerDataSource> _dataSource;

}

@property (nonatomic,__weak,readonly) id<MSFetchMetricsControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)start;
-(id)initWithDataSource:(id)arg1 ;
-(id<MSFetchMetricsControllerDataSource>)dataSource;
-(void)stopAndSubmitWithOptions:(unsigned long long)arg1 fetchSize:(unsigned long long)arg2 ;
@end

