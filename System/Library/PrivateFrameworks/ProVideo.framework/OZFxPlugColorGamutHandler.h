/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PROAPIObject.h>
#import <libobjc.A.dylib/FxColorGamutAPI.h>

@class NSString;

@interface OZFxPlugColorGamutHandler : NSObject <PROAPIObject, FxColorGamutAPI> {

	OZFxPlugSharedBase* sharedBase;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)colorPrimaries;
-(id)initWithPlugin:(OZFxPlugSharedBase*)arg1 ;
-(id)colorMatrixFromDesiredRGBToYCbCrAtTime:(/*function pointer*/void**)arg1 ;
-(id)colorMatrixFromYCbCrToDesiredRGBAtTime:(/*function pointer*/void**)arg1 ;
-(id)pcFloat33MatrixToFxMatrix44:(const float*)arg1 ;
-(id)colorMatrixFromDesiredRGBToYCbCr;
-(id)colorMatrixFromYCbCrToDesiredRGB;
-(BOOL)conformsToProtocol:(id)arg1 version:(unsigned)arg2 ;
@end

