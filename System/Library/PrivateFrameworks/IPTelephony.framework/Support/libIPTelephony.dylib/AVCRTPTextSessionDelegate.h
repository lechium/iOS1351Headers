/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IPTelephony.framework/Support/libIPTelephony.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libIPTelephony.dylib/libIPTelephony.dylib-Structs.h>
#import <libobjc.A.dylib/AVCTextStreamDelegate.h>

@class NSString;

@interface AVCRTPTextSessionDelegate : NSObject <AVCTextStreamDelegate> {

	AVCRTPRTTSession* owner;
	AVCRTPStackController* stackController;

}

@property (assign,nonatomic) AVCRTPRTTSession* owner; 
@property (assign,nonatomic) AVCRTPStackController* stackController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setOwner:(AVCRTPRTTSession*)arg1 ;
-(AVCRTPRTTSession*)owner;
-(void)streamDidStop:(id)arg1 ;
-(void)streamDidServerDie:(id)arg1 ;
-(void)stream:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3 ;
-(void)stream:(id)arg1 didPause:(BOOL)arg2 error:(id)arg3 ;
-(void)stream:(id)arg1 didResume:(BOOL)arg2 error:(id)arg3 ;
-(void)streamDidRTPTimeOut:(id)arg1 ;
-(void)streamDidRTCPTimeOut:(id)arg1 ;
-(void)stream:(id)arg1 didReceiveRTCPPackets:(id)arg2 ;
-(id)initWithOwner:(AVCRTPRTTSession*)arg1 andStackController:(AVCRTPStackController*)arg2 ;
-(AVCRTPStackController*)stackController;
-(void)setStackController:(AVCRTPStackController*)arg1 ;
@end

