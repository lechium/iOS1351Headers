/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMICameraVideoAnalyzerDelegate <NSObject>
@required
-(void)analyzer:(id)arg1 didAnalyzeFragment:(id)arg2 withResult:(id)arg3;
-(void)analyzer:(id)arg1 didNotAnalyzeFragment:(id)arg2 withResult:(id)arg3;
-(void)analyzer:(id)arg1 didFindSignificantEvent:(id)arg2 inFragment:(id)arg3;
-(void)analyzer:(id)arg1 didFailAnalysisForFragment:(id)arg2 withError:(id)arg3;

@end

