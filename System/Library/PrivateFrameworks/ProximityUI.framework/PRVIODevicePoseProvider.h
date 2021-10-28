/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProximityUI/PRDevicePoseProvider.h>
#import <libobjc.A.dylib/ARSessionDelegate.h>

@class ARSession, PRDevicePoseValidator, NSString;

@interface PRVIODevicePoseProvider : PRDevicePoseProvider <ARSessionDelegate> {

	BOOL _trackingNormal;
	ARSession* _session;
	PRDevicePoseValidator* _poseValidator;

}

@property (nonatomic,retain) ARSession * session;                                //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) PRDevicePoseValidator * poseValidator;              //@synthesize poseValidator=_poseValidator - In the implementation block
@property (assign,nonatomic) BOOL trackingNormal;                                //@synthesize trackingNormal=_trackingNormal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(ARSession *)session;
-(void)setSession:(ARSession *)arg1 ;
-(void)session:(id)arg1 didUpdateFrame:(id)arg2 ;
-(id)initWithARSession:(id)arg1 ;
-(void)setPoseValidator:(PRDevicePoseValidator *)arg1 ;
-(void)setTrackingNormal:(BOOL)arg1 ;
-(BOOL)trackingNormal;
-(PRDevicePoseValidator *)poseValidator;
@end
