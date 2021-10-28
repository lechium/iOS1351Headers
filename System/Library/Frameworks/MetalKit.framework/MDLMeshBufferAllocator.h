/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MDLMeshBufferAllocator <NSObject>
@required
-(id)newBufferWithData:(id)arg1 type:(unsigned long long)arg2;
-(id)newZoneForBuffersWithSize:(id)arg1 andType:(id)arg2;
-(id)newBufferFromZone:(id)arg1 data:(id)arg2 type:(unsigned long long)arg3;
-(id)newBufferFromZone:(id)arg1 length:(unsigned long long)arg2 type:(unsigned long long)arg3;
-(id)newBuffer:(unsigned long long)arg1 type:(unsigned long long)arg2;
-(id)newZone:(unsigned long long)arg1;

@end
