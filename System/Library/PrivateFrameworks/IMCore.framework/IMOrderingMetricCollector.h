/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface IMOrderingMetricCollector : NSObject {

	BOOL _needToSubmitMetric;
	NSObject*<OS_dispatch_queue> _orderingMetricQueue;
	unsigned long long _numberOfMessagesSeen;
	unsigned long long _numberOfMessagesPlacedOutOfOrder;
	unsigned long long _numberOfMessagesPlacedCorrectly;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> orderingMetricQueue;               //@synthesize orderingMetricQueue=_orderingMetricQueue - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMessagesSeen;                          //@synthesize numberOfMessagesSeen=_numberOfMessagesSeen - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMessagesPlacedOutOfOrder;              //@synthesize numberOfMessagesPlacedOutOfOrder=_numberOfMessagesPlacedOutOfOrder - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMessagesPlacedCorrectly;               //@synthesize numberOfMessagesPlacedCorrectly=_numberOfMessagesPlacedCorrectly - In the implementation block
@property (assign,nonatomic) BOOL needToSubmitMetric;                                          //@synthesize needToSubmitMetric=_needToSubmitMetric - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_submitMetricIfNeeded;
-(BOOL)_metricIncomingMessage:(id)arg1 items:(id)arg2 ;
-(void)_metricHistoryQueryOrder:(id)arg1 ;
-(BOOL)needToSubmitMetric;
-(void)_submitMetric;
-(void)metricIncomingMessage:(id)arg1 items:(id)arg2 ;
-(void)metricHistoryQueryOrder:(id)arg1 ;
-(void)_persistMetric;
-(NSObject*<OS_dispatch_queue>)orderingMetricQueue;
-(unsigned long long)numberOfMessagesSeen;
-(void)setNumberOfMessagesSeen:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMessagesPlacedOutOfOrder;
-(void)setNumberOfMessagesPlacedOutOfOrder:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMessagesPlacedCorrectly;
-(void)setNumberOfMessagesPlacedCorrectly:(unsigned long long)arg1 ;
-(void)setNeedToSubmitMetric:(BOOL)arg1 ;
@end
