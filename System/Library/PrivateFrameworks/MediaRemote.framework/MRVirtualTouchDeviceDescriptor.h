/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:02 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface MRVirtualTouchDeviceDescriptor : NSObject <NSCopying, NSMutableCopying> {

	BOOL _absolute;
	BOOL _integratedDisplay;
	MRHIDSize _screenSize;

}

@property (getter=isAbsolute,nonatomic,readonly) BOOL absolute;                                //@synthesize absolute=_absolute - In the implementation block
@property (getter=isIntegratedDisplay,nonatomic,readonly) BOOL integratedDisplay;              //@synthesize integratedDisplay=_integratedDisplay - In the implementation block
@property (nonatomic,readonly) _MRHIDSize screenSize;                                          //@synthesize screenSize=_screenSize - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isAbsolute;
-(_MRHIDSize)screenSize;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
-(BOOL)isIntegratedDisplay;
@end
