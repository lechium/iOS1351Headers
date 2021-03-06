/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface _UIKeyboardArbiterDebug : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _importantCount;
	NSMutableArray* _entries;

}
+(id)sharedInstance;
-(id)init;
-(void)addEntry:(id)arg1 ;
-(void)getDebugInfoDictionariesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addAsynchronousData:(/*^block*/id)arg1 ;
-(void)errorWithFormat:(const char*)arg1 ;
-(void)infoWithFormat:(const char*)arg1 ;
-(void)debugWithFormat:(const char*)arg1 ;
@end

