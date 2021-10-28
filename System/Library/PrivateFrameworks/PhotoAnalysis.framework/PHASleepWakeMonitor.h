/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PHASleepWakeMonitor : NSObject {

	unsigned _powerAssertionID;

}

@property (assign) unsigned powerAssertionID;              //@synthesize powerAssertionID=_powerAssertionID - In the implementation block
+(BOOL)isSystemInDarkWake;
-(void)takeUserIdlePowerAssertion;
-(void)releaseUserIdlePowerAssertion;
-(unsigned)powerAssertionID;
-(void)setPowerAssertionID:(unsigned)arg1 ;
@end
