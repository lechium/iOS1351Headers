/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NUGLObject.h>

@class NSError, NSString;

@interface NUGLShader : NUGLObject {

	long long _compilationStatus;
	NSError* _compilationError;
	long long _type;
	NSString* _source;

}

@property (readonly) unsigned glType; 
@property (readonly) unsigned glStage; 
@property (readonly) long long type;                 //@synthesize type=_type - In the implementation block
@property (readonly) NSString * source;              //@synthesize source=_source - In the implementation block
-(id)init;
-(long long)type;
-(NSString *)source;
-(void)delete;
-(void)generate:(id)arg1 ;
-(id)initWithType:(long long)arg1 source:(id)arg2 ;
-(unsigned)glType;
-(unsigned)glStage;
-(BOOL)compile:(id)arg1 error:(out id*)arg2 ;
-(void)_compile:(id)arg1 ;
@end

