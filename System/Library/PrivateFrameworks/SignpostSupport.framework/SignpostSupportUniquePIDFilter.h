/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SignpostSupport/SignpostPredicateProducer.h>

@class NSSet, NSPredicate;

@interface SignpostSupportUniquePIDFilter : NSObject <SignpostPredicateProducer> {

	NSSet* _uniquePidSet;

}

@property (nonatomic,readonly) unsigned long long _compoundPredicateType; 
@property (nonatomic,readonly) BOOL _wantsNotEqual; 
@property (nonatomic,readonly) NSSet * uniquePidSet;                                   //@synthesize uniquePidSet=_uniquePidSet - In the implementation block
@property (nonatomic,readonly) NSPredicate * predicateEquivalent; 
-(id)init;
-(BOOL)passesUniquePIDNumber:(id)arg1 ;
-(NSPredicate *)predicateEquivalent;
-(unsigned long long)_compoundPredicateType;
-(BOOL)_wantsNotEqual;
-(NSSet *)uniquePidSet;
-(void)addUniquePIDNumber:(id)arg1 ;
-(void)addUniquePIDNumberSet:(id)arg1 ;
@end
