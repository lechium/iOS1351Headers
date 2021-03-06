/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:12 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLArgumentEncoder;
#import <SceneKit/SceneKit-Structs.h>
@class NSMutableArray, MTLArgument, NSString;

@interface SCNMTLResourceBinding : NSObject {

	BOOL _needsRenderResource;
	SCD_Struct_SC51 _indices;
	SCD_Struct_SC51 _samplerIndices;
	NSMutableArray* _usedResources;
	id _bindBlock;
	MTLArgument* _argument;
	id<MTLArgumentEncoder> _argumentEncoder;

}

@property (nonatomic,retain) MTLArgument * argument;                              //@synthesize argument=_argument - In the implementation block
@property (nonatomic,retain) id<MTLArgumentEncoder> argumentEncoder;              //@synthesize argumentEncoder=_argumentEncoder - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSMutableArray * usedResources; 
@property (assign,nonatomic) BOOL needsRenderResource; 
@property (nonatomic,copy) id bindBlock;                                          //@synthesize bindBlock=_bindBlock - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(unsigned long long)type;
-(MTLArgument *)argument;
-(void)setBindBlock:(id)arg1 ;
-(id)bindBlock;
-(BOOL)needsRenderResource;
-(id<MTLArgumentEncoder>)argumentEncoder;
-(NSMutableArray *)usedResources;
-(void)setNeedsRenderResource:(BOOL)arg1 ;
-(void)setArgument:(MTLArgument *)arg1 ;
-(void)setArgumentEncoder:(id<MTLArgumentEncoder>)arg1 ;
@end

