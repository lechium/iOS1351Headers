/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WBSHistoryConnectionProtocol.h>

@class WBSHistoryService;

@interface WBSHistoryConnection : NSObject <WBSHistoryConnectionProtocol> {

	WBSHistoryService* _historyService;

}
-(void)queryMemoryFootprint:(/*^block*/id)arg1 ;
-(void)ensureConnected:(/*^block*/id)arg1 ;
-(id)initWithHistoryService:(id)arg1 ;
-(void)beginHistoryAccessSession:(/*^block*/id)arg1 ;
-(void)getServiceInfo:(/*^block*/id)arg1 ;
-(void)beginURLCompletionSession:(/*^block*/id)arg1 ;
-(void)getVisitedLinksWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)groupVisitsIntoSessionsBetweenStartDate:(id)arg1 endDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)debugGetDatabaseURLWithCompletionHandler:(/*^block*/id)arg1 ;
@end
