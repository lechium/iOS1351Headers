/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary;

@interface HMDAccessoryQueues : HMFObject {

	NSMutableDictionary* queues;

}

@property (nonatomic,retain) NSMutableDictionary * queues; 
-(id)init;
-(void)removeAccessory:(id)arg1 ;
-(BOOL)createQueue:(id)arg1 ;
-(id)popAccessoryFromQueue:(id)arg1 ;
-(id)getContextForAccessory:(id)arg1 ;
-(int)countForQueue:(id)arg1 ;
-(void)addAccessory:(id)arg1 toQueue:(id)arg2 context:(id)arg3 ;
-(id)getAccessoryForContext:(id)arg1 fromQueue:(id)arg2 ;
-(id)whichQueueForAccessory:(id)arg1 ;
-(void)enumerateQueue:(id)arg1 enumerateAccessory:(/*^block*/id)arg2 ;
-(void)setQueues:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)queues;
-(BOOL)_inQueue:(id)arg1 queue:(id)arg2 ;
@end

