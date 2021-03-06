/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriActivation/SiriContext.h>

@class NSNumber, NSString;

@interface SiriBluetoothContext : SiriContext {

	NSNumber* _isTemporaryDevice;
	NSNumber* _isEyesFree;
	NSString* _address;

}

@property (nonatomic,readonly) NSString * address;              //@synthesize address=_address - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)address;
-(BOOL)isEyesFree;
-(BOOL)isTemporaryDevice;
-(id)initWithBluetoothDevice:(id)arg1 ;
@end

