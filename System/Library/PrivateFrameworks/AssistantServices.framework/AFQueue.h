/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:18 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol AFQueueDelegate;
@class AFLinkedListItem;

@interface AFQueue : NSObject <NSFastEnumeration> {

	AFLinkedListItem* _head;
	AFLinkedListItem* _tail;
	unsigned long long _count;
	id<AFQueueDelegate> _delegate;

}

@property (nonatomic,readonly) id frontObject; 
@property (nonatomic,readonly) unsigned long long count; 
@property (assign,nonatomic,__weak) id<AFQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)description;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_AF1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id<AFQueueDelegate>)delegate;
-(void)setDelegate:(id<AFQueueDelegate>)arg1 ;
-(id)_objects;
-(void)enqueueObject:(id)arg1 ;
-(id)dequeueObject;
-(void)enqueueObjects:(id)arg1 ;
-(id)frontObject;
-(id)dequeueAllObjects;
@end

