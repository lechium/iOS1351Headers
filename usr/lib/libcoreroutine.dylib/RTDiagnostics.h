/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:54 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/RTService.h>

@class RTDefaultsManager, RTPlatform, NSMutableArray;

@interface RTDiagnostics : RTService {

	RTDefaultsManager* _defaultsManager;
	RTPlatform* _platform;
	NSMutableArray* _diagnosticProviders;

}
+(id)createDiagnosticsURLWithError:(id*)arg1 ;
+(id)crashReports;
+(id)stringFromDateWithFormat;
+(BOOL)createArchiveSourceURL:(id)arg1 destinationURL:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(void)_shutdown;
-(void)fetchPathToDiagnosticFilesWithHandler:(/*^block*/id)arg1 ;
-(id)initWithDefaultsManager:(id)arg1 platform:(id)arg2 ;
-(void)logProcessDiagnosticInformation;
-(void)addDiagnosticProvider:(id)arg1 ;
-(void)fetchPathToBackupWithHandler:(/*^block*/id)arg1 ;
-(id)_collectDiagnosticFilesWithError:(id*)arg1 ;
-(void)_fetchPathToDiagnosticFilesWithHandler:(/*^block*/id)arg1 ;
-(id)_collectBackupWithError:(id*)arg1 ;
-(void)_fetchPathToBackupWithHandler:(/*^block*/id)arg1 ;
@end
