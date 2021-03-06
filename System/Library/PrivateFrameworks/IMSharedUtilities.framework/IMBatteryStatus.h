/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IMBatteryStatusTestDelegate;
@interface IMBatteryStatus : NSObject {

	id<IMBatteryStatusTestDelegate> _testDelegate;

}

@property (assign,nonatomic,__weak) id<IMBatteryStatusTestDelegate> testDelegate;              //@synthesize testDelegate=_testDelegate - In the implementation block
@property (getter=isCharging,readonly) BOOL charging; 
-(id<IMBatteryStatusTestDelegate>)testDelegate;
-(BOOL)isCharging;
-(void)setTestDelegate:(id<IMBatteryStatusTestDelegate>)arg1 ;
@end

