/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <Intents/INIntent.h>

@class NSString;

@interface INCancelRideIntent : INIntent {

	NSString* _rideIdentifier;

}

@property (nonatomic,copy,readonly) NSString * rideIdentifier;              //@synthesize rideIdentifier=_rideIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)intentDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)rideIdentifier;
-(id)initWithRideIdentifier:(id)arg1 ;
@end
