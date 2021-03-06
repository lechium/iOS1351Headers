/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:21 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDiagnosticExtensionCore.framework/HealthDiagnosticExtensionCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDiagnosticExtensionCore/HDDiagnosticOperation.h>

@interface HDNanoSyncDiagnosticOperation : HDDiagnosticOperation
-(void)run;
-(id)reportFilename;
-(void)_collectNanoSyncMessageDatabase;
-(id)_sortedPairedDevices;
-(void)_reportSummaryWithDevices:(id)arg1 ;
-(void)_reportQuickSwitchSummaryWithDevicesByPairingID:(id)arg1 ;
-(id)nanoSyncDatabaseURL;
-(id)_reportDetailsForDevice:(id)arg1 database:(id)arg2 ;
-(void)_reportIDSSummaryForDeviceIdentifier:(id)arg1 database:(id)arg2 ;
-(long long)_countOfMessagesForDeviceIdentifier:(id)arg1 description:(id)arg2 predicateSQL:(id)arg3 date:(id)arg4 database:(id)arg5 ;
-(void)_reportMostRecentMessageDateWithDeviceIdentifier:(id)arg1 description:(id)arg2 field:(id)arg3 predicateSQL:(id)arg4 database:(id)arg5 ;
-(void)_reportMostRecentMessageErrorsWithDeviceIdentifier:(id)arg1 database:(id)arg2 ;
@end

