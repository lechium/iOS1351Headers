/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface CanUseAppsCache : NSObject {

	NSMutableDictionary* cache;
	BOOL disabled;

}
+(BOOL)makeVerdictFromRationaleCode:(int)arg1 ;
-(id)init;
-(id)description;
-(void)disable;
-(void)enable;
-(id)_makeKeyFrom:(id)arg1 state:(long long)arg2 ;
-(BOOL)hasEntryFor:(id)arg1 state:(long long)arg2 rationaleCode:(int*)arg3 ;
-(void)insertEntryFor:(id)arg1 state:(long long)arg2 rationaleCode:(int)arg3 ;
@end

