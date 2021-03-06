/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXMediaSharingPolicyProvider.h>

@protocol FCHeadlineProviding, FCNewsAppConfigurationManager;
@class NSString;

@interface NUMediaSharingPolicyProvider : NSObject <SXMediaSharingPolicyProvider> {

	id<FCHeadlineProviding> _headline;
	id<FCNewsAppConfigurationManager> _appConfigurationManager;

}

@property (nonatomic,readonly) id<FCHeadlineProviding> headline;                                       //@synthesize headline=_headline - In the implementation block
@property (nonatomic,readonly) id<FCNewsAppConfigurationManager> appConfigurationManager;              //@synthesize appConfigurationManager=_appConfigurationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long mediaSharingPolicy; 
-(id<FCHeadlineProviding>)headline;
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(unsigned long long)mediaSharingPolicy;
-(id)initWithHeadline:(id)arg1 appConfigurationManager:(id)arg2 ;
@end

