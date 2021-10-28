/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:59 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TelephonyPreferences/TelephonyPreferences-Structs.h>
@class NSMapTable;

@interface TPSController : NSObject {

	os_unfair_lock_s _delegateLock;
	NSMapTable* _delegateToQueue;

}

@property (assign,nonatomic) os_unfair_lock_s delegateLock;               //@synthesize delegateLock=_delegateLock - In the implementation block
@property (nonatomic,readonly) NSMapTable * delegateToQueue;              //@synthesize delegateToQueue=_delegateToQueue - In the implementation block
-(id)init;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(NSMapTable *)delegateToQueue;
-(void)performAtomicDelegateBlock:(/*^block*/id)arg1 ;
-(os_unfair_lock_s)delegateLock;
-(void)setDelegateLock:(os_unfair_lock_s)arg1 ;
@end
