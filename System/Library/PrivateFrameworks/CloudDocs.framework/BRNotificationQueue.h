/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudDocs/CloudDocs-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, NSMutableDictionary;

@interface BRNotificationQueue : NSObject <NSFastEnumeration> {

	NSMutableArray* _array;
	NSMutableArray* _callbacks;
	NSMutableDictionary* _index;
	unsigned long long _dequeued;
	unsigned long long _dequeuedNotificationCount;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(id)description;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BR10*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)removeAllObjects;
-(void)dequeue:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)addNotification:(id)arg1 asDead:(BOOL)arg2 ;
-(void)_filterIndex:(id)arg1 ;
-(void)processDequeueCallbacks;
-(void)addDequeueCallback:(/*^block*/id)arg1 ;
@end

