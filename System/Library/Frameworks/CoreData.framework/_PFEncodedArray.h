/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSArray.h>

@class NSData;

@interface _PFEncodedArray : NSArray {

	NSData* _sourceData;
	int _cd_rc;
	unsigned _count;

}
+(Class)classForKeyedUnarchiver;
-(id)init;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)description;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)copy;
-(id)mutableCopy;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(Class)classForCoder;
-(const id*)_values;
-(Class)classForArchiver;
-(void)_replaceObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end
