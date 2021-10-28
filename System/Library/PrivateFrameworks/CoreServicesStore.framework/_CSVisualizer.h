/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreServicesStore.framework/CoreServicesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreServicesStore/CoreServicesStore-Structs.h>
@class NSMutableDictionary, NSRecursiveLock;

@interface _CSVisualizer : NSObject {

	NSMutableDictionary* _handlers;
	NSRecursiveLock* _lock;
	const CSStoreRef _store;
	NSMutableDictionary* _userInfo;

}

@property (readonly) const CSStoreRef store;                      //@synthesize store=_store - In the implementation block
@property (readonly) NSMutableDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(id)new;
+(void)enumerateValuesForTitlesInDescription:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)URLForUnit:(unsigned)arg1 inTable:(unsigned)arg2 ;
+(BOOL)unitDescription:(id)arg1 referencesUnit:(unsigned)arg2 inTable:(unsigned)arg3 ;
+(void)breakDownTable:(const Table*)arg1 inStore:(const Store*)arg2 buffer:(char*)arg3 ;
+(NSRange)rangeOfValueForTitle:(id)arg1 inDescription:(id)arg2 ;
+(id)predicateForSearchingDescriptionWithString:(id)arg1 error:(id*)arg2 ;
+(void)enumerateReferencesToUnitsInUnitDescription:(id)arg1 block:(/*^block*/id)arg2 ;
+(BOOL)getUnit:(unsigned*)arg1 inTable:(unsigned*)arg2 fromURL:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(NSMutableDictionary *)userInfo;
-(id)initWithStore:(CSStoreRef)arg1 ;
-(void)setHandler:(/*^block*/id)arg1 forTable:(unsigned)arg2 ;
-(id)initWithStore:(CSStoreRef)arg1 useStandardTableHandlers:(BOOL)arg2 ;
-(id)descriptionOfUnit:(unsigned)arg1 inTable:(unsigned)arg2 ;
-(id)summaryOfUnit:(unsigned)arg1 inTable:(unsigned)arg2 ;
-(const CSStoreRef)store;
-(/*^block*/id)handlerForTable:(unsigned)arg1 ;
-(void)setStandardTableHandlers;
-(id)breakDownUsage;
-(void)enumerateReferencesToUnit:(unsigned)arg1 inTable:(unsigned)arg2 block:(/*^block*/id)arg3 ;
@end
