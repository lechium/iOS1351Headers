/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface SGNameInversionPredictor : NSObject {

	NSDictionary* _tradToTrie;
	NSDictionary* _tradToInversionRate;
	double _confidenceThreshold;

}
+(id)sharedInstance;
+(BOOL)shouldInvertFirst:(id)arg1 last:(id)arg2 ;
-(id)init;
-(BOOL)shouldInvertFirst:(id)arg1 last:(id)arg2 ;
-(double)firstNameLikelihood:(id)arg1 underNamingTradition:(id)arg2 default:(double)arg3 ;
-(double)inversionRateForNamingTradition:(id)arg1 ;
-(BOOL)shouldInvertFirst:(id)arg1 last:(id)arg2 underNamingTradition:(id)arg3 ;
@end
