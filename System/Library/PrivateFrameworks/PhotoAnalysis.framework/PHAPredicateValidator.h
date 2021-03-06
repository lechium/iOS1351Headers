/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet;

@interface PHAPredicateValidator : NSObject {

	NSSet* _allowedKeyPaths;

}

@property (retain) NSSet * allowedKeyPaths;              //@synthesize allowedKeyPaths=_allowedKeyPaths - In the implementation block
-(BOOL)validateValue:(id)arg1 error:(id*)arg2 ;
-(BOOL)validatePredicate:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateExpression:(id)arg1 error:(id*)arg2 ;
-(NSSet *)allowedKeyPaths;
-(void)setAllowedKeyPaths:(NSSet *)arg1 ;
@end

