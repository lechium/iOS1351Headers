/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:21 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IAMPresentationPolicy : NSObject {

	long long _policyGroup;
	double _minimumIntervalBetweenPresentations;

}

@property (nonatomic,readonly) long long policyGroup;                                   //@synthesize policyGroup=_policyGroup - In the implementation block
@property (nonatomic,readonly) double minimumIntervalBetweenPresentations;              //@synthesize minimumIntervalBetweenPresentations=_minimumIntervalBetweenPresentations - In the implementation block
+(long long)presentationPolicyGroupForGlobalPresentationPolicyGroup:(int)arg1 ;
-(double)minimumIntervalBetweenPresentations;
-(id)initWithMinimumIntervalBetweenPresentations:(double)arg1 forPresentationPolicyGroup:(long long)arg2 ;
-(long long)policyGroup;
@end
