/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface _HKCFGNodeCache : NSObject {

	NSMutableDictionary* _cache;

}
-(id)init;
-(id)nodesForPosition:(unsigned long long)arg1 nonTerminal:(id)arg2 withLengthAllowance:(unsigned long long)arg3 ;
-(void)cacheNodes:(id)arg1 forPosition:(unsigned long long)arg2 nonTerminal:(id)arg3 lengthAllowance:(unsigned long long)arg4 ;
@end
