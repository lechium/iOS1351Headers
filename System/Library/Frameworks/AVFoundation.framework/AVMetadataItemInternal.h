/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:51 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSObjectNSCopying;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, NSLocale, NSDate, NSDictionary;

@interface AVMetadataItemInternal : NSObject {

	OpaqueFigMetadataReaderRef reader;
	long long itemIndex;
	NSString* identifier;
	NSString* keySpace;
	id<NSObject><NSCopying> key;
	NSString* commonKey;
	NSLocale* locale;
	NSString* extendedLanguageTag;
	NSString* languageCode;
	id<NSObject><NSCopying> value;
	SCD_Struct_AV7 time;
	SCD_Struct_AV7 duration;
	NSDate* startDate;
	NSDate* discoveryTimestamp;
	NSString* dataType;
	NSDictionary* extras;

}
@end

