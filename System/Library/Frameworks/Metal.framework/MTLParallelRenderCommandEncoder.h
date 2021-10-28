/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:10 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLParallelRenderCommandEncoder <MTLCommandEncoder>
@required
-(void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
-(void)setDepthStoreAction:(unsigned long long)arg1;
-(void)setStencilStoreAction:(unsigned long long)arg1;
-(void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
-(void)setDepthStoreActionOptions:(unsigned long long)arg1;
-(void)setStencilStoreActionOptions:(unsigned long long)arg1;
-(id)renderCommandEncoder;

@end
