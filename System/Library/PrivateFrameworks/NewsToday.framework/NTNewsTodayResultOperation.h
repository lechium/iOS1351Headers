/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsToday/NTTodayResultOperation.h>

@class NSDate, NTCatchUpOperationForYouFetchInfo, NTTodayResults, NSDictionary, NTPBTodayResultOperationFetchInfo;

@interface NTNewsTodayResultOperation : NTTodayResultOperation {

	BOOL _lastOperationFailedToFinish;
	NSDate* _filterDate;
	NTCatchUpOperationForYouFetchInfo* _forYouFetchInfo;
	NTTodayResults* _resultTodayResults;
	NSDictionary* _resultAssetHandlesByAssetID;
	NTPBTodayResultOperationFetchInfo* _resultFetchInfo;
	NSDictionary* _todayConfigOperationHeldRecordsByType;

}

@property (nonatomic,copy) NSDate * filterDate;                                                 //@synthesize filterDate=_filterDate - In the implementation block
@property (assign,nonatomic) BOOL lastOperationFailedToFinish;                                  //@synthesize lastOperationFailedToFinish=_lastOperationFailedToFinish - In the implementation block
@property (nonatomic,copy) NTCatchUpOperationForYouFetchInfo * forYouFetchInfo;                 //@synthesize forYouFetchInfo=_forYouFetchInfo - In the implementation block
@property (nonatomic,copy) NTTodayResults * resultTodayResults;                                 //@synthesize resultTodayResults=_resultTodayResults - In the implementation block
@property (nonatomic,copy) NSDictionary * resultAssetHandlesByAssetID;                          //@synthesize resultAssetHandlesByAssetID=_resultAssetHandlesByAssetID - In the implementation block
@property (nonatomic,copy) NTPBTodayResultOperationFetchInfo * resultFetchInfo;                 //@synthesize resultFetchInfo=_resultFetchInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * todayConfigOperationHeldRecordsByType;              //@synthesize todayConfigOperationHeldRecordsByType=_todayConfigOperationHeldRecordsByType - In the implementation block
+(void)initialize;
-(id)init;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)prepareOperation;
-(NTCatchUpOperationForYouFetchInfo *)forYouFetchInfo;
-(void)setForYouFetchInfo:(NTCatchUpOperationForYouFetchInfo *)arg1 ;
-(void)setResultTodayResults:(NTTodayResults *)arg1 ;
-(void)setResultAssetHandlesByAssetID:(NSDictionary *)arg1 ;
-(void)setResultFetchInfo:(NTPBTodayResultOperationFetchInfo *)arg1 ;
-(NTTodayResults *)resultTodayResults;
-(NSDictionary *)resultAssetHandlesByAssetID;
-(NTPBTodayResultOperationFetchInfo *)resultFetchInfo;
-(NSDictionary *)todayConfigOperationHeldRecordsByType;
-(void)setTodayConfigOperationHeldRecordsByType:(NSDictionary *)arg1 ;
-(void)setLastOperationFailedToFinish:(BOOL)arg1 ;
-(BOOL)_useForegroundMinimumUpdateInterval;
-(BOOL)lastOperationFailedToFinish;
-(id)_sectionCTRsWithTodayConfig:(id)arg1 personalizationTreatment:(id)arg2 aggregateStore:(id)arg3 ;
-(void)_fetchTodayResultsWithFetchHelper:(id)arg1 maximumCachedAgeForForYou:(unsigned long long)arg2 aggregator:(id)arg3 appConfiguration:(id)arg4 feedPersonalizer:(id)arg5 todayData:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_assembleQueueDescriptorsWithConfig:(id)arg1 allowOnlyWatchEligibleSections:(BOOL)arg2 respectsWidgetVisibleSectionsLimit:(BOOL)arg3 personalizationTreatment:(id)arg4 aggregateStore:(id)arg5 appConfiguration:(id)arg6 todayData:(id)arg7 completion:(/*^block*/id)arg8 ;
-(void)_registerForYouFetchWithForYouFetchInfo:(id)arg1 ;
-(void)_finalizeTodayResultsWithSectionDescriptors:(id)arg1 catchUpOperationResultsBySectionDescriptor:(id)arg2 itemIDsOfLeadingCells:(id)arg3 slotAllocationByDynamicSlotItemID:(id)arg4 appConfiguration:(id)arg5 feedPersonalizer:(id)arg6 todayData:(id)arg7 completion:(/*^block*/id)arg8 ;
-(NSDate *)filterDate;
-(void)setFilterDate:(NSDate *)arg1 ;
@end

