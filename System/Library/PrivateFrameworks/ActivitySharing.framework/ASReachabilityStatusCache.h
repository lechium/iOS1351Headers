/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface ASReachabilityStatusCache : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _cache;

}
-(id)init;
-(id)statusForDestination:(id)arg1 ;
-(id)statusesForDestinations:(id)arg1 ;
-(void)addStatusesByDestination:(id)arg1 ;
-(void)setStatus:(id)arg1 forDestination:(id)arg2 ;
@end
