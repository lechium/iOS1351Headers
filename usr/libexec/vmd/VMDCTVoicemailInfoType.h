//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreTelephony/CTVoicemailInfoType.h>

@class NSNumber, NSString;

@interface VMDCTVoicemailInfoType : CTVoicemailInfoType
{
}

+ (id)voicemailInfoTypeForDictionaryRepresentation:(id)arg1;	// IMP=0x0000000100013bc4
- (id)description;	// IMP=0x0000000100013e64

// Remaining properties
@property(nonatomic) _Bool available; // @dynamic available;
@property(retain, nonatomic) NSNumber *count; // @dynamic count;
@property(nonatomic) _Bool isNetworkOriginated; // @dynamic isNetworkOriginated;
@property(nonatomic) _Bool isVoiceMailMWI; // @dynamic isVoiceMailMWI;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end
