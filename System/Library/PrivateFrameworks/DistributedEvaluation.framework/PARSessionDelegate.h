/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:28 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PARSessionDelegate <NSObject>
@optional
-(void)session:(id)arg1 didDownloadResource:(id)arg2;
-(void)session:(id)arg1 didDeleteResource:(id)arg2;

@required
-(void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;

@end
