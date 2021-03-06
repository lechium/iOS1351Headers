/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreBluetooth/CBDescriptor.h>

@class NSNumber;

@interface CBMutableDescriptor : CBDescriptor {

	NSNumber* _ID;

}

@property (retain) NSNumber * ID;              //@synthesize ID=_ID - In the implementation block
-(id)description;
-(id)initWithType:(id)arg1 value:(id)arg2 ;
-(NSNumber *)ID;
-(id)initWithCharacteristic:(id)arg1 dictionary:(id)arg2 ;
-(void)setID:(NSNumber *)arg1 ;
@end

