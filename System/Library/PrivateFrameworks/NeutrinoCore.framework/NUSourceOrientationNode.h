/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NUOrientationNode.h>

@interface NUSourceOrientationNode : NUOrientationNode {

	BOOL _skipOrientation;

}

@property (nonatomic,readonly) BOOL skipOrientation;              //@synthesize skipOrientation=_skipOrientation - In the implementation block
+(long long)originalOrientationToApplyToSource:(id)arg1 skipOrientation:(BOOL)arg2 error:(out id*)arg3 ;
-(id)initWithInput:(id)arg1 source:(id)arg2 settings:(id)arg3 orientation:(long long)arg4 ;
-(id)initWithOrientation:(long long)arg1 input:(id)arg2 ;
-(id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3 ;
-(BOOL)skipOrientation;
@end
