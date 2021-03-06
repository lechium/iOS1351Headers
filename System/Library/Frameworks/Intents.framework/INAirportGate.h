/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:10 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INAirport, NSString;

@interface INAirportGate : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	INAirport* _airport;
	NSString* _terminal;
	NSString* _gate;

}

@property (nonatomic,copy,readonly) INAirport * airport;              //@synthesize airport=_airport - In the implementation block
@property (nonatomic,copy,readonly) NSString * terminal;              //@synthesize terminal=_terminal - In the implementation block
@property (nonatomic,copy,readonly) NSString * gate;                  //@synthesize gate=_gate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INAirport *)airport;
-(NSString *)gate;
-(NSString *)terminal;
-(id)initWithAirport:(id)arg1 terminal:(id)arg2 gate:(id)arg3 ;
@end

