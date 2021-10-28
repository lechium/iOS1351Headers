/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CFNetwork/NSURLProtocol.h>

@class AMSMockURLOverride;

@interface AMSMockNetworkProxy : NSURLProtocol {

	AMSMockURLOverride* _currentOverride;

}

@property (nonatomic,retain) AMSMockURLOverride * currentOverride;              //@synthesize currentOverride=_currentOverride - In the implementation block
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(id)_overrides;
+(void)_sync:(/*^block*/id)arg1 ;
+(id)_executedOverrides;
+(void)_removeOverride:(id)arg1 ;
+(id)registeredOverrides;
+(id)executedOverrides;
+(void)addOverride:(id)arg1 ;
+(void)clearOverrides;
+(void)removeOverride:(id)arg1 ;
+(void)_removeAllOverrides;
-(void)finishWithError:(id)arg1 ;
-(void)sendResponse:(id)arg1 ;
-(void)stopLoading;
-(void)startLoading;
-(void)setCurrentOverride:(AMSMockURLOverride *)arg1 ;
-(void)finishWithData:(id)arg1 ;
-(AMSMockURLOverride *)currentOverride;
-(void)performRedirectFromResponse:(id)arg1 ;
@end
