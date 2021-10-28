/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthToolbox/WDSampleListDataProvider.h>

@class NSMutableDictionary, NSMutableArray;

@interface WDSleepListDataProvider : WDSampleListDataProvider {

	NSMutableDictionary* _sleepData;
	NSMutableArray* _orderedKeys;

}
-(unsigned long long)numberOfSections;
-(long long)cellStyle;
-(id)titleForSection:(unsigned long long)arg1 ;
-(void)deleteAllData;
-(id)sampleTypes;
-(void)_callUpdateHandler;
-(id)textForObject:(id)arg1 ;
-(unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 ;
-(id)viewControllerForItemAtIndexPath:(id)arg1 ;
-(id)_sleepDataDictionaryFromSamples:(id)arg1 ;
-(id)_sleepSampleAtIndex:(unsigned long long)arg1 section:(unsigned long long)arg2 ;
-(id)secondaryTextForObject:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(BOOL*)arg3 ;
@end
