/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMapTable;

@interface REKeyMultiValueMap : NSObject {

	NSMapTable* _keyMap;
	NSMapTable* _valueMap;

}

@property (nonatomic,readonly) unsigned long long keyCount; 
@property (nonatomic,readonly) unsigned long long valueCount; 
-(id)init;
-(void)removeKey:(id)arg1 ;
-(id)valuesForKey:(id)arg1 ;
-(unsigned long long)valueCount;
-(id)keyForValue:(id)arg1 ;
-(id)initWithValuePointFunctionOptions:(unsigned long long)arg1 ;
-(void)addKey:(id)arg1 withValues:(id)arg2 ;
-(unsigned long long)keyCount;
-(void)insertValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeValue:(id)arg1 forKey:(id)arg2 ;
-(void)enumerateValuesForKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

