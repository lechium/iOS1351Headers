/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUKeyframeSequence.h>

@interface NUKeyframeSequenceMatrixFloat33 : NUKeyframeSequence {

	SCD_Struct_NU15* _values;

}
-(void)dealloc;
-(SCD_Struct_NU15)sampleAtTime:(SCD_Struct_NU6)arg1 ;
-(SCD_Struct_NU15)valueOfKeyframeAtIndex:(long long)arg1 ;
-(id)initWithCount:(unsigned long long)arg1 times:(SCD_Struct_NU6*)arg2 values:(SCD_Struct_NU15*)arg3 ;
@end

