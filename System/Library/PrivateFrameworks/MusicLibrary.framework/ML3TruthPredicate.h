/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MusicLibrary/ML3Predicate.h>

@interface ML3TruthPredicate : ML3Predicate {

	BOOL _truthValue;

}
+(BOOL)supportsSecureCoding;
+(id)truePredicate;
+(id)falsePredicate;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_predicateString;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(BOOL)isTrueAlways;
-(BOOL)isFalseAlways;
@end

