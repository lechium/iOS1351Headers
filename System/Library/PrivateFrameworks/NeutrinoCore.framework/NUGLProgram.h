/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NUGLObject.h>

@class NSError, NSDictionary, NUGLShader;

@interface NUGLProgram : NUGLObject {

	long long _buildStatus;
	NSError* _buildError;
	NSDictionary* _uniforms;
	NSDictionary* _attributes;
	NUGLShader* _shader;

}

@property (readonly) NUGLShader * shader;                    //@synthesize shader=_shader - In the implementation block
@property (readonly) NSDictionary * uniforms;                //@synthesize uniforms=_uniforms - In the implementation block
@property (readonly) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(id)init;
-(NSDictionary *)attributes;
-(void)delete;
-(void)generate:(id)arg1 ;
-(NUGLShader *)shader;
-(NSDictionary *)uniforms;
-(id)initWithShader:(id)arg1 ;
-(BOOL)build:(id)arg1 error:(out id*)arg2 ;
-(void)_build:(id)arg1 ;
@end

