/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/RealityKit.framework/RealityKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ARInternalSessionObserver <ARSessionDelegate>
@optional
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2;
-(void)sessionShouldAttemptRelocalization:(id)arg1 completion:(/*^block*/id)arg2;
-(void)session:(id)arg1 requestedRunWithConfiguration:(id)arg2 options:(unsigned long long)arg3;
-(void)session:(id)arg1 willRunWithConfiguration:(id)arg2;

@end

