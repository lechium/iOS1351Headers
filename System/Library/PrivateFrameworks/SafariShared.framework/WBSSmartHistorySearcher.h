/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSArray, NSObject;

@interface WBSSmartHistorySearcher : NSObject {

	NSArray* _topics;
	NSObject*<OS_dispatch_queue> _searchQueue;

}
-(id)_searchItemsInTopic:(id)arg1 forText:(id)arg2 options:(unsigned long long)arg3 ;
-(id)_searchTopicsForText:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithTopics:(id)arg1 ;
-(void)performSearchWithText:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

