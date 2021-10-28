/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ToneKit/ToneKit-Structs.h>
@interface TKVibrationRecorderRippleTouchContext : NSObject {

	double _creationTimestamp;
	CGPoint _location;

}

@property (nonatomic,readonly) CGPoint location;              //@synthesize location=_location - In the implementation block
-(id)init;
-(void)reset;
-(CGPoint)location;
-(double)timeIntervalSinceCreation;
-(void)configureWithTimeIntervalSinceCreation:(double)arg1 location:(CGPoint)arg2 ;
@end
