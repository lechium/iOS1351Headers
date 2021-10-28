/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:54 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMapTable, NSObject;

@interface CoreDAVLogging : NSObject {

	NSMutableDictionary* _logDelegates;
	NSMapTable* _primaryLogDelegate;
	NSObject*<OS_dispatch_queue> _delegateMuckingQueue;

}
+(id)sharedLogging;
-(id)init;
-(void)addLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2 ;
-(void)removeLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2 ;
-(id)logHandleForAccountInfoProvider:(id)arg1 ;
-(void)_logOldMessageForAccountInfoProvider:(id)arg1 level:(unsigned char)arg2 format:(const char*)arg3 ;
-(id)_delegatesToLogForProvider:(id)arg1 ;
-(BOOL)shouldLogAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2 ;
-(BOOL)_shouldOutputAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2 ;
-(id)delegatesToLogTransmittedDataForAccountInfoProvider:(id)arg1 ;
-(void)logDiagnosticForProvider:(id)arg1 withLevel:(long long)arg2 format:(id)arg3 args:(char*)arg4 ;
@end
