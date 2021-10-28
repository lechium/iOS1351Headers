/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:47 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSSet;

@interface _IKDOMMutationRuleSet : NSObject {

	NSArray* _mutationRules;
	NSSet* _dependentPathStrings;

}

@property (nonatomic,copy,readonly) NSArray * mutationRules;                   //@synthesize mutationRules=_mutationRules - In the implementation block
@property (nonatomic,copy,readonly) NSSet * dependentPathStrings;              //@synthesize dependentPathStrings=_dependentPathStrings - In the implementation block
-(NSSet *)dependentPathStrings;
-(NSArray *)mutationRules;
-(id)initWithMutationRules:(id)arg1 ;
@end
