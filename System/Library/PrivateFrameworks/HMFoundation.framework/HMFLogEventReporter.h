/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:42 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HMFSystemInfo;

@interface HMFLogEventReporter : NSObject {

	HMFSystemInfo* _systemInfo;

}

@property (nonatomic,readonly) HMFSystemInfo * systemInfo;                 //@synthesize systemInfo=_systemInfo - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
+(id)sharedReporter;
-(BOOL)isEnabled;
-(HMFSystemInfo *)systemInfo;
-(id)initWithSystemInfo:(id)arg1 ;
-(id)startSessionForServiceName:(id)arg1 signpostId:(unsigned long long)arg2 finalizeBlock:(/*^block*/id)arg3 ;
-(id)adoptVoucher:(id)arg1 signpostId:(unsigned long long)arg2 finalizeBlock:(/*^block*/id)arg3 ;
-(void)submitSingleEventWithName:(id)arg1 payload:(id)arg2 ;
@end

