/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:54 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/IDSIDQueryControllerDelegate.h>

@class ATXHeuristicDevice, _PASLock, NSString;

@interface ATXBestContactHandleForServiceDataSource : NSObject <IDSIDQueryControllerDelegate> {

	ATXHeuristicDevice* _device;
	_PASLock* _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDevice:(id)arg1 ;
-(void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2 ;
-(void)bestHandleForContact:(id)arg1 service:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)_getBestGuessFromRankedHandle:(id)arg1 forService:(id)arg2 ;
@end

