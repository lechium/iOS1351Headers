/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NUAdSettings.h>

@protocol NUAdSettings <NSObject>
@property (nonatomic,readonly) BOOL debugAdSlotsEnabled; 
@property (nonatomic,readonly) BOOL debugInteractivityEnabled; 
@property (nonatomic,readonly) id<SXAdvertisingSettings> debugAdvertisementSettings; 
@required
-(BOOL)debugAdSlotsEnabled;
-(BOOL)debugInteractivityEnabled;
-(id<SXAdvertisingSettings>)debugAdvertisementSettings;

@end


@protocol SXAdvertisingSettings;
@class NSString;

@interface NUAdSettings : NSObject <NUAdSettings> {

	BOOL _debugAdSlotsEnabled;
	BOOL _debugInteractivityEnabled;
	id<SXAdvertisingSettings> _debugAdvertisementSettings;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL debugAdSlotsEnabled;                                          //@synthesize debugAdSlotsEnabled=_debugAdSlotsEnabled - In the implementation block
@property (nonatomic,readonly) BOOL debugInteractivityEnabled;                                    //@synthesize debugInteractivityEnabled=_debugInteractivityEnabled - In the implementation block
@property (nonatomic,readonly) id<SXAdvertisingSettings> debugAdvertisementSettings;              //@synthesize debugAdvertisementSettings=_debugAdvertisementSettings - In the implementation block
-(BOOL)debugAdSlotsEnabled;
-(BOOL)debugInteractivityEnabled;
-(id<SXAdvertisingSettings>)debugAdvertisementSettings;
-(id)initWithDebugAdSlotsEnabled:(BOOL)arg1 debugInteractivityEnabled:(BOOL)arg2 debugAdvertisementSettings:(id)arg3 ;
@end

