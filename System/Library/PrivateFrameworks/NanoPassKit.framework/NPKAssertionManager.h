/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable;

@interface NPKAssertionManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _acquiredAssertions;

}

@property (retain) NSHashTable * acquiredAssertions;              //@synthesize acquiredAssertions=_acquiredAssertions - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)addAssertion:(id)arg1 ;
-(void)removeAssertion:(id)arg1 ;
-(id)_errorWithUnderlyingError:(id)arg1 ;
-(NSHashTable *)acquiredAssertions;
-(id)acquiredAssertionWithType:(unsigned long long)arg1 ;
-(void)_queue_acquireAssertionWithType:(unsigned long long)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_invalidateAssertionWithType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)containsAssertionWithType:(unsigned long long)arg1 ;
-(void)acquireAssertionWithType:(unsigned long long)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)invalidateAssertionWithType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAcquiredAssertions:(NSHashTable *)arg1 ;
@end

