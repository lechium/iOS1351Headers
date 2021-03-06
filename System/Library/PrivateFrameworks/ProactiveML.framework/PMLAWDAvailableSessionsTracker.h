/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:20 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveML/PMLAWDBaseTracker.h>

@protocol PMLAWDMetricQueryDelegate;
@class AWDServerConnection;

@interface PMLAWDAvailableSessionsTracker : PMLAWDBaseTracker {

	id<PMLAWDMetricQueryDelegate> _delegate;
	AWDServerConnection* _awdServerConnection;

}
-(id)init;
-(id)initWithAWDConnection:(id)arg1 ;
-(void)setAWDMetricQueryDelegate:(id)arg1 ;
-(void)reportStatsToAWD;
@end

