/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SensorKit/SensorKit-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class SRFrameStore;

@interface SRFramesStoreOffsetEnumerator : NSObject <NSFastEnumeration> {

	SRFrameStore* _framesStore;
	unsigned long long _offset;

}
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_SR3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithFramesStore:(id)arg1 offset:(unsigned long long)arg2 ;
@end
