/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/MTLPointerType.h>

@class MTLType;

@interface MTLPointerTypeInternal : MTLPointerType {

	unsigned long long _dataType;
	unsigned long long _elementType;
	MTLType* _elementTypeInfo;
	unsigned long long _access;
	unsigned long long _alignment;
	unsigned long long _dataSize;
	BOOL _elementIsArgumentBuffer;
	BOOL _isConstantBuffer;
	BOOL _doRetain;

}
-(void)dealloc;
-(unsigned long long)alignment;
-(unsigned long long)access;
-(unsigned long long)dataType;
-(unsigned long long)elementType;
-(unsigned long long)dataSize;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)structType;
-(id)elementStructType;
-(id)elementArrayType;
-(BOOL)elementIsArgumentBuffer;
-(id)elementTypeDescription;
-(BOOL)isConstantBuffer;
-(void)setAlignment:(unsigned long long)arg1 dataSize:(unsigned long long)arg2 ;
-(id)initWithElementType:(unsigned long long)arg1 elementTypeDescription:(id)arg2 access:(unsigned long long)arg3 alignment:(unsigned long long)arg4 dataSize:(unsigned long long)arg5 elementIsIndirectArgumentBuffer:(BOOL)arg6 isConstantBuffer:(BOOL)arg7 ;
-(id)initWithElementType:(unsigned long long)arg1 elementTypeDescription:(id)arg2 access:(unsigned long long)arg3 alignment:(unsigned long long)arg4 dataSize:(unsigned long long)arg5 elementIsIndirectArgumentBuffer:(BOOL)arg6 isConstantBuffer:(BOOL)arg7 doRetain:(BOOL)arg8 ;
-(BOOL)elementIsIndirectArgumentBuffer;
@end

