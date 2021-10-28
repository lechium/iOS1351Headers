/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NURenderNode.h>

@interface NUPlaceholderNode : NURenderNode
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3 ;
-(id)_evaluateVideoCompositionWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateVideoPropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)initWithSettings:(id)arg1 inputs:(id)arg2 ;
-(id)initWithInputs:(id)arg1 ;
-(BOOL)isPlaceholderNode;
@end
