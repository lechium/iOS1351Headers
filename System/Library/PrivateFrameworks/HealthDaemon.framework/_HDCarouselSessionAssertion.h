/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:55 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDAssertion.h>

@class NSString;

@interface _HDCarouselSessionAssertion : HDAssertion {

	BOOL _supportsAOT;
	NSString* _applicationBundleIdentifier;

}

@property (nonatomic,readonly) NSString * applicationBundleIdentifier;              //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL supportsAOT;                                      //@synthesize supportsAOT=_supportsAOT - In the implementation block
-(NSString *)applicationBundleIdentifier;
-(id)initWithOwnerIdentifier:(id)arg1 ;
-(BOOL)supportsAOT;
-(void)setSupportsAOT:(BOOL)arg1 ;
@end
