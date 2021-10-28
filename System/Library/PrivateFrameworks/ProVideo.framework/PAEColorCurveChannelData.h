/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/FxCustomParameterInterpolation.h>

@interface PAEColorCurveChannelData : NSObject <NSCoding, NSCopying, FxCustomParameterInterpolation> {

	void* _curve_private;

}
+(id)channelDataWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 curve:(const color_t<double>*)arg4 ;
+(id)channelDataWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)reset;
-(double)red;
-(double)green;
-(double)blue;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
-(BOOL)isEqualTo:(id)arg1 ;
-(double)evaluate:(double)arg1 ;
-(color_t<double>*)curveRef;
-(id)interpolateBetween:(id)arg1 withWeight:(float)arg2 ;
-(BOOL)isAtDefaults;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 curve:(const color_t<double>*)arg4 ;
@end
