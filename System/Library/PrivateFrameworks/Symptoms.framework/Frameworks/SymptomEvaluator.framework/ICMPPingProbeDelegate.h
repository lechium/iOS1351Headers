/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ICMPPingProbeDelegate <NSObject>
@optional
-(void)icmpPingProbe:(id)arg1 completedIterations:(unsigned long long)arg2 successfulCount:(unsigned long long)arg3 withError:(id)arg4;
-(void)icmpPingProbe:(id)arg1 echoRequestSent:(id)arg2 success:(BOOL)arg3;
-(void)icmpPingProbe:(id)arg1 echoResponseReceived:(id)arg2 success:(BOOL)arg3;

@end

