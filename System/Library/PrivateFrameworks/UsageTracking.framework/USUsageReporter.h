/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSXPCConnection;

@interface USUsageReporter : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (readonly) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)getLocalDeviceIdentifierAndReturnError:(id*)arg1 ;
+(void)synchronizeUsageWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)xpcConnection;
-(id)getLocalDeviceIdentifierAndReturnError:(id*)arg1 ;
-(void)fetchReportsDuringInterval:(id)arg1 partitionInterval:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchReportsDuringInterval:(id)arg1 partitionInterval:(double)arg2 forceImmediateSync:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
@end
