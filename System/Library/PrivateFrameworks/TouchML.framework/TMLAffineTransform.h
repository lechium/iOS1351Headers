/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:00 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/TMLAffineTransformJSExports.h>

@interface TMLAffineTransform : NSObject <TMLAffineTransformJSExports> {

	CGAffineTransform _transform;

}

@property (nonatomic,readonly) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) double a; 
@property (nonatomic,readonly) double b; 
@property (nonatomic,readonly) double c; 
@property (nonatomic,readonly) double d; 
@property (nonatomic,readonly) double tx; 
@property (nonatomic,readonly) double ty; 
+(void)initializeJSContext:(id)arg1 ;
-(double)c;
-(CGAffineTransform)transform;
-(double)tx;
-(double)ty;
-(id)CGAffineTransformValue;
-(double)b;
-(double)a;
-(id)initWithAffineTransform:(CGAffineTransform)arg1 ;
-(double)d;
@end

