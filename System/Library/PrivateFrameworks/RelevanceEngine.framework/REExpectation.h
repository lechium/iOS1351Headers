/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_group;
@class NSObject;

@interface REExpectation : NSObject {

	NSObject*<OS_dispatch_group> _group;
	Ai _count;

}

@property (nonatomic,readonly) long long outstandingOperations; 
-(id)init;
-(void)endOperation;
-(void)beginOperation;
-(long long)outstandingOperations;
-(void)notifyOperationsCompleteOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)notifyOperationsCompleteOrPerformUsingQueue:(id)arg1 block:(/*^block*/id)arg2 ;
@end

