/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:56 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SoundAutoConfig.framework/SoundAutoConfig
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SACServiceSYSDelegate.h>

@protocol SACServiceDelegate, SACServiceSYSDelegate, SACSYSDelegate;
@class NSXPCConnection, NSString;

@interface SACSYSController : NSObject <SACServiceSYSDelegate> {

	NSXPCConnection* mServiceConnection;
	id<SACServiceDelegate> mProxyInterface;
	id<SACServiceSYSDelegate> mSACSYSDelegate;
	id<SACSYSDelegate> _delegate;

}

@property (assign,nonatomic) id<SACSYSDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SACSYSDelegate>)delegate;
-(void)setDelegate:(id<SACSYSDelegate>)arg1 ;
-(void)startServiceConnection;
-(void)handleServiceCrash;
-(void)setSYSConfig:(id)arg1 ;
@end
