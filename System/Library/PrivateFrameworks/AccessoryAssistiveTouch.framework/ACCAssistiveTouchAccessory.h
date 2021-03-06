/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AccessoryAssistiveTouch.framework/AccessoryAssistiveTouch
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface ACCAssistiveTouchAccessory : NSObject {

	BOOL _desiredAssistiveTouchState;
	NSString* _accessoryUID;

}

@property (nonatomic,retain) NSString * accessoryUID;                      //@synthesize accessoryUID=_accessoryUID - In the implementation block
@property (assign,nonatomic) BOOL desiredAssistiveTouchState;              //@synthesize desiredAssistiveTouchState=_desiredAssistiveTouchState - In the implementation block
-(NSString *)accessoryUID;
-(id)initWithAccessoryUID:(id)arg1 ;
-(void)setAccessoryUID:(NSString *)arg1 ;
-(BOOL)desiredAssistiveTouchState;
-(void)setDesiredAssistiveTouchState:(BOOL)arg1 ;
@end

