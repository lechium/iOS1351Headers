/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:10 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/MTLPipelineCache.h>

@class NSString;

@interface _MTLPipelineCache : NSObject <MTLPipelineCache> {

	BOOL _writable;
	MTLCompilerCache* _compilerCache;
	BOOL _disableRunTimeCompilation;

}

@property (readonly) BOOL writable;                                 //@synthesize writable=_writable - In the implementation block
@property (readonly) MTLCompilerCache* cache;                       //@synthesize compilerCache=_compilerCache - In the implementation block
@property (assign) BOOL disableRunTimeCompilation;                  //@synthesize disableRunTimeCompilation=_disableRunTimeCompilation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(MTLCompilerCache*)cache;
-(void)setDisableRunTimeCompilation:(BOOL)arg1 ;
-(void)write;
-(BOOL)writable;
-(id)initWithFilePath:(id)arg1 readOnly:(BOOL)arg2 deviceInfo:(const MTLTargetDeviceArch*)arg3 ;
-(BOOL)disableRunTimeCompilation;
@end

