/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:12 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SceneKit/SceneKit-Structs.h>
@class SCNMTLBuffer;

@interface SCNMTLMeshElement : NSObject {

	unsigned long long _primitiveType;
	long long _indexCount;
	unsigned long long _instanceCount;
	long long _sharedIndexBufferOffset;
	SCNMTLBuffer* _indexBuffer;
	unsigned long long _indexType;
	long long _effectiveIndexOffset;
	long long _effectiveIndexCount;

}

@property (assign,nonatomic) long long indexCount;                           //@synthesize indexCount=_indexCount - In the implementation block
@property (assign,nonatomic) unsigned long long instanceCount;               //@synthesize instanceCount=_instanceCount - In the implementation block
@property (assign,nonatomic) long long sharedIndexBufferOffset;              //@synthesize sharedIndexBufferOffset=_sharedIndexBufferOffset - In the implementation block
@property (nonatomic,retain) SCNMTLBuffer * indexBuffer;                     //@synthesize indexBuffer=_indexBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long indexType;                   //@synthesize indexType=_indexType - In the implementation block
@property (assign,nonatomic) unsigned long long primitiveType;               //@synthesize primitiveType=_primitiveType - In the implementation block
@property (nonatomic,readonly) long long primitiveCount; 
@property (nonatomic,readonly) long long effectiveIndexOffset;               //@synthesize effectiveIndexOffset=_effectiveIndexOffset - In the implementation block
@property (nonatomic,readonly) long long effectiveIndexCount;                //@synthesize effectiveIndexCount=_effectiveIndexCount - In the implementation block
-(void)dealloc;
-(id)description;
-(unsigned long long)indexType;
-(void)setIndexType:(unsigned long long)arg1 ;
-(unsigned long long)primitiveType;
-(void)setInstanceCount:(unsigned long long)arg1 ;
-(unsigned long long)instanceCount;
-(long long)indexCount;
-(SCNMTLBuffer *)indexBuffer;
-(void)setIndexCount:(long long)arg1 ;
-(void)setPrimitiveType:(unsigned long long)arg1 ;
-(long long)primitiveCount;
-(void)setIndexBuffer:(SCNMTLBuffer *)arg1 ;
-(void)setSharedIndexBufferOffset:(long long)arg1 ;
-(void)setupWithElement:(_C3DMeshElement*)arg1 ;
-(long long)effectiveIndexCount;
-(long long)effectiveIndexOffset;
-(long long)sharedIndexBufferOffset;
-(void)setPrimitiveRange:(SCD_Struct_SC85)arg1 ;
@end

