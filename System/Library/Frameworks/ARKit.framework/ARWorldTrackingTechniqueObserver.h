/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ARWorldTrackingTechniqueObserver <NSObject>
@optional
-(void)technique:(id)arg1 didChangeState:(long long)arg2;
-(void)technique:(id)arg1 didOutputCollaborationData:(id)arg2;
-(void)technique:(id)arg1 didDetectPlane:(id)arg2 timestamp:(double)arg3;
-(void)technique:(id)arg1 didOutputSceneUnderstandingData:(id)arg2 timestamp:(double)arg3;

@end

