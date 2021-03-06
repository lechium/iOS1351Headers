/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WLDataclassMigrating <NSObject>
@optional
-(void)importDataFromProvider:(/*^block*/id)arg1 forSummaries:(id)arg2 summaryStart:(/*^block*/id)arg3 summaryCompletion:(/*^block*/id)arg4;
-(void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(/*^block*/id)arg4;
-(void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2;
-(BOOL)potentiallyLargeRecordData;
-(void)performPreImportPhaseForSummary:(id)arg1 data:(id)arg2;
-(id)importWillBegin;
-(void)importDidEnd;

@required
-(id)contentType;
-(id)dataType;
-(BOOL)accountBased;
-(BOOL)storeRecordDataInDatabase;

@end

