/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet;

@interface PPQuickTypeExplanationSet : NSObject <NSSecureCoding> {

	NSMutableSet* _set;

}
+(BOOL)supportsSecureCoding;
+(id)stringFromExplanation:(unsigned char)arg1 ;
+(id)uniqueKeycodeFromExplanation:(unsigned char)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)push:(unsigned char)arg1 ;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqualToQuickTypeExplanationSet:(id)arg1 ;
@end
