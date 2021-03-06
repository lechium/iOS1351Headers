/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBAWDMetricDelegate;
@interface SBAWDMetric : NSObject {

	id<SBAWDMetricDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBAWDMetricDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SBAWDMetricDelegate>)delegate;
-(void)setDelegate:(id<SBAWDMetricDelegate>)arg1 ;
-(Class)dataClass;
-(unsigned long long)componentID;
-(unsigned long long)metricID;
-(void)postWithDataBuilder:(/*^block*/id)arg1 ;
-(id)configureWithData:(id)arg1 ;
-(void)_postMetric:(id)arg1 withID:(unsigned)arg2 ;
@end

