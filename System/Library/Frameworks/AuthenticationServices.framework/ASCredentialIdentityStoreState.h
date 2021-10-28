/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ASCredentialIdentityStoreState : NSObject {

	BOOL _enabled;
	BOOL _supportsIncrementalUpdates;

}

@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;                //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL supportsIncrementalUpdates;              //@synthesize supportsIncrementalUpdates=_supportsIncrementalUpdates - In the implementation block
-(id)description;
-(BOOL)isEnabled;
-(id)initWithEnabledState:(BOOL)arg1 supportsIncrementalUpdates:(BOOL)arg2 ;
-(BOOL)supportsIncrementalUpdates;
@end
