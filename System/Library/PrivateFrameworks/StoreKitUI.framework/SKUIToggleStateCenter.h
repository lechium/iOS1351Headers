/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSHashTable;

@interface SKUIToggleStateCenter : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _itemStates;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSHashTable* _observers;

}
+(id)defaultCenter;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)itemForIdentifier:(id)arg1 ;
-(BOOL)updateItem:(id)arg1 ;
-(void)_notifyObserversOfStateChanges:(id)arg1 ;
-(void)clearAll;
-(void)_accountStoreChangeNotification:(id)arg1 ;
@end

