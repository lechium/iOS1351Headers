/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSUUID, NSSet;

@interface DNDSClientConnectionDetails : NSObject <NSCopying, NSMutableCopying> {

	NSUUID* _interruptionInvalidationAssertionUUID;
	NSSet* _assertionUpdateClientIdentifiers;
	BOOL _wantsStateUpdates;
	BOOL _wantsSettingsUpdates;

}

@property (nonatomic,copy,readonly) NSUUID * interruptionInvalidationAssertionUUID;              //@synthesize interruptionInvalidationAssertionUUID=_interruptionInvalidationAssertionUUID - In the implementation block
@property (nonatomic,copy,readonly) NSSet * assertionUpdateClientIdentifiers;                    //@synthesize assertionUpdateClientIdentifiers=_assertionUpdateClientIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL wantsStateUpdates;                                           //@synthesize wantsStateUpdates=_wantsStateUpdates - In the implementation block
@property (nonatomic,readonly) BOOL wantsSettingsUpdates;                                        //@synthesize wantsSettingsUpdates=_wantsSettingsUpdates - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_initWithDetails:(id)arg1 ;
-(NSUUID *)interruptionInvalidationAssertionUUID;
-(NSSet *)assertionUpdateClientIdentifiers;
-(BOOL)wantsStateUpdates;
-(BOOL)wantsSettingsUpdates;
-(id)_initWithInterruptionInvalidationAssertionUUID:(id)arg1 assertionUpdateClientIdentifiers:(id)arg2 wantsStateUpdates:(BOOL)arg3 wantsSettingsUpdates:(BOOL)arg4 ;
@end

