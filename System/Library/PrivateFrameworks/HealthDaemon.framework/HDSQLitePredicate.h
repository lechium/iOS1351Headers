/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:58 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDSQLitePredicate : NSObject <NSCopying>
+(id)hdmc_predicateForSamplesInDayIndexRange:(SCD_Struct_HD78)arg1 ;
+(id)truePredicate;
+(id)falsePredicate;
+(id)compoundPredicateWithPredicate:(id)arg1 otherPredicate:(id)arg2 ;
+(id)disjunctionWithPredicate:(id)arg1 otherPredicate:(id)arg2 ;
+(id)booleanPredicateWithValue:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(id)SQLJoinClausesForEntityClass:(Class)arg1 ;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(int*)arg2 ;
-(BOOL)isCompatibleWithPredicate:(id)arg1 ;
@end

