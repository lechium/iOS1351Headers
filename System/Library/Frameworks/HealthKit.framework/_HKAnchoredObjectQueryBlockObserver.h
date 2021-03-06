/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_HKAnchoredObjectQueryObserver.h>

@protocol OS_dispatch_queue;
@class NSOperationQueue, NSObject, NSString;

@interface _HKAnchoredObjectQueryBlockObserver : NSObject <_HKAnchoredObjectQueryObserver> {

	/*^block*/id _updateHandler;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)queryManager:(id)arg1 didReceiveUpdatesForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4 ;
-(id)initWithHandler:(/*^block*/id)arg1 operationQueue:(id)arg2 ;
-(id)initWithHandler:(/*^block*/id)arg1 dispatchQueue:(id)arg2 ;
@end

