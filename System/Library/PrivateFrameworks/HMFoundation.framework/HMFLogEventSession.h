/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:42 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMFLogEventSessionVoucher, RTCReporting, HMFUnfairLock, NSString;

@interface HMFLogEventSession : NSObject <HMFLogging, NSSecureCoding> {

	HMFLogEventSessionVoucher* _voucher;
	unsigned long long _signpostId;
	RTCReporting* _rtcSession;
	HMFUnfairLock* _sessionLock;
	/*^block*/id _finalizeBlock;

}

@property (nonatomic,retain) RTCReporting * rtcSession;                          //@synthesize rtcSession=_rtcSession - In the implementation block
@property (nonatomic,readonly) HMFUnfairLock * sessionLock;                      //@synthesize sessionLock=_sessionLock - In the implementation block
@property (assign,nonatomic) unsigned long long signpostId;                      //@synthesize signpostId=_signpostId - In the implementation block
@property (nonatomic,copy) id finalizeBlock;                                     //@synthesize finalizeBlock=_finalizeBlock - In the implementation block
@property (nonatomic,readonly) HMFLogEventSessionVoucher * voucher;              //@synthesize voucher=_voucher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMFLogEventSessionVoucher *)voucher;
-(id)initWithVoucher:(id)arg1 rtcFactory:(id)arg2 finalizeBlock:(/*^block*/id)arg3 ;
-(void)finalizeSession;
-(HMFUnfairLock *)sessionLock;
-(RTCReporting *)rtcSession;
-(id)finalizeBlock;
-(void)setFinalizeBlock:(id)arg1 ;
-(void)setRtcSession:(RTCReporting *)arg1 ;
-(id)initWithVoucher:(id)arg1 finalizeBlock:(/*^block*/id)arg2 ;
-(void)submitEventWithName:(id)arg1 payload:(id)arg2 ;
-(unsigned long long)signpostId;
-(void)setSignpostId:(unsigned long long)arg1 ;
@end

