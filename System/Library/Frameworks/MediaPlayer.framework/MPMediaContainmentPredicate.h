/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:12 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPMediaPredicate.h>

@class NSString, NSSet;

@interface MPMediaContainmentPredicate : MPMediaPredicate {

	NSString* _property;
	NSSet* _values;

}

@property (nonatomic,copy,readonly) NSString * property;              //@synthesize property=_property - In the implementation block
@property (nonatomic,copy,readonly) NSSet * values;                   //@synthesize values=_values - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateWithProperty:(id)arg1 values:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)values;
-(NSString *)property;
-(id)ML3PredicateForTrack;
-(id)ML3PredicateForContainer;
-(id)_ML3PredicateForEntityClass:(Class)arg1 ;
@end

