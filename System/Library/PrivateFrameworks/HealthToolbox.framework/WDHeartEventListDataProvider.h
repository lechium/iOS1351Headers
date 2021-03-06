/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthToolbox/WDSampleListDataProvider.h>

@interface WDHeartEventListDataProvider : WDSampleListDataProvider
-(long long)cellStyle;
-(id)titleForSection:(unsigned long long)arg1 ;
-(id)sampleTypes;
-(id)_heartEventType;
-(double)customCellHeight;
-(double)customEstimatedCellHeight;
-(id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3 ;
-(id)createQueryForSampleType:(id)arg1 predicate:(id)arg2 limit:(long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(/*^block*/id)arg5 ;
@end

