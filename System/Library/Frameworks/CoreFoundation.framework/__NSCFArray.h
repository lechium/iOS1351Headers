/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:33:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@interface __NSCFArray : NSMutableArray
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(unsigned long long)retainCount;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)hash;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS26*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)removeLastObject;
-(Class)classForCoder;
@end

