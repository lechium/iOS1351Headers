/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSHashTable;

@interface SGLongRunningTaskManager : NSObject {

	NSHashTable* _tasks;
	opaque_pthread_mutex_t _lock;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)task;
-(id)taskWithDeadline:(double)arg1 ;
-(void)unregister:(id)arg1 ;
-(void)tellCurrentTasksToDefer;
@end

