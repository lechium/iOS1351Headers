/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:12 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@class NSString;

@interface NSConditionLock : NSObject <NSLocking> {

	void* _priv;

}

@property (readonly) long long condition; 
@property (copy) NSString * name; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)lock;
-(void)unlock;
-(void)setName:(NSString *)arg1 ;
-(BOOL)lockBeforeDate:(id)arg1 ;
-(BOOL)tryLock;
-(id)initWithCondition:(long long)arg1 ;
-(BOOL)lockWhenCondition:(long long)arg1 beforeDate:(id)arg2 ;
-(long long)condition;
-(void)lockWhenCondition:(long long)arg1 ;
-(BOOL)tryLockWhenCondition:(long long)arg1 ;
-(void)unlockWithCondition:(long long)arg1 ;
@end

