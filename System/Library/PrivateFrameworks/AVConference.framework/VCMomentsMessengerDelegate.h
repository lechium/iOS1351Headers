/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:58 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VCMomentsMessengerDelegate <NSObject>
@required
-(void)streamTokenDidCleanupAllRequests:(long long)arg1;
-(void)streamToken:(long long)arg1 didStartProcessingRequest:(id)arg2 error:(id)arg3;
-(void)streamToken:(long long)arg1 didEndProcessingRequest:(id)arg2 stillImageURL:(id)arg3 movieURL:(id)arg4 error:(id)arg5;
-(void)streamToken:(long long)arg1 didFinishRequest:(id)arg2 didSucceed:(BOOL)arg3;

@end

