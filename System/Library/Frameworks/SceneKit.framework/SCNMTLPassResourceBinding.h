/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:12 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNMTLResourceBinding.h>

@interface SCNMTLPassResourceBinding : SCNMTLResourceBinding {

	SCD_Struct_SC91* _inputs;
	C3DFXPassInputRef _samplerInput;
	long long inputsCount;
	long long bufferSize;

}

@property (assign,nonatomic) long long inputsCount; 
@property (assign,nonatomic) long long bufferSize; 
-(id)init;
-(void)dealloc;
-(long long)bufferSize;
-(void)setBufferSize:(long long)arg1 ;
-(long long)inputsCount;
-(void)setInputsCount:(long long)arg1 ;
@end

