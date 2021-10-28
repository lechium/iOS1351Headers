/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface ARTimeKeyedList : NSObject {

	unsigned long long _maxSize;
	NSMutableArray* _times;
	NSMutableArray* _objects;

}
-(id)init;
-(id)description;
-(void)clear;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(void)appendObject:(id)arg1 forTime:(double)arg2 ;
-(id)nearestObjectForTime:(double)arg1 ;
-(unsigned long long)insertionIndexForTime:(id)arg1 ;
@end
