/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PRSharingSessionDelegate <NSObject>
@optional
-(void)session:(id)arg1 didChangeProximitySensorState:(unsigned long long)arg2;

@required
-(void)session:(id)arg1 didEstimateScores:(id)arg2;
-(void)session:(id)arg1 didFailwithError:(id)arg2;

@end

