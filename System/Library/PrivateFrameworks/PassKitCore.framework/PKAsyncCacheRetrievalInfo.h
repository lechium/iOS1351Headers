/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:41 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PassKitCore/PassKitCore-Structs.h>
@class NSMutableArray;

@interface PKAsyncCacheRetrievalInfo : NSObject {

	os_unfair_lock_s _lock;
	BOOL _itemFetched;
	id _item;
	NSMutableArray* _deliveryBlocks;

}
-(id)init;
-(void)addDeliveryBlock:(/*^block*/id)arg1 ;
-(id)synchronouslyRetrieve:(/*^block*/id)arg1 outDeliveryBlocks:(id*)arg2 ;
-(void)deliverItem:(id)arg1 ;
@end

