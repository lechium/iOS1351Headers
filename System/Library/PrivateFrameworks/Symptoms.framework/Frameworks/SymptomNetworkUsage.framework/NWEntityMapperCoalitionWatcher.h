/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:00 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SymptomNetworkUsage/NWEntityMapper.h>

@class NSMutableDictionary;

@interface NWEntityMapperCoalitionWatcher : NWEntityMapper {

	NSMutableDictionary* _uuidCoalitionNameMap;

}
-(id)init;
-(id)identifierForUUID:(id)arg1 derivation:(int*)arg2 ;
-(void)_uuidCoalitionNameMapPrune;
-(BOOL)noteUUID:(id)arg1 forPid:(int)arg2 ;
@end

