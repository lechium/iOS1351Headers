/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:55 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet;

@interface CalDisjointDateRange : NSObject <NSCopying, NSSecureCoding> {

	NSMutableSet* _distinctRanges;

}

@property (nonatomic,copy) NSMutableSet * distinctRanges;              //@synthesize distinctRanges=_distinctRanges - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)disjointRangeWithDistinctRanges:(id)arg1 ;
+(id)disjointRangeWithSingleRange:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)containsDate:(id)arg1 ;
-(BOOL)containsRange:(id)arg1 ;
-(double)totalDuration;
-(id)addRange:(id)arg1 ;
-(BOOL)intersectsRange:(id)arg1 ;
-(NSMutableSet *)distinctRanges;
-(id)subtractRange:(id)arg1 ;
-(id)intersectionWithRange:(id)arg1 ;
-(id)initWithDistinctRanges:(id)arg1 ;
-(id)sortedDistinctRanges;
-(id)addDisjointRange:(id)arg1 ;
-(id)subtractDisjointRange:(id)arg1 ;
-(id)intersectionWithDisjointRange:(id)arg1 ;
-(void)setDistinctRanges:(NSMutableSet *)arg1 ;
@end

