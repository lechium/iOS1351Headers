/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameplayKit/GKRule.h>

@interface _GKBlockRule : GKRule {

	/*^block*/id _predicate;
	/*^block*/id _action;

}
-(BOOL)evaluatePredicateWithSystem:(id)arg1 ;
-(void)performActionWithSystem:(id)arg1 ;
-(id)initWithPredicate:(/*^block*/id)arg1 action:(/*^block*/id)arg2 ;
@end
