/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AMSMetricsDataSource
@required
-(void)cancel;
-(void)didFinishBatching;
-(void)enumerateSortedEventsForTopic:(id)arg1 block:(/*^block*/id)arg2;
-(void)skipEvents:(id)arg1 error:(id*)arg2;
-(void)removeEvents:(id)arg1 error:(id*)arg2;
-(void)willStartBatchingWithLogKey:(id)arg1 error:(id*)arg2;

@end

