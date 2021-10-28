/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:00 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/TMLVectorJSExports.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TMLVector : NSObject <TMLVectorJSExports, NSCopying> {

	CGVector _vector;

}

@property (nonatomic,readonly) CGVector vector;              //@synthesize vector=_vector - In the implementation block
@property (nonatomic,readonly) double dx; 
@property (nonatomic,readonly) double dy; 
+(void)initializeJSContext:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)CGVectorValue;
-(double)dx;
-(id)initWithVector:(CGVector)arg1 ;
-(CGVector)vector;
-(double)dy;
@end
