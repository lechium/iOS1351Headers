/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class OITSUNoCopyDictionary, NSMutableArray, NSArray;

@interface OITSULRUCache : NSObject {

	OITSUNoCopyDictionary* mData;
	NSMutableArray* mOrderedKeys;
	unsigned long long mMax;
	id mCallbackTarget;
	SEL mCallback;

}

@property (nonatomic,readonly) unsigned long long maxSize; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * allValues; 
@property (nonatomic,readonly) NSArray * allKeys; 
-(void)dealloc;
-(id)description;
-(unsigned long long)count;
-(NSArray *)allKeys;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(NSArray *)allValues;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)maxSize;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(void)p_removeOldestObject;
-(void)setEvictionCallbackTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)clearEvictionCallbackTarget;
@end

