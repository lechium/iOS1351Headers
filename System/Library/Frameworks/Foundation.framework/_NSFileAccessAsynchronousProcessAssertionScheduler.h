/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Foundation/Foundation-Structs.h>
@class NSMutableDictionary;

@interface _NSFileAccessAsynchronousProcessAssertionScheduler : NSObject {

	NSMutableDictionary* _assertionsPerPID;
	os_unfair_lock_s _lock;

}
+(id)sharedInstance;
-(id)init;
-(void)removeAssertionWithToken:(id)arg1 ;
-(id)addAssertionWithName:(id)arg1 forPID:(int)arg2 ;
@end

