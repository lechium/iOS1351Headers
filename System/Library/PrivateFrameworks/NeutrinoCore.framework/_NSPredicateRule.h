/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NSPredicateRule.h>

@protocol NSObject;
@interface _NSPredicateRule : NSPredicateRule {

	id<NSObject> _fact;
	double _grade;
	BOOL _asserting;

}
+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)performActionWithSystem:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 fact:(id)arg2 grade:(double)arg3 asserting:(BOOL)arg4 ;
@end
