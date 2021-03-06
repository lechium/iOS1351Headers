/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:17 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BYDeviceProvider.h>

@class NSString;

@interface BYDevice : NSObject <BYDeviceProvider> {

	BOOL _hasHomeButton;
	long long _type;
	long long _size;

}

@property (nonatomic,readonly) long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long size;                      //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL hasHomeButton;                  //@synthesize hasHomeButton=_hasHomeButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentDevice;
-(id)init;
-(long long)type;
-(long long)size;
-(id)currentDevice;
-(BOOL)hasHomeButton;
@end

