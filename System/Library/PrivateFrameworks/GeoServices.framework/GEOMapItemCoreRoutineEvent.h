/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:37 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOBaseMapItem.h>

@class NSDictionary, GEOMapItemClientAttributes, GEOPlace, NSString, NSDate, GEOAddressObject;

@interface GEOMapItemCoreRoutineEvent : GEOBaseMapItem {

	NSDictionary* _addressDictionary;
	GEOMapItemClientAttributes* _clientAttributes;
	GEOPlace* _place;
	NSString* _eventName;
	NSString* _eventTitle;
	NSDate* _eventDate;
	BOOL _eventIsAllDay;
	SCD_Struct_GE32 _coordinate;
	GEOAddressObject* _addressObject;

}
-(id)description;
-(id)name;
-(BOOL)isValid;
-(SCD_Struct_GE32)coordinate;
-(id)eventName;
-(id)addressDictionary;
-(id)_place;
-(id)eventDate;
-(BOOL)isEventAllDay;
-(id)addressObject;
-(id)weatherDisplayName;
-(id)geoAddress;
-(id)_clientAttributes;
-(BOOL)_hasResolvablePartialInformation;
-(BOOL)_responseStatusIsIncomplete;
-(id)initWithAddressDictionary:(id)arg1 eventName:(id)arg2 eventTitle:(id)arg3 eventDate:(id)arg4 eventIsAllDay:(BOOL)arg5 coordinate:(SCD_Struct_GE32)arg6 clientAttributes:(id)arg7 ;
@end

