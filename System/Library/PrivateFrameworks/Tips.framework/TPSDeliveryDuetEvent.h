/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Tips/Tips-Structs.h>
#import <Tips/TPSDeliveryEvent.h>

@class NSString, TPSDeliveryDuetEventMeta, TPSDeliveryDuetEventSource, TPSDeliveryDuetEventValue;

@interface TPSDeliveryDuetEvent : TPSDeliveryEvent {

	NSString* _stream;
	TPSDeliveryDuetEventMeta* _meta;
	TPSDeliveryDuetEventSource* _source;
	TPSDeliveryDuetEventValue* _value;

}

@property (nonatomic,copy) NSString * stream;                                //@synthesize stream=_stream - In the implementation block
@property (nonatomic,copy) TPSDeliveryDuetEventMeta * meta;                  //@synthesize meta=_meta - In the implementation block
@property (nonatomic,copy) TPSDeliveryDuetEventSource * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) TPSDeliveryDuetEventValue * value;                //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSource:(TPSDeliveryDuetEventSource *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(TPSDeliveryDuetEventSource *)source;
-(TPSDeliveryDuetEventValue *)value;
-(void)setValue:(TPSDeliveryDuetEventValue *)arg1 ;
-(NSString *)stream;
-(void)setStream:(NSString *)arg1 ;
-(TPSDeliveryDuetEventMeta *)meta;
-(void)setMeta:(TPSDeliveryDuetEventMeta *)arg1 ;
-(id)newStateFromStateDictionary:(id)arg1 ;
@end

