//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUI/TPAlert.h>

@class NSString;

@interface ICSEmergencyCallbackModeAlert : TPAlert
{
    NSString *_dialRequestAccountDescription;	// 8 = 0x8
    NSString *_emergencyAccountDescription;	// 16 = 0x10
    CDUnknownBlockType _alertCompletion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010008b08c
@property(readonly, nonatomic) CDUnknownBlockType alertCompletion; // @synthesize alertCompletion=_alertCompletion;
@property(readonly, copy, nonatomic) NSString *emergencyAccountDescription; // @synthesize emergencyAccountDescription=_emergencyAccountDescription;
@property(readonly, copy, nonatomic) NSString *dialRequestAccountDescription; // @synthesize dialRequestAccountDescription=_dialRequestAccountDescription;
- (void)alternateResponse;	// IMP=0x000000010008b01c
- (void)defaultResponse;	// IMP=0x000000010008afdc
- (id)alternateButtonTitle;	// IMP=0x000000010008af68
- (id)defaultButtonTitle;	// IMP=0x000000010008aef4
- (id)message;	// IMP=0x000000010008ade8
- (id)title;	// IMP=0x000000010008ad74
- (id)initWithDialRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010008aa84

@end

