/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface _PFLock : NSObject <NSLocking> {

	opaque_pthread_mutex_t _lock;
	opaque_pthread_t* _owner;
	unsigned long long _count;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(BOOL)tryLock;
@end
